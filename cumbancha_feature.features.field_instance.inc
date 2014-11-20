<?php
/**
 * @file
 * cumbancha_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cumbancha_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_actividad-comment_body'
  $field_instances['comment-comment_node_actividad-comment_body'] = array(
    'bundle' => 'comment_node_actividad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comentar',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_actividad-field_publicitar'
  $field_instances['comment-comment_node_actividad-field_publicitar'] = array(
    'bundle' => 'comment_node_actividad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Marque si desea que el comentario sea publicado en portada <em>Lo que se comenta</em>.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_publicitar',
    'label' => 'Publicitar',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'comment-comment_node_artista-comment_body'
  $field_instances['comment-comment_node_artista-comment_body'] = array(
    'bundle' => 'comment_node_artista',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comentar',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_artista-field_publicitar'
  $field_instances['comment-comment_node_artista-field_publicitar'] = array(
    'bundle' => 'comment_node_artista',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Marque si desea que el comentario sea publicado en portada <em>Lo que se comenta</em>.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_publicitar',
    'label' => 'Publicitar',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'comment-comment_node_circuito-comment_body'
  $field_instances['comment-comment_node_circuito-comment_body'] = array(
    'bundle' => 'comment_node_circuito',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comentar',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_circuito-field_publicitar'
  $field_instances['comment-comment_node_circuito-field_publicitar'] = array(
    'bundle' => 'comment_node_circuito',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Marque si desea que el comentario sea publicado en portada <em>Lo que se comenta</em>.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_publicitar',
    'label' => 'Publicitar',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'comment-comment_node_establecimiento-comment_body'
  $field_instances['comment-comment_node_establecimiento-comment_body'] = array(
    'bundle' => 'comment_node_establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comentar',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_establecimiento-field_publicitar'
  $field_instances['comment-comment_node_establecimiento-field_publicitar'] = array(
    'bundle' => 'comment_node_establecimiento',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Marque si desea que el comentario sea publicado en portada <em>Lo que se comenta</em>.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_publicitar',
    'label' => 'Publicitar',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'comment-comment_node_grupo_artistico-comment_body'
  $field_instances['comment-comment_node_grupo_artistico-comment_body'] = array(
    'bundle' => 'comment_node_grupo_artistico',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comentar',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_grupo_artistico-field_publicitar'
  $field_instances['comment-comment_node_grupo_artistico-field_publicitar'] = array(
    'bundle' => 'comment_node_grupo_artistico',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Marque si desea que el comentario sea publicado en portada <em>Lo que se comenta</em>.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_publicitar',
    'label' => 'Publicitar',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'comment-comment_node_page-comment_body'
  $field_instances['comment-comment_node_page-comment_body'] = array(
    'bundle' => 'comment_node_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_presentacion-comment_body'
  $field_instances['comment-comment_node_presentacion-comment_body'] = array(
    'bundle' => 'comment_node_presentacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_presentacion-field_publicitar'
  $field_instances['comment-comment_node_presentacion-field_publicitar'] = array(
    'bundle' => 'comment_node_presentacion',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Marque si desea que el comentario sea publicado en portada <em>Lo que se comenta</em>.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_publicitar',
    'label' => 'Publicitar',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'comment-comment_node_simplenews-comment_body'
  $field_instances['comment-comment_node_simplenews-comment_body'] = array(
    'bundle' => 'comment_node_simplenews',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'invite-invite_by_email-field_invitation_email_address'
  $field_instances['invite-invite_by_email-field_invitation_email_address'] = array(
    'bundle' => 'invite_by_email',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Type e-mail address of person you wish invite.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'invite',
    'field_name' => 'field_invitation_email_address',
    'label' => 'Correo electrónico',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'invite-invite_by_email-field_invitation_email_body'
  $field_instances['invite-invite_by_email-field_invitation_email_body'] = array(
    'bundle' => 'invite_by_email',
    'default_value' => array(
      0 => array(
        'value' => '[invite:inviter:name] has invited you to join [site:name] at [site:url].

To become a member of [site:name], click the link below or paste it into the address bar of your browser.

[invite:invite-accept-link]',
      ),
    ),
    'deleted' => 0,
    'description' => 'Enter e-mail body.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'invite',
    'field_name' => 'field_invitation_email_body',
    'label' => 'Cuerpo',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'invite-invite_by_email-field_invitation_email_subject'
  $field_instances['invite-invite_by_email-field_invitation_email_subject'] = array(
    'bundle' => 'invite_by_email',
    'default_value' => array(
      0 => array(
        'value' => '[invite:inviter:name] has sent you an invite!',
      ),
    ),
    'deleted' => 0,
    'description' => 'Enter e-mail subject.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'invite',
    'field_name' => 'field_invitation_email_subject',
    'label' => 'Asunto',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-actividad-body'
  $field_instances['node-actividad-body'] = array(
    'bundle' => 'actividad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Breve descripción de las características de la actividad.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Descripción',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-actividad-field_capacidad_limitada'
  $field_instances['node-actividad-field_capacidad_limitada'] = array(
    'bundle' => 'actividad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Si la actividad tiene un número limitado de asistentes, ingrese aquí la cantidad.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_capacidad_limitada',
    'label' => 'Capacidad limitada',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => ' personas',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-actividad-field_estrellas'
  $field_instances['node-actividad-field_estrellas'] = array(
    'bundle' => 'actividad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'default',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_estrellas',
    'label' => 'Estrellas',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 1,
      'allow_revote' => 1,
      'stars' => 10,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(),
      'type' => 'exposed',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-actividad-field_fecha_y_hora'
  $field_instances['node-actividad-field_fecha_y_hora'] = array(
    'bundle' => 'actividad',
    'deleted' => 0,
    'description' => 'Fecha y hora en que tendrá lugar la actividad. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medio_mayusculas',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fecha_y_hora',
    'label' => 'Fecha y hora',
    'required' => 1,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'j M Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-0:+10',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-actividad-field_imagen_de_portada'
  $field_instances['node-actividad-field_imagen_de_portada'] = array(
    'bundle' => 'actividad',
    'deleted' => 0,
    'description' => 'Imagen que caracteriza esta actividad.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_imagen_de_portada',
    'label' => 'Imagen de portada',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images/activity-images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-actividad-field_lugar'
  $field_instances['node-actividad-field_lugar'] = array(
    'bundle' => 'actividad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Lugar donde se realizará la actividad. 
<br/>
Al teclear se autocompleta con lugares ya insertados previamente.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_lugar',
    'label' => 'Lugar',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-actividad-field_palabras_clave'
  $field_instances['node-actividad-field_palabras_clave'] = array(
    'bundle' => 'actividad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Inserte las palabras clave que permiten caracterizar la actividad, separadas por coma.
<br/>
Pueden referirse a lo que se va a realizar, a la edad de las personas que asistirán, al lugar, a la temática de la misma, al tipo de música o comestibles (de ser el caso), etc. Ejemplo: en el caso de un concierto de rock en la playa las palabras claves podrían ser <em>rock, concierto, playa</em>
<br/>
Mientras más palabras clave, es mejor a la hora de realizar búsquedas.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_palabras_clave',
    'label' => 'Palabras clave',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-actividad-field_precio_de_entrada'
  $field_instances['node-actividad-field_precio_de_entrada'] = array(
    'bundle' => 'actividad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Si la actividad no es de entrada libre, indique aquí el precio per cápita de la misma. 
<br/>
Utilice la coma <em>(,)</em> como separador de decimales.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_precio_de_entrada',
    'label' => 'Precio de entrada',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' CUP',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-actividad-field_publicitar'
  $field_instances['node-actividad-field_publicitar'] = array(
    'bundle' => 'actividad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Marque si desea que el contenido salga en el carrusel de publicidad.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_publicitar',
    'label' => 'Publicitar',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-artista-body'
  $field_instances['node-artista-body'] = array(
    'bundle' => 'artista',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Breve descripción del artista.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Descripción',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-artista-field_email'
  $field_instances['node-artista-field_email'] = array(
    'bundle' => 'artista',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Correo electrónico de contacto.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-artista-field_estrellas'
  $field_instances['node-artista-field_estrellas'] = array(
    'bundle' => 'artista',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'sites/all/modules/fivestar/widgets/minimal/minimal.css',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_estrellas',
    'label' => 'Estrellas',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 1,
      'allow_revote' => 1,
      'stars' => 10,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(),
      'type' => 'exposed',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-artista-field_imagen_de_portada'
  $field_instances['node-artista-field_imagen_de_portada'] = array(
    'bundle' => 'artista',
    'deleted' => 0,
    'description' => 'Imagen que caracteriza al artista.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_imagen_de_portada',
    'label' => 'Imagen de portada',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 14,
      'file_directory' => 'images/artist-images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '100 KB',
      'max_resolution' => '200x200',
      'min_resolution' => '100x100',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-artista-field_integra_agrupacion'
  $field_instances['node-artista-field_integra_agrupacion'] = array(
    'bundle' => 'artista',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Agrupaciones a las cuales pertence el artista. 
<br/>
Insértelas separadas por comas <em>(,)</em> con el formato <em>[Tipo][Nombre]</em>. Ejemplo <em>Coro Exaudi, Orquesta Revé, Grupo Mezcla, Dúo Karma</em>. 
<br/>
Los datos se autocompletarán si ya han sido insertados anteriormente.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integra_agrupacion',
    'label' => 'Integra',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-artista-field_ocupacion'
  $field_instances['node-artista-field_ocupacion'] = array(
    'bundle' => 'artista',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Defina las ocupaciones del artista, en masculino y separándolas por comas. Ejemplo: <em>Cantante, Actor, Presentador</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ocupacion',
    'label' => 'Ocupación',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-artista-field_palabras_clave'
  $field_instances['node-artista-field_palabras_clave'] = array(
    'bundle' => 'artista',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Inserte las palabras clave que permiten caracterizar al artista, separadas por coma.
<br/>
Pueden referirse al género de música que interpreta o baila, a lo que caracterice su arte, a la manifestación artística que cultive, a la edad del público seguidor, etc. Ejemplo: en el caso de Liuba María Hevia las palabras claves podrían ser <em>Guajira, Tango, Infantil, Bolero, Trova...</em>.
<br/>
Mientras más palabras clave, es mejor a la hora de realizar búsquedas.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_palabras_clave',
    'label' => 'Palabras clave',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-artista-field_publicitar'
  $field_instances['node-artista-field_publicitar'] = array(
    'bundle' => 'artista',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Marque si desea que el contenido salga en el carrusel de publicidad.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_publicitar',
    'label' => 'Publicitar',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-artista-field_telefono'
  $field_instances['node-artista-field_telefono'] = array(
    'bundle' => 'artista',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Número de teléfono de conacto del artista.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_telefono',
    'label' => 'Teléfono',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-circuito-body'
  $field_instances['node-circuito-body'] = array(
    'bundle' => 'circuito',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Breve descripción de las características del circuito.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Descripción',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-circuito-field_actividades'
  $field_instances['node-circuito-field_actividades'] = array(
    'bundle' => 'circuito',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Seleccione las actividades que formarán parte del circuito.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_actividades',
    'label' => 'Actividades',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-circuito-field_capacidad_limitada'
  $field_instances['node-circuito-field_capacidad_limitada'] = array(
    'bundle' => 'circuito',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Si la actividad tiene un número limitado de asistentes, ingrese aquí la cantidad.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_capacidad_limitada',
    'label' => 'Capacidad limitada',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => ' personas',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-circuito-field_fecha_y_hora'
  $field_instances['node-circuito-field_fecha_y_hora'] = array(
    'bundle' => 'circuito',
    'deleted' => 0,
    'description' => 'Fecha en que tendrán lugar las actividades del circuito y hora de partida desde el punto de reunión.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medio_mayusculas',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fecha_y_hora',
    'label' => 'Fecha y hora',
    'required' => 1,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 30,
        'input_format' => 'j M Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-0:+1',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-circuito-field_imagen_de_portada'
  $field_instances['node-circuito-field_imagen_de_portada'] = array(
    'bundle' => 'circuito',
    'deleted' => 0,
    'description' => 'Una imagen afín con la temática del circuito.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_imagen_de_portada',
    'label' => 'Imagen de portada',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 69,
      'file_directory' => 'images/circuit-images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '100 KB',
      'max_resolution' => '200x200',
      'min_resolution' => '100x100',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-circuito-field_palabras_clave'
  $field_instances['node-circuito-field_palabras_clave'] = array(
    'bundle' => 'circuito',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Inserte las palabras clave que permiten caracterizar al circuito, separadas por coma.
<br/>
Pueden referirse más en detalle a la temática, los lugares, las actividades, a la edad más probable de los asistentes potenciales, etc. Ejemplo: en el caso de un circuito sobre automóviles antiguos las palabras claves podrían ser <em/>Automóviles, Carros, Autos, Antigüedades, Almendrones...<em/>.
<br/>
Mientras más palabras clave, es mejor a la hora de realizar búsquedas.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_palabras_clave',
    'label' => 'Palabras clave',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-circuito-field_publicitar'
  $field_instances['node-circuito-field_publicitar'] = array(
    'bundle' => 'circuito',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Marque si desea que el contenido salga en el carrusel de publicidad.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_publicitar',
    'label' => 'Publicitar',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-circuito-field_punto_de_partida'
  $field_instances['node-circuito-field_punto_de_partida'] = array(
    'bundle' => 'circuito',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Lugar donde se reunirán los miembros del circuito con el responsable para comenzar las actividades.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_punto_de_partida',
    'label' => 'Punto de partida',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-circuito-field_responsable'
  $field_instances['node-circuito-field_responsable'] = array(
    'bundle' => 'circuito',
    'default_value' => array(
      0 => array(
        'value' => 'Javier',
      ),
    ),
    'deleted' => 0,
    'description' => 'Persona encargada de la la coordinación y asistencia a las actividades del circuito.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_responsable',
    'label' => 'Responsable',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-circuito-field_solicitudes'
  $field_instances['node-circuito-field_solicitudes'] = array(
    'bundle' => 'circuito',
    'default_value' => array(
      0 => array(
        'registration_type' => 'circuito',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'registration',
        'settings' => array(),
        'type' => 'registration_form',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_solicitudes',
    'label' => 'Inscribirse a este circuito',
    'required' => 0,
    'settings' => array(
      'default_registration_settings' => array(
        'capacity' => 0,
        'reminder' => array(
          'reminder_settings' => array(
            'reminder_date' => NULL,
            'reminder_template' => '',
          ),
          'send_reminder' => 0,
        ),
        'scheduling' => array(
          'close' => NULL,
          'open' => NULL,
        ),
        'settings' => array(
          'confirmation' => 'Solicitud recibida. Te enviaremos la confirmación de participación cuanto antes.',
          'from_address' => 'cumbancha@cumbancha.com',
          'maximum_spaces' => 1,
          'multiple_registrations' => 0,
          'registration_entity_access_roles' => array(
            2 => 2,
            3 => 0,
            4 => 0,
            5 => 0,
          ),
          'registration_waitlist_capacity' => 0,
          'registration_waitlist_enable' => 0,
        ),
        'status' => 1,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'registration',
      'settings' => array(),
      'type' => 'registration_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-circuito-field_tematica'
  $field_instances['node-circuito-field_tematica'] = array(
    'bundle' => 'circuito',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Temática del circuito.
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tematica',
    'label' => 'Temática',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-establecimiento-body'
  $field_instances['node-establecimiento-body'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Una descripción del lugar. 
<br/>
<em>En este campo podría añadirse el menú de restaurantes, cafeterías... la carta de bebidas de bares, clubes... la especialidad del lugar... la programación de espectáculos, presentaciones de teatros, cabarets... la cartelera de cines, etc.</em>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Descripción',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_calle'
  $field_instances['node-establecimiento-field_calle'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Calle, avenida, carretera, camino... donde se encuentra el establecimiento.
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_calle',
    'label' => 'Calle',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_email'
  $field_instances['node-establecimiento-field_email'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Correo eléctronico de contacto con el establecimiento.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_entrecalle_1_'
  $field_instances['node-establecimiento-field_entrecalle_1_'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Primera entrecalle. Si el inmueble hace esquina, ingrese aquí la calle con la que hace esquina.
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_entrecalle_1_',
    'label' => 'Entrecalle (1)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_entrecalle_2_'
  $field_instances['node-establecimiento-field_entrecalle_2_'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Segunda entrecalle. Si el inmueble hace esquina, deje vacío este campo.
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_entrecalle_2_',
    'label' => 'Entrecalle (2)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_estrellas'
  $field_instances['node-establecimiento-field_estrellas'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'default',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_estrellas',
    'label' => 'Estrellas',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 1,
      'allow_revote' => 1,
      'stars' => 10,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(),
      'type' => 'exposed',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_horario'
  $field_instances['node-establecimiento-field_horario'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Horario de servicio, presentaciones, atención al público, etc. del establecimiento.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'timefield',
        'settings' => array(
          'display_format' => array(
            'hour' => 'g',
            'minute' => 'i',
            'period' => 'A',
            'period_separator' => ' ',
            'separator' => ':',
          ),
        ),
        'type' => 'timefield_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_horario',
    'label' => 'Horario',
    'required' => 0,
    'settings' => array(
      'disable_plugin' => 0,
      'input_format' => array(
        'am_text' => 'AM',
        'atPosition' => 'left bottom',
        'closeButtonText' => 'OK',
        'deselectButtonText' => 'Deselect',
        'myPosition' => 'left top',
        'nowButtonText' => 'Now',
        'periodSeparator' => ' ',
        'pm_text' => 'PM',
        'separator' => ':',
        'showCloseButton' => 1,
        'showDeselectButton' => 0,
        'showLeadingZero' => 0,
        'showNowButton' => 0,
        'showPeriod' => 1,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'timefield',
      'settings' => array(
        'label_position' => 'above',
      ),
      'type' => 'timefield_standard',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_imagen_de_portada'
  $field_instances['node-establecimiento-field_imagen_de_portada'] = array(
    'bundle' => 'establecimiento',
    'deleted' => 0,
    'description' => 'Imagen que caracteriza al establecimiento.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_imagen_de_portada',
    'label' => 'Imagen de portada',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 15,
      'file_directory' => 'images/place-images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '100 KB',
      'max_resolution' => '200x200',
      'min_resolution' => '100x100',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_municipio'
  $field_instances['node-establecimiento-field_municipio'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Municipio donde se encuentra el establecimiento.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_municipio',
    'label' => 'Municipio',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_numero'
  $field_instances['node-establecimiento-field_numero'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Número del inmueble.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_numero',
    'label' => 'Número',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_palabras_clave'
  $field_instances['node-establecimiento-field_palabras_clave'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Inserte las palabras clave que permiten caracterizar al establecimiento, separadas por coma.
<br/>
Pueden referirse más en detalle a la música que se pone, la especialidad de lo que se come, las actividades que allí se realizan, la edad más probable de los asistentes potenciales, etc. Ejemplo: en el caso de un restaurante las palabras claves podrían ser <em/>Comida italiana, Canelones, Música cubana...<em/>. En el caso de un club las palabras claves podrían ser <em/>Rock, Trova, Sangría, 50 años...<em/>.
<br/>
Mientras más palabras clave, es mejor a la hora de realizar búsquedas.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_palabras_clave',
    'label' => 'Palabras clave',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_publicitar'
  $field_instances['node-establecimiento-field_publicitar'] = array(
    'bundle' => 'establecimiento',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Marque si desea que el contenido salga en el carrusel de publicidad.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_publicitar',
    'label' => 'Publicitar',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_publico_habitual_edades_'
  $field_instances['node-establecimiento-field_publico_habitual_edades_'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Escoja el rango de edades del público que asiste asiduamente al establecimiento.
<br/>
Si asisten personas de todas las edades, no seleccione ninguno.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_publico_habitual_edades_',
    'label' => 'Público habitual (edades)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_publico_habitual_orientaci'
  $field_instances['node-establecimiento-field_publico_habitual_orientaci'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Defina si es posible la orientación sexual predominante del publico asiduo al local.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_publico_habitual_orientaci',
    'label' => 'Público habitual (orientación sexual)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_publico_habitual_sexo_'
  $field_instances['node-establecimiento-field_publico_habitual_sexo_'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Defina si asiste más público de un sexo que de otro.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_publico_habitual_sexo_',
    'label' => 'Público habitual (sexo)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_publico_habitual_tribus_ur'
  $field_instances['node-establecimiento-field_publico_habitual_tribus_ur'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Defina si es posible las tribus urbanas que asisten mayormente al establecimiento. Ejemplo: <em>Repas, Frikis, Mikis</em>
<br/>
De no haber una tendencia marcada hacia ninguna, deje el formulario vacío.
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_publico_habitual_tribus_ur',
    'label' => 'Público habitual (tribus urbanas)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_reparto'
  $field_instances['node-establecimiento-field_reparto'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Reparto, zona, barriada... donde se encuentra el establecimiento.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_reparto',
    'label' => 'Reparto',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_sitio_web'
  $field_instances['node-establecimiento-field_sitio_web'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Sitio web del establecimiento.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'url',
        'settings' => array(
          'nofollow' => 0,
          'trim_length' => '',
        ),
        'type' => 'url_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitio_web',
    'label' => 'Sitio web',
    'required' => 0,
    'settings' => array(
      'title_fetch' => 1,
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'url',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'url_external',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_sufijo'
  $field_instances['node-establecimiento-field_sufijo'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Sufijo del número del inmueble. Ejemplo: 104 <strong>A</strong>, 22 <strong>altos</strong>, 1037 <strong>interior</strong>...',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sufijo',
    'label' => 'Sufijo',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_telefono'
  $field_instances['node-establecimiento-field_telefono'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Número teléfonico de contacto del establecimiento.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_telefono',
    'label' => 'Teléfono',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-establecimiento-field_tipo'
  $field_instances['node-establecimiento-field_tipo'] = array(
    'bundle' => 'establecimiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Defina el tipo de establecimiento tecleándolo. Ejemplo: <em>Bar, Restaurante, Club</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tipo',
    'label' => 'Tipo',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-grupo_artistico-body'
  $field_instances['node-grupo_artistico-body'] = array(
    'bundle' => 'grupo_artistico',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Breve ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Descripción',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-grupo_artistico-field_email'
  $field_instances['node-grupo_artistico-field_email'] = array(
    'bundle' => 'grupo_artistico',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Correo electrónico de contacto.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-grupo_artistico-field_estrellas'
  $field_instances['node-grupo_artistico-field_estrellas'] = array(
    'bundle' => 'grupo_artistico',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'default',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_estrellas',
    'label' => 'Estrellas',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 1,
      'allow_revote' => 1,
      'stars' => 10,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(),
      'type' => 'exposed',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-grupo_artistico-field_imagen_de_portada'
  $field_instances['node-grupo_artistico-field_imagen_de_portada'] = array(
    'bundle' => 'grupo_artistico',
    'deleted' => 0,
    'description' => 'Imagen que caracteriza al grupo artístico.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_imagen_de_portada',
    'label' => 'Imagen de portada',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 18,
      'file_directory' => 'images/group-images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '100 KB',
      'max_resolution' => '200x200',
      'min_resolution' => '100x100',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-grupo_artistico-field_palabras_clave'
  $field_instances['node-grupo_artistico-field_palabras_clave'] = array(
    'bundle' => 'grupo_artistico',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Inserte las palabras clave que permiten caracterizar al grupo, separadas por coma.
<br/>
Pueden referirse al género de música que interpretan o bailan, a lo que caracterice su arte, a la manifestación artística que cultivan, a la edad del público seguidor, etc. Ejemplo: en el caso del Ballet Nacional de Cuba las palabras claves podrían ser <em>Ballet, Danza, Clásica, Ópera...</em>.
<br/>
Mientras más palabras clave, es mejor a la hora de realizar búsquedas.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_palabras_clave',
    'label' => 'Palabras clave',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-grupo_artistico-field_publicitar'
  $field_instances['node-grupo_artistico-field_publicitar'] = array(
    'bundle' => 'grupo_artistico',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Marque si desea que el contenido salga en el carrusel de publicidad.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_publicitar',
    'label' => 'Publicitar',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-grupo_artistico-field_telefono'
  $field_instances['node-grupo_artistico-field_telefono'] = array(
    'bundle' => 'grupo_artistico',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_telefono',
    'label' => 'Teléfono',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-grupo_artistico-field_tipo_de_agrupacion'
  $field_instances['node-grupo_artistico-field_tipo_de_agrupacion'] = array(
    'bundle' => 'grupo_artistico',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Ejemplo: dúos, tríos, coros, agrupaciones musicales, compañías de teatro, danza, etc...
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tipo_de_agrupacion',
    'label' => 'Tipo de agrupación',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-page-body'
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-presentacion-body'
  $field_instances['node-presentacion-body'] = array(
    'bundle' => 'presentacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Breve descripción de las características de la presentación.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Descripción',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-presentacion-field_artista'
  $field_instances['node-presentacion-field_artista'] = array(
    'bundle' => 'presentacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Artista o agrupación que realiza la presentación.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_artista',
    'label' => 'Artista',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'test_instance_behavior' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-presentacion-field_desde'
  $field_instances['node-presentacion-field_desde'] = array(
    'bundle' => 'presentacion',
    'deleted' => 0,
    'description' => 'Fecha de inicio de la presentación.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medio_mayusculas',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_desde',
    'label' => 'A partir de',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-0:+10',
      ),
      'type' => 'date_popup',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-presentacion-field_hasta'
  $field_instances['node-presentacion-field_hasta'] = array(
    'bundle' => 'presentacion',
    'deleted' => 0,
    'description' => 'Fecha de finalización de la presentación.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medio_mayusculas',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hasta',
    'label' => 'Hasta',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-0:+10',
      ),
      'type' => 'date_popup',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-presentacion-field_horario'
  $field_instances['node-presentacion-field_horario'] = array(
    'bundle' => 'presentacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Horario de la presentación.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'timefield',
        'settings' => array(
          'display_format' => array(
            'hour' => 'g',
            'minute' => 'i',
            'period' => 'A',
            'period_separator' => ' ',
            'separator' => ':',
          ),
        ),
        'type' => 'timefield_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_horario',
    'label' => 'Horario',
    'required' => 1,
    'settings' => array(
      'disable_plugin' => 0,
      'input_format' => array(
        'am_text' => 'AM',
        'atPosition' => 'left bottom',
        'closeButtonText' => 'OK',
        'deselectButtonText' => 'Deselect',
        'myPosition' => 'left top',
        'nowButtonText' => 'Now',
        'periodSeparator' => ' ',
        'pm_text' => 'PM',
        'separator' => ':',
        'showCloseButton' => 0,
        'showDeselectButton' => 0,
        'showLeadingZero' => 0,
        'showNowButton' => 0,
        'showPeriod' => 1,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'timefield',
      'settings' => array(
        'label_position' => 'above',
      ),
      'type' => 'timefield_standard',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-presentacion-field_imagen_de_portada'
  $field_instances['node-presentacion-field_imagen_de_portada'] = array(
    'bundle' => 'presentacion',
    'deleted' => 0,
    'description' => 'Imagen que caracteriza la presentación.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_imagen_de_portada',
    'label' => 'Imagen de portada',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 26,
      'file_directory' => 'images/presentation-images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '100 KB',
      'max_resolution' => '200x200',
      'min_resolution' => '100x100',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-presentacion-field_palabras_clave'
  $field_instances['node-presentacion-field_palabras_clave'] = array(
    'bundle' => 'presentacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Inserte las palabras clave que permiten caracterizar a la presentación habitual, separadas por coma.
<br/>
Pueden referirse a lo que se va a realizar, a la edad de las personas que asistirán, al lugar, a la temática de la misma, al tipo de música o comestibles (de ser el caso), etc. Ejemplo: en el caso de una peña de trova donde se brinde las palabras claves podrían ser <em>Peña, Trova, Ron, Brindis</em>
<br/>
Mientras más palabras clave, es mejor a la hora de realizar búsquedas.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_palabras_clave',
    'label' => 'Palabras clave',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-presentacion-field_publicitar'
  $field_instances['node-presentacion-field_publicitar'] = array(
    'bundle' => 'presentacion',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Marque si desea que el contenido salga en el carrusel de publicidad.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_publicitar',
    'label' => 'Publicitar',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-presentacion-field_se_presenta_habitualmente'
  $field_instances['node-presentacion-field_se_presenta_habitualmente'] = array(
    'bundle' => 'presentacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Establecimiento donde tiene lugar la presentación.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_se_presenta_habitualmente',
    'label' => 'Lugar',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'test_instance_behavior' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-simplenews-body'
  $field_instances['node-simplenews-body'] = array(
    'bundle' => 'simplenews',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-simplenews-field_simplenews_term'
  $field_instances['node-simplenews-field_simplenews_term'] = array(
    'bundle' => 'simplenews',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'email_plain' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'email_textalt' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_simplenews_term',
    'label' => 'Newsletter category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'user-user-field_disfruta_de_la_cocina'
  $field_instances['user-user-field_disfruta_de_la_cocina'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Defina qué tipos de comida prefiere, separándolos por coma. Ejemplo: <em>Comida italiana, Comida criolla, Pastas, Mariscos, Huevos, Pastelería...</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_disfruta_de_la_cocina',
    'label' => 'Gustos culinarios',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'user-user-field_disfruta_de_los_espectacul'
  $field_instances['user-user-field_disfruta_de_los_espectacul'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Defina de qué tipo de espectáculos disfruta más, separándolos por coma. Ejemplo: <em>Circo, Moda, Ballet, Humor</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_disfruta_de_los_espectacul',
    'label' => 'Disfruta de los espectáculos',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'user-user-field_gustos_musicales'
  $field_instances['user-user-field_gustos_musicales'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Defina qué géneros musicales prefiere, separándolos por coma. Ejemplo: <em>Trova, Rock, Salsa</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_gustos_musicales',
    'label' => 'Tipo de música preferido',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'user-user-field_le_gusta_bailar'
  $field_instances['user-user-field_le_gusta_bailar'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Defina qué géneros bailables prefiere, separándolos por coma. Ejemplo: <em>Rumba, Mambo, Merengue</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_le_gusta_bailar',
    'label' => 'Le gusta bailar',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'user-user-field_nombre'
  $field_instances['user-user-field_nombre'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Escriba su nombre y apellidos.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_nombre',
    'label' => 'Nombre',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'user-user-field_otros_intereses'
  $field_instances['user-user-field_otros_intereses'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Defina otros intereses o gustos que no estén recogidos encima, separándolos por coma. Ejemplo: <em>Filatelia, Artesanía</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_otros_intereses',
    'label' => 'Otros intereses',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'user-user-field_pais'
  $field_instances['user-user-field_pais'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Seleccione su país de origen.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'countries',
        'settings' => array(),
        'type' => 'country_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pais',
    'label' => 'País',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'user-user-field_practica_deportes'
  $field_instances['user-user-field_practica_deportes'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Defina qué deportes le gusta practicar, separándolos por coma. Ejemplo: <em>Baseball, Basketball, Volleyball</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_practica_deportes',
    'label' => 'Practica deportes',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'user-user-field_realiza_actividades_al_air'
  $field_instances['user-user-field_realiza_actividades_al_air'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Defina las actividades al aire libre que más disfruta, separándolas por coma. Ejemplo: <em>Playa, Excursión, Campismo</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_realiza_actividades_al_air',
    'label' => 'Realiza actividades al aire libre',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'user-user-field_sexo'
  $field_instances['user-user-field_sexo'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Seleccione su sexo.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_sexo',
    'label' => 'Sexo',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'user-user-field_tags'
  $field_instances['user-user-field_tags'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Seleccione el rango de edad al que pertenece',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_tags',
    'label' => 'Rango de edad',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'user-user-field_telefono'
  $field_instances['user-user-field_telefono'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Envíenos un número de teléfono para contactarlo.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_telefono',
    'label' => 'Teléfono',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A partir de');
  t('Actividades');
  t('Agrupaciones a las cuales pertence el artista. 
<br/>
Insértelas separadas por comas <em>(,)</em> con el formato <em>[Tipo][Nombre]</em>. Ejemplo <em>Coro Exaudi, Orquesta Revé, Grupo Mezcla, Dúo Karma</em>. 
<br/>
Los datos se autocompletarán si ya han sido insertados anteriormente.');
  t('Artista');
  t('Artista o agrupación que realiza la presentación.');
  t('Asunto');
  t('Body');
  t('Breve ');
  t('Breve descripción de las características de la actividad.');
  t('Breve descripción de las características de la presentación.');
  t('Breve descripción de las características del circuito.');
  t('Breve descripción del artista.');
  t('Calle');
  t('Calle, avenida, carretera, camino... donde se encuentra el establecimiento.
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.');
  t('Capacidad limitada');
  t('Comentar');
  t('Comment');
  t('Correo electrónico');
  t('Correo electrónico de contacto.');
  t('Correo eléctronico de contacto con el establecimiento.');
  t('Cuerpo');
  t('Defina de qué tipo de espectáculos disfruta más, separándolos por coma. Ejemplo: <em>Circo, Moda, Ballet, Humor</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.');
  t('Defina el tipo de establecimiento tecleándolo. Ejemplo: <em>Bar, Restaurante, Club</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.');
  t('Defina las actividades al aire libre que más disfruta, separándolas por coma. Ejemplo: <em>Playa, Excursión, Campismo</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.');
  t('Defina las ocupaciones del artista, en masculino y separándolas por comas. Ejemplo: <em>Cantante, Actor, Presentador</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.');
  t('Defina otros intereses o gustos que no estén recogidos encima, separándolos por coma. Ejemplo: <em>Filatelia, Artesanía</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.');
  t('Defina qué deportes le gusta practicar, separándolos por coma. Ejemplo: <em>Baseball, Basketball, Volleyball</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.');
  t('Defina qué géneros bailables prefiere, separándolos por coma. Ejemplo: <em>Rumba, Mambo, Merengue</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.');
  t('Defina qué géneros musicales prefiere, separándolos por coma. Ejemplo: <em>Trova, Rock, Salsa</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.');
  t('Defina qué tipos de comida prefiere, separándolos por coma. Ejemplo: <em>Comida italiana, Comida criolla, Pastas, Mariscos, Huevos, Pastelería...</em>
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.');
  t('Defina si asiste más público de un sexo que de otro.');
  t('Defina si es posible la orientación sexual predominante del publico asiduo al local.');
  t('Defina si es posible las tribus urbanas que asisten mayormente al establecimiento. Ejemplo: <em>Repas, Frikis, Mikis</em>
<br/>
De no haber una tendencia marcada hacia ninguna, deje el formulario vacío.
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.');
  t('Descripción');
  t('Disfruta de los espectáculos');
  t('Ejemplo: dúos, tríos, coros, agrupaciones musicales, compañías de teatro, danza, etc...
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.');
  t('Email');
  t('Enter e-mail body.');
  t('Enter e-mail subject.');
  t('Entrecalle (1)');
  t('Entrecalle (2)');
  t('Envíenos un número de teléfono para contactarlo.');
  t('Escoja el rango de edades del público que asiste asiduamente al establecimiento.
<br/>
Si asisten personas de todas las edades, no seleccione ninguno.');
  t('Escriba su nombre y apellidos.');
  t('Establecimiento donde tiene lugar la presentación.');
  t('Estrellas');
  t('Fecha de finalización de la presentación.');
  t('Fecha de inicio de la presentación.');
  t('Fecha en que tendrán lugar las actividades del circuito y hora de partida desde el punto de reunión.');
  t('Fecha y hora');
  t('Fecha y hora en que tendrá lugar la actividad. ');
  t('Gustos culinarios');
  t('Hasta');
  t('Horario');
  t('Horario de la presentación.');
  t('Horario de servicio, presentaciones, atención al público, etc. del establecimiento.');
  t('Imagen de portada');
  t('Imagen que caracteriza al artista.');
  t('Imagen que caracteriza al establecimiento.');
  t('Imagen que caracteriza al grupo artístico.');
  t('Imagen que caracteriza esta actividad.');
  t('Imagen que caracteriza la presentación.');
  t('Inscribirse a este circuito');
  t('Inserte las palabras clave que permiten caracterizar a la presentación habitual, separadas por coma.
<br/>
Pueden referirse a lo que se va a realizar, a la edad de las personas que asistirán, al lugar, a la temática de la misma, al tipo de música o comestibles (de ser el caso), etc. Ejemplo: en el caso de una peña de trova donde se brinde las palabras claves podrían ser <em>Peña, Trova, Ron, Brindis</em>
<br/>
Mientras más palabras clave, es mejor a la hora de realizar búsquedas.');
  t('Inserte las palabras clave que permiten caracterizar al artista, separadas por coma.
<br/>
Pueden referirse al género de música que interpreta o baila, a lo que caracterice su arte, a la manifestación artística que cultive, a la edad del público seguidor, etc. Ejemplo: en el caso de Liuba María Hevia las palabras claves podrían ser <em>Guajira, Tango, Infantil, Bolero, Trova...</em>.
<br/>
Mientras más palabras clave, es mejor a la hora de realizar búsquedas.');
  t('Inserte las palabras clave que permiten caracterizar al circuito, separadas por coma.
<br/>
Pueden referirse más en detalle a la temática, los lugares, las actividades, a la edad más probable de los asistentes potenciales, etc. Ejemplo: en el caso de un circuito sobre automóviles antiguos las palabras claves podrían ser <em/>Automóviles, Carros, Autos, Antigüedades, Almendrones...<em/>.
<br/>
Mientras más palabras clave, es mejor a la hora de realizar búsquedas.');
  t('Inserte las palabras clave que permiten caracterizar al establecimiento, separadas por coma.
<br/>
Pueden referirse más en detalle a la música que se pone, la especialidad de lo que se come, las actividades que allí se realizan, la edad más probable de los asistentes potenciales, etc. Ejemplo: en el caso de un restaurante las palabras claves podrían ser <em/>Comida italiana, Canelones, Música cubana...<em/>. En el caso de un club las palabras claves podrían ser <em/>Rock, Trova, Sangría, 50 años...<em/>.
<br/>
Mientras más palabras clave, es mejor a la hora de realizar búsquedas.');
  t('Inserte las palabras clave que permiten caracterizar al grupo, separadas por coma.
<br/>
Pueden referirse al género de música que interpretan o bailan, a lo que caracterice su arte, a la manifestación artística que cultivan, a la edad del público seguidor, etc. Ejemplo: en el caso del Ballet Nacional de Cuba las palabras claves podrían ser <em>Ballet, Danza, Clásica, Ópera...</em>.
<br/>
Mientras más palabras clave, es mejor a la hora de realizar búsquedas.');
  t('Inserte las palabras clave que permiten caracterizar la actividad, separadas por coma.
<br/>
Pueden referirse a lo que se va a realizar, a la edad de las personas que asistirán, al lugar, a la temática de la misma, al tipo de música o comestibles (de ser el caso), etc. Ejemplo: en el caso de un concierto de rock en la playa las palabras claves podrían ser <em>rock, concierto, playa</em>
<br/>
Mientras más palabras clave, es mejor a la hora de realizar búsquedas.');
  t('Integra');
  t('Le gusta bailar');
  t('Lugar');
  t('Lugar donde se realizará la actividad. 
<br/>
Al teclear se autocompleta con lugares ya insertados previamente.');
  t('Lugar donde se reunirán los miembros del circuito con el responsable para comenzar las actividades.');
  t('Marque si desea que el comentario sea publicado en portada <em>Lo que se comenta</em>.');
  t('Marque si desea que el contenido salga en el carrusel de publicidad.');
  t('Municipio');
  t('Municipio donde se encuentra el establecimiento.');
  t('Newsletter category');
  t('Nombre');
  t('Número');
  t('Número de teléfono de conacto del artista.');
  t('Número del inmueble.');
  t('Número teléfonico de contacto del establecimiento.');
  t('Ocupación');
  t('Otros intereses');
  t('Palabras clave');
  t('País');
  t('Persona encargada de la la coordinación y asistencia a las actividades del circuito.');
  t('Practica deportes');
  t('Precio de entrada');
  t('Primera entrecalle. Si el inmueble hace esquina, ingrese aquí la calle con la que hace esquina.
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.');
  t('Publicitar');
  t('Punto de partida');
  t('Público habitual (edades)');
  t('Público habitual (orientación sexual)');
  t('Público habitual (sexo)');
  t('Público habitual (tribus urbanas)');
  t('Rango de edad');
  t('Realiza actividades al aire libre');
  t('Reparto');
  t('Reparto, zona, barriada... donde se encuentra el establecimiento.');
  t('Responsable');
  t('Segunda entrecalle. Si el inmueble hace esquina, deje vacío este campo.
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.');
  t('Seleccione el rango de edad al que pertenece');
  t('Seleccione las actividades que formarán parte del circuito.');
  t('Seleccione su país de origen.');
  t('Seleccione su sexo.');
  t('Sexo');
  t('Si la actividad no es de entrada libre, indique aquí el precio per cápita de la misma. 
<br/>
Utilice la coma <em>(,)</em> como separador de decimales.');
  t('Si la actividad tiene un número limitado de asistentes, ingrese aquí la cantidad.');
  t('Sitio web');
  t('Sitio web del establecimiento.');
  t('Sufijo');
  t('Sufijo del número del inmueble. Ejemplo: 104 <strong>A</strong>, 22 <strong>altos</strong>, 1037 <strong>interior</strong>...');
  t('Teléfono');
  t('Temática');
  t('Temática del circuito.
<br/>
Al teclear el formulario se autocompleta con los términos ya existentes.');
  t('Tipo');
  t('Tipo de agrupación');
  t('Tipo de música preferido');
  t('Type e-mail address of person you wish invite.');
  t('Una descripción del lugar. 
<br/>
<em>En este campo podría añadirse el menú de restaurantes, cafeterías... la carta de bebidas de bares, clubes... la especialidad del lugar... la programación de espectáculos, presentaciones de teatros, cabarets... la cartelera de cines, etc.</em>');
  t('Una imagen afín con la temática del circuito.');

  return $field_instances;
}
