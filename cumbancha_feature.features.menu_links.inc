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
    'router_path' => '',
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
    'router_path' => '',
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
    'parent_identifier' => 'main-menu_boletn-semanal:node/75',
  );
  // Exported menu link: main-menu_circuitos:<front>
  $menu_links['main-menu_circuitos:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
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
    'router_path' => '',
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
    'router_path' => '',
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
    'router_path' => '',
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
    'router_path' => '',
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
    'parent_identifier' => 'main-menu_boletn-semanal:node/75',
  );
  // Exported menu link: management_account-settings:admin/config/people/accounts
  $menu_links['management_account-settings:admin/config/people/accounts'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/accounts',
    'router_path' => 'admin/config/people/accounts',
    'link_title' => 'Account settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure default behavior of users, including registration requirements, e-mails, fields, and user pictures.',
      ),
      'identifier' => 'management_account-settings:admin/config/people/accounts',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_usuarios:admin/config/people',
  );
  // Exported menu link: management_actions:admin/config/system/actions
  $menu_links['management_actions:admin/config/system/actions'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/actions',
    'router_path' => 'admin/config/system/actions',
    'link_title' => 'Actions',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage the actions defined for your site.',
      ),
      'identifier' => 'management_actions:admin/config/system/actions',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_sistema:admin/config/system',
  );
  // Exported menu link: management_admin:admin/config/search/recommender/admin
  $menu_links['management_admin:admin/config/search/recommender/admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/recommender/admin',
    'router_path' => 'admin/config/search/recommender/admin',
    'link_title' => 'Admin',
    'options' => array(
      'attributes' => array(
        'title' => 'Configuration and trigger recommender modules',
      ),
      'identifier' => 'management_admin:admin/config/search/recommender/admin',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_recommender:admin/config/search/recommender',
  );
  // Exported menu link: management_administration-menu:admin/config/administration/admin_menu
  $menu_links['management_administration-menu:admin/config/administration/admin_menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration/admin_menu',
    'router_path' => 'admin/config/administration/admin_menu',
    'link_title' => 'Administration menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust administration menu settings.',
      ),
      'identifier' => 'management_administration-menu:admin/config/administration/admin_menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin/config/administration',
  );
  // Exported menu link: management_administration:admin
  $menu_links['management_administration:admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(
      'identifier' => 'management_administration:admin',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
  );
  // Exported menu link: management_administration:admin/config/administration
  $menu_links['management_administration:admin/config/administration'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration',
    'router_path' => 'admin/config/administration',
    'link_title' => 'Administration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administration tools.',
      ),
      'identifier' => 'management_administration:admin/config/administration',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_agrupaciones-artsticas:admin/structure/menu/manage/menu-agrupaciones-artisticas
  $menu_links['management_agrupaciones-artsticas:admin/structure/menu/manage/menu-agrupaciones-artisticas'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-agrupaciones-artisticas',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Agrupaciones artísticas',
    'options' => array(
      'identifier' => 'management_agrupaciones-artsticas:admin/structure/menu/manage/menu-agrupaciones-artisticas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_appearance:admin/appearance
  $menu_links['management_appearance:admin/appearance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/appearance',
    'router_path' => 'admin/appearance',
    'link_title' => 'Appearance',
    'options' => array(
      'attributes' => array(
        'title' => 'Select and configure your themes.',
      ),
      'identifier' => 'management_appearance:admin/appearance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin',
  );
  // Exported menu link: management_artistas:admin/structure/menu/manage/menu-artistas
  $menu_links['management_artistas:admin/structure/menu/manage/menu-artistas'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-artistas',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Artistas',
    'options' => array(
      'identifier' => 'management_artistas:admin/structure/menu/manage/menu-artistas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_async-command-log:admin/reports/async_command
  $menu_links['management_async-command-log:admin/reports/async_command'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/async_command',
    'router_path' => 'admin/reports/async_command',
    'link_title' => 'Async command log',
    'options' => array(
      'attributes' => array(
        'title' => 'Display the list of async commands execution logs.',
      ),
      'identifier' => 'management_async-command-log:admin/reports/async_command',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_informes:admin/reports',
  );
  // Exported menu link: management_available-updates:admin/reports/updates
  $menu_links['management_available-updates:admin/reports/updates'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/updates',
    'router_path' => 'admin/reports/updates',
    'link_title' => 'Available updates',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about available updates for your installed modules and themes.',
      ),
      'identifier' => 'management_available-updates:admin/reports/updates',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'management_informes:admin/reports',
  );
  // Exported menu link: management_backup-and-migrate:admin/config/system/backup_migrate
  $menu_links['management_backup-and-migrate:admin/config/system/backup_migrate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/backup_migrate',
    'router_path' => 'admin/config/system/backup_migrate',
    'link_title' => 'Backup and Migrate',
    'options' => array(
      'attributes' => array(
        'title' => 'Backup/restore your database or migrate data to or from another Drupal site.',
      ),
      'identifier' => 'management_backup-and-migrate:admin/config/system/backup_migrate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_sistema:admin/config/system',
  );
  // Exported menu link: management_blocks:admin/structure/block
  $menu_links['management_blocks:admin/structure/block'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/block',
    'router_path' => 'admin/structure/block',
    'link_title' => 'Blocks',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure what block content appears in your site\'s sidebars and other regions.',
      ),
      'identifier' => 'management_blocks:admin/structure/block',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_browsing-history-recommender:admin/config/search/recommender/history_rec
  $menu_links['management_browsing-history-recommender:admin/config/search/recommender/history_rec'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/recommender/history_rec',
    'router_path' => 'admin/config/search/recommender/history_rec',
    'link_title' => 'Browsing History Recommender',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the Browsing History Recommender',
      ),
      'identifier' => 'management_browsing-history-recommender:admin/config/search/recommender/history_rec',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_recommender:admin/config/search/recommender',
  );
  // Exported menu link: management_bulk-exporter:admin/structure/bulk-export
  $menu_links['management_bulk-exporter:admin/structure/bulk-export'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/bulk-export',
    'router_path' => 'admin/structure/bulk-export',
    'link_title' => 'Bulk Exporter',
    'options' => array(
      'attributes' => array(
        'title' => 'Bulk-export multiple CTools-handled data objects to code.',
      ),
      'identifier' => 'management_bulk-exporter:admin/structure/bulk-export',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_circuitos:admin/structure/menu/manage/menu-circuitos
  $menu_links['management_circuitos:admin/structure/menu/manage/menu-circuitos'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-circuitos',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Circuitos',
    'options' => array(
      'identifier' => 'management_circuitos:admin/structure/menu/manage/menu-circuitos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_ckeditor-link:admin/config/content/ckeditor_link
  $menu_links['management_ckeditor-link:admin/config/content/ckeditor_link'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/ckeditor_link',
    'router_path' => 'admin/config/content/ckeditor_link',
    'link_title' => 'CKEditor Link',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure CKEditor Link.',
      ),
      'identifier' => 'management_ckeditor-link:admin/config/content/ckeditor_link',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_ckeditor:admin/config/content/ckeditor
  $menu_links['management_ckeditor:admin/config/content/ckeditor'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/ckeditor',
    'router_path' => 'admin/config/content/ckeditor',
    'link_title' => 'CKEditor',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the rich text editor.',
      ),
      'identifier' => 'management_ckeditor:admin/config/content/ckeditor',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_clean-urls:admin/config/search/clean-urls
  $menu_links['management_clean-urls:admin/config/search/clean-urls'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/clean-urls',
    'router_path' => 'admin/config/search/clean-urls',
    'link_title' => 'Clean URLs',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable clean URLs for your site.',
      ),
      'identifier' => 'management_clean-urls:admin/config/search/clean-urls',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_comment-notify:admin/config/people/comment_notify
  $menu_links['management_comment-notify:admin/config/people/comment_notify'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/comment_notify',
    'router_path' => 'admin/config/people/comment_notify',
    'link_title' => 'Comment Notify',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings for e-mails about new comments.',
      ),
      'identifier' => 'management_comment-notify:admin/config/people/comment_notify',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_usuarios:admin/config/people',
  );
  // Exported menu link: management_comments:admin/content/comment
  $menu_links['management_comments:admin/content/comment'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Comments',
    'options' => array(
      'attributes' => array(
        'title' => 'List and edit site comments and the comment approval queue.',
      ),
      'identifier' => 'management_comments:admin/content/comment',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_contenido:admin/content',
  );
  // Exported menu link: management_configuration:admin/config
  $menu_links['management_configuration:admin/config'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config',
    'router_path' => 'admin/config',
    'link_title' => 'Configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer settings.',
      ),
      'identifier' => 'management_configuration:admin/config',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin',
  );
  // Exported menu link: management_configure:admin/config/drupalchat/configuration
  $menu_links['management_configure:admin/config/drupalchat/configuration'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/drupalchat/configuration',
    'router_path' => 'admin/config/drupalchat/configuration',
    'link_title' => 'Configure',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure DrupalChat module.',
      ),
      'identifier' => 'management_configure:admin/config/drupalchat/configuration',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'parent_identifier' => 'management_drupalchat:admin/config/drupalchat',
  );
  // Exported menu link: management_contact-form:admin/structure/contact
  $menu_links['management_contact-form:admin/structure/contact'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/contact',
    'router_path' => 'admin/structure/contact',
    'link_title' => 'Contact form',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a system contact form and set up categories for the form to use.',
      ),
      'identifier' => 'management_contact-form:admin/structure/contact',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_content-authoring:admin/config/content
  $menu_links['management_content-authoring:admin/config/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content',
    'router_path' => 'admin/config/content',
    'link_title' => 'Content authoring',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings related to formatting and authoring content.',
      ),
      'identifier' => 'management_content-authoring:admin/config/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_content-types:admin/structure/types
  $menu_links['management_content-types:admin/structure/types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types',
    'router_path' => 'admin/structure/types',
    'link_title' => 'Content types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage content types, including default status, front page promotion, comment settings, etc.',
      ),
      'identifier' => 'management_content-types:admin/structure/types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_content:admin/content
  $menu_links['management_content:admin/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer content and comments.',
      ),
      'identifier' => 'management_content:admin/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin',
  );
  // Exported menu link: management_countries:admin/config/regional/countries
  $menu_links['management_countries:admin/config/regional/countries'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/countries',
    'router_path' => 'admin/config/regional/countries',
    'link_title' => 'Countries',
    'options' => array(
      'attributes' => array(
        'title' => 'List, edit, or add countries.',
      ),
      'identifier' => 'management_countries:admin/config/regional/countries',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_cron:admin/config/system/cron
  $menu_links['management_cron:admin/config/system/cron'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/cron',
    'router_path' => 'admin/config/system/cron',
    'link_title' => 'Cron',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage automatic site maintenance tasks.',
      ),
      'identifier' => 'management_cron:admin/config/system/cron',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
    'parent_identifier' => 'management_sistema:admin/config/system',
  );
  // Exported menu link: management_custom-access-rulesets:admin/structure/ctools-rulesets
  $menu_links['management_custom-access-rulesets:admin/structure/ctools-rulesets'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/ctools-rulesets',
    'router_path' => 'admin/structure/ctools-rulesets',
    'link_title' => 'Custom access rulesets',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit or delete custom access rulesets for use with Panels and other systems that utilize CTools content plugins.',
      ),
      'identifier' => 'management_custom-access-rulesets:admin/structure/ctools-rulesets',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_dashboard:admin/dashboard
  $menu_links['management_dashboard:admin/dashboard'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/dashboard',
    'router_path' => 'admin/dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => 'View and customize your dashboard.',
      ),
      'identifier' => 'management_dashboard:admin/dashboard',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin',
  );
  // Exported menu link: management_date-and-time:admin/config/regional/date-time
  $menu_links['management_date-and-time:admin/config/regional/date-time'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/date-time',
    'router_path' => 'admin/config/regional/date-time',
    'link_title' => 'Date and time',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure display formats for date and time.',
      ),
      'identifier' => 'management_date-and-time:admin/config/regional/date-time',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_date-api:admin/config/date
  $menu_links['management_date-api:admin/config/date'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date',
    'router_path' => 'admin/config/date',
    'link_title' => 'Date API',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for modules the use the Date API.',
      ),
      'identifier' => 'management_date-api:admin/config/date',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_date-popup:admin/config/date/date_popup
  $menu_links['management_date-popup:admin/config/date/date_popup'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date/date_popup',
    'router_path' => 'admin/config/date/date_popup',
    'link_title' => 'Date Popup',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the Date Popup settings.',
      ),
      'identifier' => 'management_date-popup:admin/config/date/date_popup',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_date-api:admin/config/date',
  );
  // Exported menu link: management_date-tools:admin/config/date/tools
  $menu_links['management_date-tools:admin/config/date/tools'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date/tools',
    'router_path' => 'admin/config/date/tools',
    'link_title' => 'Date Tools',
    'options' => array(
      'attributes' => array(
        'title' => 'Date Wizard and other tools to manage and create dates and calendars. ',
      ),
      'identifier' => 'management_date-tools:admin/config/date/tools',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_date-api:admin/config/date',
  );
  // Exported menu link: management_development:admin/config/development
  $menu_links['management_development:admin/config/development'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development',
    'router_path' => 'admin/config/development',
    'link_title' => 'Development',
    'options' => array(
      'attributes' => array(
        'title' => 'Development tools.',
      ),
      'identifier' => 'management_development:admin/config/development',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_drupalchat:admin/config/drupalchat
  $menu_links['management_drupalchat:admin/config/drupalchat'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/drupalchat',
    'router_path' => 'admin/config/drupalchat',
    'link_title' => 'DrupalChat',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer DrupalChat.',
      ),
      'identifier' => 'management_drupalchat:admin/config/drupalchat',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_email-contact-form-settings:admin/config/content/email
  $menu_links['management_email-contact-form-settings:admin/config/content/email'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/email',
    'router_path' => 'admin/config/content/email',
    'link_title' => 'Email Contact Form Settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer flood control settings for email contact forms',
      ),
      'identifier' => 'management_email-contact-form-settings:admin/config/content/email',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_establecimientos:admin/structure/menu/manage/menu-establecimientos
  $menu_links['management_establecimientos:admin/structure/menu/manage/menu-establecimientos'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-establecimientos',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Establecimientos',
    'options' => array(
      'identifier' => 'management_establecimientos:admin/structure/menu/manage/menu-establecimientos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_eventos:admin/structure/menu/manage/menu-eventos
  $menu_links['management_eventos:admin/structure/menu/manage/menu-eventos'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-eventos',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Eventos',
    'options' => array(
      'identifier' => 'management_eventos:admin/structure/menu/manage/menu-eventos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_features:admin/structure/features
  $menu_links['management_features:admin/structure/features'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/features',
    'router_path' => 'admin/structure/features',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage features.',
      ),
      'identifier' => 'management_features:admin/structure/features',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_field-list:admin/reports/fields
  $menu_links['management_field-list:admin/reports/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/fields',
    'router_path' => 'admin/reports/fields',
    'link_title' => 'Field list',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of fields on all entity types.',
      ),
      'identifier' => 'management_field-list:admin/reports/fields',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_informes:admin/reports',
  );
  // Exported menu link: management_file-system:admin/config/media/file-system
  $menu_links['management_file-system:admin/config/media/file-system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/file-system',
    'router_path' => 'admin/config/media/file-system',
    'link_title' => 'File system',
    'options' => array(
      'attributes' => array(
        'title' => 'Tell Drupal where to store uploaded files and how they are accessed.',
      ),
      'identifier' => 'management_file-system:admin/config/media/file-system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_multimedia:admin/config/media',
  );
  // Exported menu link: management_fivestar:admin/config/content/fivestar
  $menu_links['management_fivestar:admin/config/content/fivestar'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/fivestar',
    'router_path' => 'admin/config/content/fivestar',
    'link_title' => 'Fivestar',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure site-wide widgets used for Fivestar rating.',
      ),
      'identifier' => 'management_fivestar:admin/config/content/fivestar',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_flags:admin/structure/flags
  $menu_links['management_flags:admin/structure/flags'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/flags',
    'router_path' => 'admin/structure/flags',
    'link_title' => 'Flags',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure flags for marking content with arbitrary information (such as <em>offensive</em> or <em>bookmarked</em>).',
      ),
      'identifier' => 'management_flags:admin/structure/flags',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_image-styles:admin/config/media/image-styles
  $menu_links['management_image-styles:admin/config/media/image-styles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-styles',
    'router_path' => 'admin/config/media/image-styles',
    'link_title' => 'Image styles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure styles that can be used for resizing or adjusting images on display.',
      ),
      'identifier' => 'management_image-styles:admin/config/media/image-styles',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_multimedia:admin/config/media',
  );
  // Exported menu link: management_image-toolkit:admin/config/media/image-toolkit
  $menu_links['management_image-toolkit:admin/config/media/image-toolkit'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-toolkit',
    'router_path' => 'admin/config/media/image-toolkit',
    'link_title' => 'Image toolkit',
    'options' => array(
      'attributes' => array(
        'title' => 'Choose which image toolkit to use if you have installed optional toolkits.',
      ),
      'identifier' => 'management_image-toolkit:admin/config/media/image-toolkit',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
    'parent_identifier' => 'management_multimedia:admin/config/media',
  );
  // Exported menu link: management_invite-types:admin/structure/invite-types
  $menu_links['management_invite-types:admin/structure/invite-types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/invite-types',
    'router_path' => 'admin/structure/invite-types',
    'link_title' => 'Invite Types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Invite types.',
      ),
      'identifier' => 'management_invite-types:admin/structure/invite-types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_invite:admin/config/people/invite
  $menu_links['management_invite:admin/config/people/invite'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/invite',
    'router_path' => 'admin/config/people/invite',
    'link_title' => 'Invite',
    'options' => array(
      'attributes' => array(
        'title' => 'Modify invitation settings.',
      ),
      'identifier' => 'management_invite:admin/config/people/invite',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'parent_identifier' => 'management_usuarios:admin/config/people',
  );
  // Exported menu link: management_ip-address-blocking:admin/config/people/ip-blocking
  $menu_links['management_ip-address-blocking:admin/config/people/ip-blocking'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/ip-blocking',
    'router_path' => 'admin/config/people/ip-blocking',
    'link_title' => 'IP address blocking',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage blocked IP addresses.',
      ),
      'identifier' => 'management_ip-address-blocking:admin/config/people/ip-blocking',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'parent_identifier' => 'management_usuarios:admin/config/people',
  );
  // Exported menu link: management_jquery-update:admin/config/development/jquery_update
  $menu_links['management_jquery-update:admin/config/development/jquery_update'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/jquery_update',
    'router_path' => 'admin/config/development/jquery_update',
    'link_title' => 'jQuery update',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings related to the jQuery upgrade, the library path and compression.',
      ),
      'identifier' => 'management_jquery-update:admin/config/development/jquery_update',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_desarrollo:admin/config/development',
  );
  // Exported menu link: management_languages:admin/config/regional/language
  $menu_links['management_languages:admin/config/regional/language'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/language',
    'router_path' => 'admin/config/regional/language',
    'link_title' => 'Languages',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure languages for content and the user interface.',
      ),
      'identifier' => 'management_languages:admin/config/regional/language',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_logging-and-errors:admin/config/development/logging
  $menu_links['management_logging-and-errors:admin/config/development/logging'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/logging',
    'router_path' => 'admin/config/development/logging',
    'link_title' => 'Logging and errors',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for logging and alerts modules. Various modules can route Drupal\'s system events to different destinations, such as syslog, database, email, etc.',
      ),
      'identifier' => 'management_logging-and-errors:admin/config/development/logging',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_desarrollo:admin/config/development',
  );
  // Exported menu link: management_mail-system:admin/config/system/mailsystem
  $menu_links['management_mail-system:admin/config/system/mailsystem'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/mailsystem',
    'router_path' => 'admin/config/system/mailsystem',
    'link_title' => 'Mail System',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure per-module Mail System settings.',
      ),
      'identifier' => 'management_mail-system:admin/config/system/mailsystem',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_sistema:admin/config/system',
  );
  // Exported menu link: management_maintenance-mode:admin/config/development/maintenance
  $menu_links['management_maintenance-mode:admin/config/development/maintenance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/maintenance',
    'router_path' => 'admin/config/development/maintenance',
    'link_title' => 'Maintenance mode',
    'options' => array(
      'attributes' => array(
        'title' => 'Take the site offline for maintenance or bring it back online.',
      ),
      'identifier' => 'management_maintenance-mode:admin/config/development/maintenance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_desarrollo:admin/config/development',
  );
  // Exported menu link: management_management:admin/structure/menu/manage/management
  $menu_links['management_management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(
      'identifier' => 'management_management:admin/structure/menu/manage/management',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_media:admin/config/media
  $menu_links['management_media:admin/config/media'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media',
    'router_path' => 'admin/config/media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Media tools.',
      ),
      'identifier' => 'management_media:admin/config/media',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_men-principal:admin/structure/menu/manage/main-menu
  $menu_links['management_men-principal:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Menú principal',
    'options' => array(
      'identifier' => 'management_men-principal:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_menus:admin/structure/menu
  $menu_links['management_menus:admin/structure/menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Add new menus to your site, edit existing menus, and rename and reorganize menu links.',
      ),
      'identifier' => 'management_menus:admin/structure/menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_mime-mail:admin/config/system/mimemail
  $menu_links['management_mime-mail:admin/config/system/mimemail'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/mimemail',
    'router_path' => 'admin/config/system/mimemail',
    'link_title' => 'Mime Mail',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage mime mail system settings.',
      ),
      'identifier' => 'management_mime-mail:admin/config/system/mimemail',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_sistema:admin/config/system',
  );
  // Exported menu link: management_moderador:admin/structure/menu/manage/menu-moderador
  $menu_links['management_moderador:admin/structure/menu/manage/menu-moderador'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-moderador',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Moderador',
    'options' => array(
      'identifier' => 'management_moderador:admin/structure/menu/manage/menu-moderador',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_module-filter:admin/config/user-interface/modulefilter
  $menu_links['management_module-filter:admin/config/user-interface/modulefilter'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/modulefilter',
    'router_path' => 'admin/config/user-interface/modulefilter',
    'link_title' => 'Module filter',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how the modules page looks and acts.',
      ),
      'identifier' => 'management_module-filter:admin/config/user-interface/modulefilter',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_interfaz-de-usuario:admin/config/user-interface',
  );
  // Exported menu link: management_modules:admin/modules
  $menu_links['management_modules:admin/modules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/modules',
    'router_path' => 'admin/modules',
    'link_title' => 'Modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Extend site functionality.',
      ),
      'identifier' => 'management_modules:admin/modules',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin',
  );
  // Exported menu link: management_multilingual-settings:admin/config/regional/i18n
  $menu_links['management_multilingual-settings:admin/config/regional/i18n'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/i18n',
    'router_path' => 'admin/config/regional/i18n',
    'link_title' => 'Multilingual settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure extended options for multilingual content and translations.',
      ),
      'identifier' => 'management_multilingual-settings:admin/config/regional/i18n',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_navegacin:admin/structure/menu/manage/navigation
  $menu_links['management_navegacin:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navegación',
    'options' => array(
      'identifier' => 'management_navegacin:admin/structure/menu/manage/navigation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_newsletters:admin/config/services/simplenews
  $menu_links['management_newsletters:admin/config/services/simplenews'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/simplenews',
    'router_path' => 'admin/config/services/simplenews',
    'link_title' => 'Newsletters',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure your sites newsletters.',
      ),
      'identifier' => 'management_newsletters:admin/config/services/simplenews',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_servicios-web:admin/config/services',
  );
  // Exported menu link: management_people:admin/config/people
  $menu_links['management_people:admin/config/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people',
    'router_path' => 'admin/config/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure user accounts.',
      ),
      'identifier' => 'management_people:admin/config/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_people:admin/people
  $menu_links['management_people:admin/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage user accounts, roles, and permissions.',
      ),
      'identifier' => 'management_people:admin/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin',
  );
  // Exported menu link: management_performance:admin/config/development/performance
  $menu_links['management_performance:admin/config/development/performance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/performance',
    'router_path' => 'admin/config/development/performance',
    'link_title' => 'Performance',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable page caching for anonymous users and set CSS and JS bandwidth optimization options.',
      ),
      'identifier' => 'management_performance:admin/config/development/performance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_desarrollo:admin/config/development',
  );
  // Exported menu link: management_recent-log-messages:admin/reports/dblog
  $menu_links['management_recent-log-messages:admin/reports/dblog'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/dblog',
    'router_path' => 'admin/reports/dblog',
    'link_title' => 'Recent log messages',
    'options' => array(
      'attributes' => array(
        'title' => 'View events that have recently been logged.',
      ),
      'identifier' => 'management_recent-log-messages:admin/reports/dblog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 0,
    'parent_identifier' => 'management_informes:admin/reports',
  );
  // Exported menu link: management_recommender:admin/config/search/recommender
  $menu_links['management_recommender:admin/config/search/recommender'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/recommender',
    'router_path' => 'admin/config/search/recommender',
    'link_title' => 'Recommender',
    'options' => array(
      'attributes' => array(
        'title' => 'Configuration and trigger recommender modules',
      ),
      'identifier' => 'management_recommender:admin/config/search/recommender',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_regional-and-language:admin/config/regional
  $menu_links['management_regional-and-language:admin/config/regional'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional',
    'router_path' => 'admin/config/regional',
    'link_title' => 'Regional and language',
    'options' => array(
      'attributes' => array(
        'title' => 'Regional settings, localization and translation.',
      ),
      'identifier' => 'management_regional-and-language:admin/config/regional',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_regional-settings:admin/config/regional/settings
  $menu_links['management_regional-settings:admin/config/regional/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/settings',
    'router_path' => 'admin/config/regional/settings',
    'link_title' => 'Regional settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for the site\'s default time zone and country.',
      ),
      'identifier' => 'management_regional-settings:admin/config/regional/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_registration-states:admin/structure/registration/registration_states
  $menu_links['management_registration-states:admin/structure/registration/registration_states'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/registration/registration_states',
    'router_path' => 'admin/structure/registration/registration_states',
    'link_title' => 'Registration states',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Registration states.',
      ),
      'identifier' => 'management_registration-states:admin/structure/registration/registration_states',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_registration:admin/structure/registration',
  );
  // Exported menu link: management_registration-types:admin/structure/registration/registration_types
  $menu_links['management_registration-types:admin/structure/registration/registration_types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/registration/registration_types',
    'router_path' => 'admin/structure/registration/registration_types',
    'link_title' => 'Registration types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage registration entity types, including adding and removing fields and the display of fields.',
      ),
      'identifier' => 'management_registration-types:admin/structure/registration/registration_types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_registration:admin/structure/registration',
  );
  // Exported menu link: management_registration:admin/structure/registration
  $menu_links['management_registration:admin/structure/registration'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/registration',
    'router_path' => 'admin/structure/registration',
    'link_title' => 'Registration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer Registration items, such as types, states, etc.',
      ),
      'identifier' => 'management_registration:admin/structure/registration',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_reports:admin/reports
  $menu_links['management_reports:admin/reports'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports',
    'router_path' => 'admin/reports',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'View reports, updates, and errors.',
      ),
      'identifier' => 'management_reports:admin/reports',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin',
  );
  // Exported menu link: management_rss-publishing:admin/config/services/rss-publishing
  $menu_links['management_rss-publishing:admin/config/services/rss-publishing'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/rss-publishing',
    'router_path' => 'admin/config/services/rss-publishing',
    'link_title' => 'RSS publishing',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the site description, the number of items per feed and whether feeds should be titles/teasers/full-text.',
      ),
      'identifier' => 'management_rss-publishing:admin/config/services/rss-publishing',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_servicios-web:admin/config/services',
  );
  // Exported menu link: management_rules:admin/config/workflow/rules
  $menu_links['management_rules:admin/config/workflow/rules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow/rules',
    'router_path' => 'admin/config/workflow/rules',
    'link_title' => 'Rules',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage reaction rules and rule components.',
      ),
      'identifier' => 'management_rules:admin/config/workflow/rules',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_flujo-de-trabajo:admin/config/workflow',
  );
  // Exported menu link: management_search-and-metadata:admin/config/search
  $menu_links['management_search-and-metadata:admin/config/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search',
    'router_path' => 'admin/config/search',
    'link_title' => 'Search and metadata',
    'options' => array(
      'attributes' => array(
        'title' => 'Local site search, metadata and SEO.',
      ),
      'identifier' => 'management_search-and-metadata:admin/config/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_search-settings:admin/config/search/settings
  $menu_links['management_search-settings:admin/config/search/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/settings',
    'router_path' => 'admin/config/search/settings',
    'link_title' => 'Search settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure relevance settings for search and other indexing options.',
      ),
      'identifier' => 'management_search-settings:admin/config/search/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_shortcuts:admin/config/user-interface/shortcut
  $menu_links['management_shortcuts:admin/config/user-interface/shortcut'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/shortcut',
    'router_path' => 'admin/config/user-interface/shortcut',
    'link_title' => 'Shortcuts',
    'options' => array(
      'attributes' => array(
        'title' => 'Add and modify shortcut sets.',
      ),
      'identifier' => 'management_shortcuts:admin/config/user-interface/shortcut',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_interfaz-de-usuario:admin/config/user-interface',
  );
  // Exported menu link: management_site-information:admin/config/system/site-information
  $menu_links['management_site-information:admin/config/system/site-information'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site information',
    'options' => array(
      'attributes' => array(
        'title' => 'Change site name, e-mail address, slogan, default front page, and number of posts per page, error pages.',
      ),
      'identifier' => 'management_site-information:admin/config/system/site-information',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_sistema:admin/config/system',
  );
  // Exported menu link: management_smtp-authentication-support:admin/config/system/smtp
  $menu_links['management_smtp-authentication-support:admin/config/system/smtp'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/smtp',
    'router_path' => 'admin/config/system/smtp',
    'link_title' => 'SMTP Authentication Support',
    'options' => array(
      'attributes' => array(
        'title' => 'Allow for site emails to be sent through an SMTP server of your choice.',
      ),
      'identifier' => 'management_smtp-authentication-support:admin/config/system/smtp',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_sistema:admin/config/system',
  );
  // Exported menu link: management_status-report:admin/reports/status
  $menu_links['management_status-report:admin/reports/status'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/status',
    'router_path' => 'admin/reports/status',
    'link_title' => 'Status report',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about your site\'s operation and any detected problems.',
      ),
      'identifier' => 'management_status-report:admin/reports/status',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -60,
    'customized' => 0,
    'parent_identifier' => 'management_informes:admin/reports',
  );
  // Exported menu link: management_structure:admin/structure
  $menu_links['management_structure:admin/structure'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure',
    'router_path' => 'admin/structure',
    'link_title' => 'Structure',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer blocks, content types, menus, etc.',
      ),
      'identifier' => 'management_structure:admin/structure',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin',
  );
  // Exported menu link: management_system:admin/config/system
  $menu_links['management_system:admin/config/system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system',
    'router_path' => 'admin/config/system',
    'link_title' => 'System',
    'options' => array(
      'attributes' => array(
        'title' => 'General system related configuration.',
      ),
      'identifier' => 'management_system:admin/config/system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_taxonomy:admin/structure/taxonomy
  $menu_links['management_taxonomy:admin/structure/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Taxonomy',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage tagging, categorization, and classification of your content.',
      ),
      'identifier' => 'management_taxonomy:admin/structure/taxonomy',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_text-formats:admin/config/content/formats
  $menu_links['management_text-formats:admin/config/content/formats'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/formats',
    'router_path' => 'admin/config/content/formats',
    'link_title' => 'Text formats',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how content input by users is filtered, including allowed HTML tags. Also allows enabling of module-provided filters.',
      ),
      'identifier' => 'management_text-formats:admin/config/content/formats',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_top-access-denied-errors:admin/reports/access-denied
  $menu_links['management_top-access-denied-errors:admin/reports/access-denied'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/access-denied',
    'router_path' => 'admin/reports/access-denied',
    'link_title' => 'Top \'access denied\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'access denied\' errors (403s).',
      ),
      'identifier' => 'management_top-access-denied-errors:admin/reports/access-denied',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_informes:admin/reports',
  );
  // Exported menu link: management_top-page-not-found-errors:admin/reports/page-not-found
  $menu_links['management_top-page-not-found-errors:admin/reports/page-not-found'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/page-not-found',
    'router_path' => 'admin/reports/page-not-found',
    'link_title' => 'Top \'page not found\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'page not found\' errors (404s).',
      ),
      'identifier' => 'management_top-page-not-found-errors:admin/reports/page-not-found',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_informes:admin/reports',
  );
  // Exported menu link: management_top-search-phrases:admin/reports/search
  $menu_links['management_top-search-phrases:admin/reports/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/search',
    'router_path' => 'admin/reports/search',
    'link_title' => 'Top search phrases',
    'options' => array(
      'attributes' => array(
        'title' => 'View most popular search phrases.',
      ),
      'identifier' => 'management_top-search-phrases:admin/reports/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_informes:admin/reports',
  );
  // Exported menu link: management_translate-interface:admin/config/regional/translate
  $menu_links['management_translate-interface:admin/config/regional/translate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/translate',
    'router_path' => 'admin/config/regional/translate',
    'link_title' => 'Translate interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Translate the built in interface and optionally other text.',
      ),
      'identifier' => 'management_translate-interface:admin/config/regional/translate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_triggers:admin/structure/trigger
  $menu_links['management_triggers:admin/structure/trigger'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/trigger',
    'router_path' => 'admin/structure/trigger',
    'link_title' => 'Triggers',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure when to execute actions.',
      ),
      'identifier' => 'management_triggers:admin/structure/trigger',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_url-aliases:admin/config/search/path
  $menu_links['management_url-aliases:admin/config/search/path'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/path',
    'router_path' => 'admin/config/search/path',
    'link_title' => 'URL aliases',
    'options' => array(
      'attributes' => array(
        'title' => 'Change your site\'s URL paths by aliasing them.',
      ),
      'identifier' => 'management_url-aliases:admin/config/search/path',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_user-interface:admin/config/user-interface
  $menu_links['management_user-interface:admin/config/user-interface'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface',
    'router_path' => 'admin/config/user-interface',
    'link_title' => 'User interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools that enhance the user interface.',
      ),
      'identifier' => 'management_user-interface:admin/config/user-interface',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_views-panes:admin/config/content-views
  $menu_links['management_views-panes:admin/config/content-views'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content-views',
    'router_path' => 'admin/config/content-views',
    'link_title' => 'Views panes',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Views to be used as CTools content.',
      ),
      'identifier' => 'management_views-panes:admin/config/content-views',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_views:admin/structure/views
  $menu_links['management_views:admin/structure/views'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/views',
    'router_path' => 'admin/structure/views',
    'link_title' => 'Views',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage customized lists of content.',
      ),
      'identifier' => 'management_views:admin/structure/views',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_voting-api:admin/config/search/votingapi
  $menu_links['management_voting-api:admin/config/search/votingapi'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/votingapi',
    'router_path' => 'admin/config/search/votingapi',
    'link_title' => 'Voting API',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure sitewide settings for user-generated ratings and votes.',
      ),
      'identifier' => 'management_voting-api:admin/config/search/votingapi',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_web-services:admin/config/services
  $menu_links['management_web-services:admin/config/services'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services',
    'router_path' => 'admin/config/services',
    'link_title' => 'Web services',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools related to web services.',
      ),
      'identifier' => 'management_web-services:admin/config/services',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_webform-settings:admin/config/content/webform
  $menu_links['management_webform-settings:admin/config/content/webform'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/webform',
    'router_path' => 'admin/config/content/webform',
    'link_title' => 'Webform settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Global configuration of webform functionality.',
      ),
      'identifier' => 'management_webform-settings:admin/config/content/webform',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_workflow:admin/config/workflow
  $menu_links['management_workflow:admin/config/workflow'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow',
    'router_path' => 'admin/config/workflow',
    'link_title' => 'Workflow',
    'options' => array(
      'attributes' => array(
        'title' => 'Content workflow, editorial workflow tools.',
      ),
      'identifier' => 'management_workflow:admin/config/workflow',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: menu-artistas_arlenis:node/30
  $menu_links['menu-artistas_arlenis:node/30'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/30',
    'router_path' => 'node/%',
    'link_title' => 'Arlenis',
    'options' => array(
      'identifier' => 'menu-artistas_arlenis:node/30',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_avance:node/10
  $menu_links['menu-artistas_avance:node/10'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Avance',
    'options' => array(
      'identifier' => 'menu-artistas_avance:node/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_ballet-de-la-televisin-cubana:node/33
  $menu_links['menu-artistas_ballet-de-la-televisin-cubana:node/33'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/33',
    'router_path' => 'node/%',
    'link_title' => 'Ballet de la televisión cubana',
    'options' => array(
      'identifier' => 'menu-artistas_ballet-de-la-televisin-cubana:node/33',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_blanca-rosa-blanco:node/12
  $menu_links['menu-artistas_blanca-rosa-blanco:node/12'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'Blanca Rosa Blanco',
    'options' => array(
      'identifier' => 'menu-artistas_blanca-rosa-blanco:node/12',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_descemer-bueno:node/20
  $menu_links['menu-artistas_descemer-bueno:node/20'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Descemer Bueno',
    'options' => array(
      'identifier' => 'menu-artistas_descemer-bueno:node/20',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_edith-massola:node/11
  $menu_links['menu-artistas_edith-massola:node/11'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Edith Massola',
    'options' => array(
      'identifier' => 'menu-artistas_edith-massola:node/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_el-flacomnico:node/16
  $menu_links['menu-artistas_el-flacomnico:node/16'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/16',
    'router_path' => 'node/%',
    'link_title' => 'El Flacomínico',
    'options' => array(
      'identifier' => 'menu-artistas_el-flacomnico:node/16',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_el-flexible:node/28
  $menu_links['menu-artistas_el-flexible:node/28'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'El flexible',
    'options' => array(
      'identifier' => 'menu-artistas_el-flexible:node/28',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_el-pblico:node/14
  $menu_links['menu-artistas_el-pblico:node/14'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'El Público',
    'options' => array(
      'identifier' => 'menu-artistas_el-pblico:node/14',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_enrique-bueno:node/56
  $menu_links['menu-artistas_enrique-bueno:node/56'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/56',
    'router_path' => 'node/%',
    'link_title' => 'Enrique Bueno',
    'options' => array(
      'identifier' => 'menu-artistas_enrique-bueno:node/56',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_fabio:node/8
  $menu_links['menu-artistas_fabio:node/8'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Fabio',
    'options' => array(
      'identifier' => 'menu-artistas_fabio:node/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_haila-mara-mompi:node/5
  $menu_links['menu-artistas_haila-mara-mompi:node/5'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Haila María Mompié',
    'options' => array(
      'identifier' => 'menu-artistas_haila-mara-mompi:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_insurrecto:node/34
  $menu_links['menu-artistas_insurrecto:node/34'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/34',
    'router_path' => 'node/%',
    'link_title' => 'Insurrecto',
    'options' => array(
      'identifier' => 'menu-artistas_insurrecto:node/34',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_klimax:node/18
  $menu_links['menu-artistas_klimax:node/18'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'Klimax',
    'options' => array(
      'identifier' => 'menu-artistas_klimax:node/18',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_leo-piso-6:node/7
  $menu_links['menu-artistas_leo-piso-6:node/7'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Leo Piso 6',
    'options' => array(
      'identifier' => 'menu-artistas_leo-piso-6:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_lester-martnez:node/29
  $menu_links['menu-artistas_lester-martnez:node/29'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'Lester Martínez',
    'options' => array(
      'identifier' => 'menu-artistas_lester-martnez:node/29',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_los-payasos:node/27
  $menu_links['menu-artistas_los-payasos:node/27'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Los payasos',
    'options' => array(
      'identifier' => 'menu-artistas_los-payasos:node/27',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_melisma:node/68
  $menu_links['menu-artistas_melisma:node/68'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/68',
    'router_path' => 'node/%',
    'link_title' => 'Melisma',
    'options' => array(
      'identifier' => 'menu-artistas_melisma:node/68',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_patry-white:node/26
  $menu_links['menu-artistas_patry-white:node/26'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'Patry White',
    'options' => array(
      'identifier' => 'menu-artistas_patry-white:node/26',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_roclan:node/32
  $menu_links['menu-artistas_roclan:node/32'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/32',
    'router_path' => 'node/%',
    'link_title' => 'Roclan',
    'options' => array(
      'identifier' => 'menu-artistas_roclan:node/32',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-artistas_xiang-chong:node/57
  $menu_links['menu-artistas_xiang-chong:node/57'] = array(
    'menu_name' => 'menu-artistas',
    'link_path' => 'node/57',
    'router_path' => 'node/%',
    'link_title' => 'Xiang Chong',
    'options' => array(
      'identifier' => 'menu-artistas_xiang-chong:node/57',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-circuitos_a-la-playa:node/54
  $menu_links['menu-circuitos_a-la-playa:node/54'] = array(
    'menu_name' => 'menu-circuitos',
    'link_path' => 'node/54',
    'router_path' => 'node/%',
    'link_title' => 'A la playa!',
    'options' => array(
      'identifier' => 'menu-circuitos_a-la-playa:node/54',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-circuitos_benny-mor:node/74
  $menu_links['menu-circuitos_benny-mor:node/74'] = array(
    'menu_name' => 'menu-circuitos',
    'link_path' => 'node/74',
    'router_path' => 'node/%',
    'link_title' => 'Benny Moré',
    'options' => array(
      'identifier' => 'menu-circuitos_benny-mor:node/74',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-circuitos_conoce-habana:node/36
  $menu_links['menu-circuitos_conoce-habana:node/36'] = array(
    'menu_name' => 'menu-circuitos',
    'link_path' => 'node/36',
    'router_path' => 'node/%',
    'link_title' => 'Conoce Habana',
    'options' => array(
      'identifier' => 'menu-circuitos_conoce-habana:node/36',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-circuitos_el-chocolate:node/44
  $menu_links['menu-circuitos_el-chocolate:node/44'] = array(
    'menu_name' => 'menu-circuitos',
    'link_path' => 'node/44',
    'router_path' => 'node/%',
    'link_title' => 'El chocolate',
    'options' => array(
      'identifier' => 'menu-circuitos_el-chocolate:node/44',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-circuitos_la-luna:node/62
  $menu_links['menu-circuitos_la-luna:node/62'] = array(
    'menu_name' => 'menu-circuitos',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'La luna',
    'options' => array(
      'identifier' => 'menu-circuitos_la-luna:node/62',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-circuitos_la-madre-patria-en-la-mesa:node/61
  $menu_links['menu-circuitos_la-madre-patria-en-la-mesa:node/61'] = array(
    'menu_name' => 'menu-circuitos',
    'link_path' => 'node/61',
    'router_path' => 'node/%',
    'link_title' => 'La madre patria en la mesa',
    'options' => array(
      'identifier' => 'menu-circuitos_la-madre-patria-en-la-mesa:node/61',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-circuitos_las-llaves-de-mi-corazn:node/45
  $menu_links['menu-circuitos_las-llaves-de-mi-corazn:node/45'] = array(
    'menu_name' => 'menu-circuitos',
    'link_path' => 'node/45',
    'router_path' => 'node/%',
    'link_title' => 'Las llaves de mi corazón',
    'options' => array(
      'identifier' => 'menu-circuitos_las-llaves-de-mi-corazn:node/45',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-circuitos_las-olas-del-amor:node/60
  $menu_links['menu-circuitos_las-olas-del-amor:node/60'] = array(
    'menu_name' => 'menu-circuitos',
    'link_path' => 'node/60',
    'router_path' => 'node/%',
    'link_title' => 'Las olas del amor',
    'options' => array(
      'identifier' => 'menu-circuitos_las-olas-del-amor:node/60',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-establecimientos_ambassador:node/65
  $menu_links['menu-establecimientos_ambassador:node/65'] = array(
    'menu_name' => 'menu-establecimientos',
    'link_path' => 'node/65',
    'router_path' => 'node/%',
    'link_title' => 'Ambassador',
    'options' => array(
      'identifier' => 'menu-establecimientos_ambassador:node/65',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-establecimientos_amrica:node/37
  $menu_links['menu-establecimientos_amrica:node/37'] = array(
    'menu_name' => 'menu-establecimientos',
    'link_path' => 'node/37',
    'router_path' => 'node/%',
    'link_title' => 'América',
    'options' => array(
      'identifier' => 'menu-establecimientos_amrica:node/37',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-establecimientos_chez-karel:node/3
  $menu_links['menu-establecimientos_chez-karel:node/3'] = array(
    'menu_name' => 'menu-establecimientos',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Chez Karel',
    'options' => array(
      'identifier' => 'menu-establecimientos_chez-karel:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-establecimientos_el-paraso:node/59
  $menu_links['menu-establecimientos_el-paraso:node/59'] = array(
    'menu_name' => 'menu-establecimientos',
    'link_path' => 'node/59',
    'router_path' => 'node/%',
    'link_title' => 'El paraíso',
    'options' => array(
      'identifier' => 'menu-establecimientos_el-paraso:node/59',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-establecimientos_el-sauce:node/13
  $menu_links['menu-establecimientos_el-sauce:node/13'] = array(
    'menu_name' => 'menu-establecimientos',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'El Sauce',
    'options' => array(
      'identifier' => 'menu-establecimientos_el-sauce:node/13',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-establecimientos_el-viejo-enrike:node/70
  $menu_links['menu-establecimientos_el-viejo-enrike:node/70'] = array(
    'menu_name' => 'menu-establecimientos',
    'link_path' => 'node/70',
    'router_path' => 'node/%',
    'link_title' => 'El viejo Enrike',
    'options' => array(
      'identifier' => 'menu-establecimientos_el-viejo-enrike:node/70',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-establecimientos_la-caldosa-de-kike-y-marina:node/53
  $menu_links['menu-establecimientos_la-caldosa-de-kike-y-marina:node/53'] = array(
    'menu_name' => 'menu-establecimientos',
    'link_path' => 'node/53',
    'router_path' => 'node/%',
    'link_title' => 'La caldosa de Kike y Marina',
    'options' => array(
      'identifier' => 'menu-establecimientos_la-caldosa-de-kike-y-marina:node/53',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-establecimientos_la-maison:node/9
  $menu_links['menu-establecimientos_la-maison:node/9'] = array(
    'menu_name' => 'menu-establecimientos',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'La Maison',
    'options' => array(
      'identifier' => 'menu-establecimientos_la-maison:node/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-establecimientos_la-roca:node/1
  $menu_links['menu-establecimientos_la-roca:node/1'] = array(
    'menu_name' => 'menu-establecimientos',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'La roca',
    'options' => array(
      'identifier' => 'menu-establecimientos_la-roca:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-establecimientos_las-delicias:node/78
  $menu_links['menu-establecimientos_las-delicias:node/78'] = array(
    'menu_name' => 'menu-establecimientos',
    'link_path' => 'node/78',
    'router_path' => 'node/%',
    'link_title' => 'Las delicias',
    'options' => array(
      'identifier' => 'menu-establecimientos_las-delicias:node/78',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-establecimientos_mella:node/4
  $menu_links['menu-establecimientos_mella:node/4'] = array(
    'menu_name' => 'menu-establecimientos',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Mella',
    'options' => array(
      'identifier' => 'menu-establecimientos_mella:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-establecimientos_palacio-de-las-convenciones:node/41
  $menu_links['menu-establecimientos_palacio-de-las-convenciones:node/41'] = array(
    'menu_name' => 'menu-establecimientos',
    'link_path' => 'node/41',
    'router_path' => 'node/%',
    'link_title' => 'Palacio de las convenciones',
    'options' => array(
      'identifier' => 'menu-establecimientos_palacio-de-las-convenciones:node/41',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-establecimientos_triann:node/15
  $menu_links['menu-establecimientos_triann:node/15'] = array(
    'menu_name' => 'menu-establecimientos',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Trianón',
    'options' => array(
      'identifier' => 'menu-establecimientos_triann:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-establecimientos_tropicana:node/64
  $menu_links['menu-establecimientos_tropicana:node/64'] = array(
    'menu_name' => 'menu-establecimientos',
    'link_path' => 'node/64',
    'router_path' => 'node/%',
    'link_title' => 'Tropicana',
    'options' => array(
      'identifier' => 'menu-establecimientos_tropicana:node/64',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_cena-chic-de-inicio-del-verano:node/40
  $menu_links['menu-eventos_cena-chic-de-inicio-del-verano:node/40'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/40',
    'router_path' => 'node/%',
    'link_title' => 'Cena chic de inicio del verano',
    'options' => array(
      'identifier' => 'menu-eventos_cena-chic-de-inicio-del-verano:node/40',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_clausura-congreso-de-lingistas:node/42
  $menu_links['menu-eventos_clausura-congreso-de-lingistas:node/42'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/42',
    'router_path' => 'node/%',
    'link_title' => 'Clausura congreso de lingüistas',
    'options' => array(
      'identifier' => 'menu-eventos_clausura-congreso-de-lingistas:node/42',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_concierto-de-paco-de-luca:node/86
  $menu_links['menu-eventos_concierto-de-paco-de-luca:node/86'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/86',
    'router_path' => 'node/%',
    'link_title' => 'Concierto de Paco de Lucía',
    'options' => array(
      'identifier' => 'menu-eventos_concierto-de-paco-de-luca:node/86',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_concierto-de-rock:node/55
  $menu_links['menu-eventos_concierto-de-rock:node/55'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/55',
    'router_path' => 'node/%',
    'link_title' => 'Concierto de Rock',
    'options' => array(
      'identifier' => 'menu-eventos_concierto-de-rock:node/55',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_concurso-de-baile:node/39
  $menu_links['menu-eventos_concurso-de-baile:node/39'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/39',
    'router_path' => 'node/%',
    'link_title' => 'Concurso de baile',
    'options' => array(
      'identifier' => 'menu-eventos_concurso-de-baile:node/39',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_el-glamour-no-tiene-edad:node/69
  $menu_links['menu-eventos_el-glamour-no-tiene-edad:node/69'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/69',
    'router_path' => 'node/%',
    'link_title' => 'El glamour no tiene edad',
    'options' => array(
      'identifier' => 'menu-eventos_el-glamour-no-tiene-edad:node/69',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_exposicin-de-abanicos:node/38
  $menu_links['menu-eventos_exposicin-de-abanicos:node/38'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/38',
    'router_path' => 'node/%',
    'link_title' => 'Exposición de abanicos',
    'options' => array(
      'identifier' => 'menu-eventos_exposicin-de-abanicos:node/38',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_exposicin-de-medios-de-transporte-antiguos:node/31
  $menu_links['menu-eventos_exposicin-de-medios-de-transporte-antiguos:node/31'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/31',
    'router_path' => 'node/%',
    'link_title' => 'Exposición de medios de transporte antiguos',
    'options' => array(
      'identifier' => 'menu-eventos_exposicin-de-medios-de-transporte-antiguos:node/31',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_feria-de-antiguas-ropas-de-artistas-famosos:node/89
  $menu_links['menu-eventos_feria-de-antiguas-ropas-de-artistas-famosos:node/89'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/89',
    'router_path' => 'node/%',
    'link_title' => 'Feria de antiguas ropas de artistas famosos',
    'options' => array(
      'identifier' => 'menu-eventos_feria-de-antiguas-ropas-de-artistas-famosos:node/89',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_fiesta-anual-de-cumbancha:node/58
  $menu_links['menu-eventos_fiesta-anual-de-cumbancha:node/58'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/58',
    'router_path' => 'node/%',
    'link_title' => 'Fiesta anual de Cumbancha',
    'options' => array(
      'identifier' => 'menu-eventos_fiesta-anual-de-cumbancha:node/58',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_fiesta-de-cumpleaos-de-pierre:node/23
  $menu_links['menu-eventos_fiesta-de-cumpleaos-de-pierre:node/23'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Fiesta de cumpleaños de Pierre',
    'options' => array(
      'identifier' => 'menu-eventos_fiesta-de-cumpleaos-de-pierre:node/23',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_fiesta-house:node/88
  $menu_links['menu-eventos_fiesta-house:node/88'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/88',
    'router_path' => 'node/%',
    'link_title' => 'Fiesta House',
    'options' => array(
      'identifier' => 'menu-eventos_fiesta-house:node/88',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_firma-del-tratado-turstico:node/43
  $menu_links['menu-eventos_firma-del-tratado-turstico:node/43'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/43',
    'router_path' => 'node/%',
    'link_title' => 'Firma del tratado turístico',
    'options' => array(
      'identifier' => 'menu-eventos_firma-del-tratado-turstico:node/43',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_gran-pasacalle-de-verano:node/87
  $menu_links['menu-eventos_gran-pasacalle-de-verano:node/87'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/87',
    'router_path' => 'node/%',
    'link_title' => 'Gran pasacalle de verano',
    'options' => array(
      'identifier' => 'menu-eventos_gran-pasacalle-de-verano:node/87',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_homenaje-a-mujeres-mdicos:node/67
  $menu_links['menu-eventos_homenaje-a-mujeres-mdicos:node/67'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/67',
    'router_path' => 'node/%',
    'link_title' => 'Homenaje a mujeres médicos',
    'options' => array(
      'identifier' => 'menu-eventos_homenaje-a-mujeres-mdicos:node/67',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_karaoke-por-la-paz:node/35
  $menu_links['menu-eventos_karaoke-por-la-paz:node/35'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/35',
    'router_path' => 'node/%',
    'link_title' => 'Karaoke por la paz',
    'options' => array(
      'identifier' => 'menu-eventos_karaoke-por-la-paz:node/35',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_la-diva-del-pueblo:node/66
  $menu_links['menu-eventos_la-diva-del-pueblo:node/66'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/66',
    'router_path' => 'node/%',
    'link_title' => 'La diva del pueblo',
    'options' => array(
      'identifier' => 'menu-eventos_la-diva-del-pueblo:node/66',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_las-noches-de-descemer:node/21
  $menu_links['menu-eventos_las-noches-de-descemer:node/21'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'Las noches de Descemer',
    'options' => array(
      'identifier' => 'menu-eventos_las-noches-de-descemer:node/21',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_magia-y-fantasa:node/19
  $menu_links['menu-eventos_magia-y-fantasa:node/19'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Magia y fantasía',
    'options' => array(
      'identifier' => 'menu-eventos_magia-y-fantasa:node/19',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_muertecita-de-miedo:node/22
  $menu_links['menu-eventos_muertecita-de-miedo:node/22'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Muertecita de miedo!!',
    'options' => array(
      'identifier' => 'menu-eventos_muertecita-de-miedo:node/22',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_pasarela-primavera-verano:node/24
  $menu_links['menu-eventos_pasarela-primavera-verano:node/24'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Pasarela Primavera-Verano',
    'options' => array(
      'identifier' => 'menu-eventos_pasarela-primavera-verano:node/24',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_pea-de-haila-y-sus-invitados:node/17
  $menu_links['menu-eventos_pea-de-haila-y-sus-invitados:node/17'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Peña de Haila y sus invitados',
    'options' => array(
      'identifier' => 'menu-eventos_pea-de-haila-y-sus-invitados:node/17',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_premiacin-concurso-culinario-de-repostera:node/25
  $menu_links['menu-eventos_premiacin-concurso-culinario-de-repostera:node/25'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'Premiación concurso culinario de repostería',
    'options' => array(
      'identifier' => 'menu-eventos_premiacin-concurso-culinario-de-repostera:node/25',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_recorrido-guiado-por-el-acuario:node/85
  $menu_links['menu-eventos_recorrido-guiado-por-el-acuario:node/85'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/85',
    'router_path' => 'node/%',
    'link_title' => 'Recorrido guiado por el Acuario',
    'options' => array(
      'identifier' => 'menu-eventos_recorrido-guiado-por-el-acuario:node/85',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-eventos_tardes-de-jazz:node/71
  $menu_links['menu-eventos_tardes-de-jazz:node/71'] = array(
    'menu_name' => 'menu-eventos',
    'link_path' => 'node/71',
    'router_path' => 'node/%',
    'link_title' => 'Tardes de Jazz',
    'options' => array(
      'identifier' => 'menu-eventos_tardes-de-jazz:node/71',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
  t('A la playa!');
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
  t('Arlenis');
  t('Artistas');
  t('Async command log');
  t('Available updates');
  t('Avance');
  t('Backup and Migrate');
  t('Ballet de la televisión cubana');
  t('Benny Moré');
  t('Blanca Rosa Blanco');
  t('Blocks');
  t('Browsing History Recommender');
  t('Bulk Exporter');
  t('CKEditor');
  t('CKEditor Link');
  t('Cancelar suscripción');
  t('Cena chic de inicio del verano');
  t('Chez Karel');
  t('Circuitos');
  t('Clausura congreso de lingüistas');
  t('Clean URLs');
  t('Comment Notify');
  t('Comments');
  t('Concierto de Paco de Lucía');
  t('Concierto de Rock');
  t('Concurso de baile');
  t('Configuration');
  t('Configure');
  t('Conoce Habana');
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
  t('Descemer Bueno');
  t('Development');
  t('Directorio');
  t('DrupalChat');
  t('Edith Massola');
  t('El Flacomínico');
  t('El Público');
  t('El Sauce');
  t('El chocolate');
  t('El flexible');
  t('El glamour no tiene edad');
  t('El paraíso');
  t('El viejo Enrike');
  t('Email Contact Form Settings');
  t('Enrique Bueno');
  t('Esta semana');
  t('Establecimientos');
  t('Este mes');
  t('Eventos');
  t('Exposición de abanicos');
  t('Exposición de medios de transporte antiguos');
  t('Fabio');
  t('Features');
  t('Feria de antiguas ropas de artistas famosos');
  t('Field list');
  t('Fiesta House');
  t('Fiesta anual de Cumbancha');
  t('Fiesta de cumpleaños de Pierre');
  t('File system');
  t('Firma del tratado turístico');
  t('Fivestar');
  t('Flags');
  t('Gran pasacalle de verano');
  t('Haila María Mompié');
  t('Homenaje a mujeres médicos');
  t('Hoy');
  t('IP address blocking');
  t('Image styles');
  t('Image toolkit');
  t('Inicio');
  t('Insurrecto');
  t('Invitar por correo');
  t('Invite');
  t('Invite Types');
  t('Karaoke por la paz');
  t('Klimax');
  t('La Maison');
  t('La caldosa de Kike y Marina');
  t('La diva del pueblo');
  t('La luna');
  t('La madre patria en la mesa');
  t('La roca');
  t('Languages');
  t('Las delicias');
  t('Las llaves de mi corazón');
  t('Las noches de Descemer');
  t('Las olas del amor');
  t('Leo Piso 6');
  t('Lester Martínez');
  t('Log out');
  t('Logging and errors');
  t('Los payasos');
  t('Magia y fantasía');
  t('Mail System');
  t('Maintenance mode');
  t('Management');
  t('Media');
  t('Melisma');
  t('Mella');
  t('Menus');
  t('Menú principal');
  t('Mime Mail');
  t('Moderador');
  t('Module filter');
  t('Modules');
  t('Muertecita de miedo!!');
  t('Multilingual settings');
  t('Navegación');
  t('Newsletters');
  t('Palacio de las convenciones');
  t('Pasarela Primavera-Verano');
  t('Patry White');
  t('People');
  t('Performance');
  t('Peña de Haila y sus invitados');
  t('Premiación concurso culinario de repostería');
  t('Próximos circuitos');
  t('Quiero promocionar');
  t('RSS publishing');
  t('Recent log messages');
  t('Recommender');
  t('Recorrido guiado por el Acuario');
  t('Regional and language');
  t('Regional settings');
  t('Registration');
  t('Registration states');
  t('Registration types');
  t('Reports');
  t('Roclan');
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
  t('Tardes de Jazz');
  t('Taxonomy');
  t('Text formats');
  t('Top \'access denied\' errors');
  t('Top \'page not found\' errors');
  t('Top search phrases');
  t('Translate interface');
  t('Trianón');
  t('Triggers');
  t('Tropicana');
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
  t('Xiang Chong');
  t('jQuery update');


  return $menu_links;
}
