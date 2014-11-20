<?php
/**
 * @file
 * cumbancha_feature.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function cumbancha_feature_flag_default_flags() {
  $flags = array();
  // Exported flag: "Bookmarks".
  $flags['bookmarks'] = array(
    'entity_type' => 'node',
    'title' => 'Bookmarks',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Bookmark this',
    'flag_long' => 'Add this post to your bookmarks',
    'flag_message' => 'This post has been added to your bookmarks',
    'unflag_short' => 'Unbookmark this',
    'unflag_long' => 'Remove this post from your bookmarks',
    'unflag_message' => 'This post has been removed from your bookmarks',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 1,
      'teaser' => 1,
    ),
    'show_as_field' => FALSE,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'cumbancha_feature',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Recomendado".
  $flags['recomendado'] = array(
    'entity_type' => 'node',
    'title' => 'Recomendado',
    'global' => 1,
    'types' => array(
      0 => 'actividad',
      1 => 'artista',
      2 => 'circuito',
      3 => 'establecimiento',
      4 => 'grupo_artistico',
      5 => 'presentacion',
    ),
    'flag_short' => 'Recomendar',
    'flag_long' => 'Si crees que vale la pena.',
    'flag_message' => 'Acabas de recomendar este contenido a la comunidad de Cumbancha.',
    'unflag_short' => 'Retirar recomendación',
    'unflag_long' => 'Si crees que ya no vale la pena.',
    'unflag_message' => 'Acabas de retirar la recomendación que hacías de este contenido a la comunidad de Cumbancha.',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'email_plain' => 0,
      'email_html' => 0,
      'email_textalt' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'cumbancha_feature',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function cumbancha_feature_image_default_styles() {
  $styles = array();

  // Exported image style: tiniest.
  $styles['tiniest'] = array(
    'name' => 'tiniest',
    'label' => 'Tiniest',
    'effects' => array(
      2 => array(
        'label' => 'Redimensionar',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 20,
          'height' => 20,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: tiny.
  $styles['tiny'] = array(
    'name' => 'tiny',
    'label' => 'Tiny (50x50)',
    'effects' => array(
      1 => array(
        'label' => 'Escala',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 50,
          'height' => 50,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_invite_type().
 */
function cumbancha_feature_default_invite_type() {
  $items = array();
  $items['invite_by_email'] = entity_import('invite_type', '{
    "type" : "invite_by_email",
    "label" : "Invite by e-mail",
    "weight" : 0,
    "argument_keys" : [],
    "argument" : [],
    "invite_sending_controller" : { "invite_by_email" : "invite_by_email" },
    "description" : "Invitation by e-mail.",
    "data" : { "invite_by_email" : { "use_default" : 0, "message_editable" : 0, "replace_tokens" : 0 } },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function cumbancha_feature_node_info() {
  $items = array(
    'actividad' => array(
      'name' => t('Actividad'),
      'base' => 'node_content',
      'description' => t('Actividades culturales, festivas, recreativas que tienen lugar en establecimientos u otros sitios.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
    'artista' => array(
      'name' => t('Artista'),
      'base' => 'node_content',
      'description' => t('Persona o agrupación que practica una manifestación artística de manera profesional.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
    'circuito' => array(
      'name' => t('Circuito'),
      'base' => 'node_content',
      'description' => t('Circuitos temáticos compuestos por varias actividades afines.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
    'establecimiento' => array(
      'name' => t('Establecimiento'),
      'base' => 'node_content',
      'description' => t('Lugares a los que se puede asistir para disfrutar de sus servicios, eventos, actividades, opciones recreativas, artistas que se presenten, etc...'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
    'grupo_artistico' => array(
      'name' => t('Grupo artístico'),
      'base' => 'node_content',
      'description' => t('Entidad artística formada por más de una persona (artista). Ejemplo: dúos, tríos, coros, agrupaciones musicales, compañías de teatro, danza, etc...'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Página básica'),
      'base' => 'node_content',
      'description' => t('Use las <em>páginas básicas</em> para su contenido estático, como una página "Acerca de...".'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'presentacion' => array(
      'name' => t('Presentación habitual'),
      'base' => 'node_content',
      'description' => t('Presentaciones habituales de un artista o una agrupación en un establecimiento, con un horario determinado.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
    'simplenews' => array(
      'name' => t('Simplenews newsletter'),
      'base' => 'node_content',
      'description' => t('A newsletter issue to be sent to subscribed email addresses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_registration_state().
 */
function cumbancha_feature_default_registration_state() {
  $items = array();
  $items['canceled'] = entity_import('registration_state', '{
    "name" : "canceled",
    "label" : "Cancelada",
    "description" : "Registration was cancelled",
    "default_state" : "0",
    "active" : "1",
    "show_on_form" : "1",
    "weight" : "-12",
    "rdf_mapping" : []
  }');
  $items['complete'] = entity_import('registration_state', '{
    "name" : "complete",
    "label" : "Aprobada",
    "description" : "Registration has been completed.",
    "default_state" : "0",
    "active" : "1",
    "show_on_form" : "1",
    "weight" : "-14",
    "rdf_mapping" : []
  }');
  $items['pending'] = entity_import('registration_state', '{
    "name" : "pending",
    "label" : "Enviada",
    "description" : "Registration is pending.",
    "default_state" : "1",
    "active" : "1",
    "show_on_form" : "1",
    "weight" : "-15",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function cumbancha_feature_default_registration_type() {
  $items = array();
  $items['circuito'] = entity_import('registration_type', '{
    "name" : "circuito",
    "label" : "Circuito",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
