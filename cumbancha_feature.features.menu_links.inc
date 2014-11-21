<?php
/**
 * @file
 * cumbancha_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cumbancha_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_actividades:<front>
  $menu_links['main-menu_actividades:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Actividades',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_actividades:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_cancelar-suscripcin:<front>
  $menu_links['main-menu_cancelar-suscripcin:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Cancelar suscripción',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_cancelar-suscripcin:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_circuitos:<front>
  $menu_links['main-menu_circuitos:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Circuitos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_circuitos:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_directorio:<front>
  $menu_links['main-menu_directorio:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Directorio',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_directorio:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_esta-semana:semana_actividades
  $menu_links['main-menu_esta-semana:semana_actividades'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'semana_actividades',
    'router_path' => 'semana_actividades',
    'link_title' => 'Esta semana',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_esta-semana:semana_actividades',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_actividades:<front>',
  );
  // Exported menu link: main-menu_esta-semana:semana_circuitos
  $menu_links['main-menu_esta-semana:semana_circuitos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'semana_circuitos',
    'router_path' => 'semana_circuitos',
    'link_title' => 'Esta semana',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_esta-semana:semana_circuitos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_circuitos:<front>',
  );
  // Exported menu link: main-menu_este-mes:mes_actividades
  $menu_links['main-menu_este-mes:mes_actividades'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mes_actividades',
    'router_path' => 'mes_actividades',
    'link_title' => 'Este mes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_este-mes:mes_actividades',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_actividades:<front>',
  );
  // Exported menu link: main-menu_este-mes:mes_circuitos
  $menu_links['main-menu_este-mes:mes_circuitos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mes_circuitos',
    'router_path' => 'mes_circuitos',
    'link_title' => 'Este mes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_este-mes:mes_circuitos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_circuitos:<front>',
  );
  // Exported menu link: main-menu_hoy:hoy_actividades
  $menu_links['main-menu_hoy:hoy_actividades'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'hoy_actividades',
    'router_path' => 'hoy_actividades',
    'link_title' => 'Hoy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_hoy:hoy_actividades',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_actividades:<front>',
  );
  // Exported menu link: main-menu_hoy:hoy_circuitos
  $menu_links['main-menu_hoy:hoy_circuitos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'hoy_circuitos',
    'router_path' => 'hoy_circuitos',
    'link_title' => 'Hoy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_hoy:hoy_circuitos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_circuitos:<front>',
  );
  // Exported menu link: main-menu_inicio:<front>
  $menu_links['main-menu_inicio:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Inicio',
    'options' => array(
      'identifier' => 'main-menu_inicio:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_quiero-promocionar:<front>
  $menu_links['main-menu_quiero-promocionar:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Quiero promocionar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_quiero-promocionar:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_suscribirse:<front>
  $menu_links['main-menu_suscribirse:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Suscribirse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_suscribirse:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-moderador_actividades:todas_actividades
  $menu_links['menu-moderador_actividades:todas_actividades'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'todas_actividades',
    'router_path' => 'todas_actividades',
    'link_title' => 'Actividades',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-moderador_actividades:todas_actividades',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-moderador_circuitos:todos_circuitos 
  $menu_links['menu-moderador_circuitos:todos_circuitos '] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'todos_circuitos ',
    'router_path' => 'todos_circuitos',
    'link_title' => 'Circuitos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-moderador_circuitos:todos_circuitos ',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: navigation_invitar-por-correo:invite/add/invite_by_email
  $menu_links['navigation_invitar-por-correo:invite/add/invite_by_email'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'invite/add/invite_by_email',
    'router_path' => 'invite/add/invite_by_email',
    'link_title' => 'Invitar por correo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_invitar-por-correo:invite/add/invite_by_email',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: navigation_prximos-circuitos:proximos_circuitos
  $menu_links['navigation_prximos-circuitos:proximos_circuitos'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'proximos_circuitos',
    'router_path' => 'proximos_circuitos',
    'link_title' => 'Próximos circuitos',
    'options' => array(
      'identifier' => 'navigation_prximos-circuitos:proximos_circuitos',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: navigation_se-comenta:se_comenta
  $menu_links['navigation_se-comenta:se_comenta'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'se_comenta',
    'router_path' => 'se_comenta',
    'link_title' => 'Se comenta',
    'options' => array(
      'identifier' => 'navigation_se-comenta:se_comenta',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Account settings');
  t('Actions');
  t('Actividades');
  t('Admin');
  t('Administration');
  t('Administration menu');
  t('Agrupaciones artísticas');
  t('Ambassador');
  t('América');
  t('Appearance');
  t('Artistas');
  t('Async command log');
  t('Available updates');
  t('Avance');
  t('Backup and Migrate');
  t('Blocks');
  t('Browsing History Recommender');
  t('Bulk Exporter');
  t('CKEditor');
  t('CKEditor Link');
  t('Cancelar suscripción');
  t('Circuitos');
  t('Clean URLs');
  t('Comment Notify');
  t('Comments');
  t('Configuration');
  t('Configure');
  t('Contact form');
  t('Content');
  t('Content authoring');
  t('Content types');
  t('Countries');
  t('Cron');
  t('Custom access rulesets');
  t('Dashboard');
  t('Date API');
  t('Date Popup');
  t('Date Tools');
  t('Date and time');
  t('Development');
  t('Directorio');
  t('DrupalChat');
  t('Email Contact Form Settings');
  t('Esta semana');
  t('Establecimientos');
  t('Este mes');
  t('Eventos');
  t('Features');
  t('Field list');
  t('File system');
  t('Fivestar');
  t('Flags');
  t('Hoy');
  t('IP address blocking');
  t('Image styles');
  t('Image toolkit');
  t('Inicio');
  t('Invitar por correo');
  t('Invite');
  t('Invite Types');
  t('Languages');
  t('Log out');
  t('Logging and errors');
  t('Mail System');
  t('Maintenance mode');
  t('Management');
  t('Media');
  t('Menus');
  t('Menú principal');
  t('Mime Mail');
  t('Moderador');
  t('Module filter');
  t('Modules');
  t('Multilingual settings');
  t('Navegación');
  t('Newsletters');
  t('People');
  t('Performance');
  t('Próximos circuitos');
  t('Quiero promocionar');
  t('RSS publishing');
  t('Recent log messages');
  t('Recommender');
  t('Regional and language');
  t('Regional settings');
  t('Registration');
  t('Registration states');
  t('Registration types');
  t('Reports');
  t('Rules');
  t('SMTP Authentication Support');
  t('Se comenta');
  t('Search and metadata');
  t('Search settings');
  t('Shortcuts');
  t('Site information');
  t('Status report');
  t('Structure');
  t('Suscribirse');
  t('System');
  t('Taxonomy');
  t('Text formats');
  t('Top \'access denied\' errors');
  t('Top \'page not found\' errors');
  t('Top search phrases');
  t('Translate interface');
  t('Triggers');
  t('URL aliases');
  t('User account');
  t('User interface');
  t('User menu');
  t('Views');
  t('Views panes');
  t('Voting API');
  t('Web services');
  t('Webform settings');
  t('Workflow');
  t('jQuery update');


  return $menu_links;
}
