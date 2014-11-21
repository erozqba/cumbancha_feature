<?php
/**
 * @file
 * cumbancha_extra_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cumbancha_extra_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_inicio:<front> **********************************************  
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
  
  // Exported menu link: main-menu_directorio:<front> **********************************************
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
  // Exported menu link: main-menu_artistas:artistas
  $menu_links['main-menu_artistas:artistas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'artistas',
    'router_path' => 'artistas',
    'link_title' => 'Artistas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_artistas:artistas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_directorio:<front>',
  );
  // Exported menu link: main-menu_agrupaciones:agrupaciones
  $menu_links['main-menu_agrupaciones:agrupaciones'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'agrupaciones',
    'router_path' => 'agrupaciones',
    'link_title' => 'Agrupaciones',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_agrupaciones:agrupaciones',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_directorio:<front>',
  );
  // Exported menu link: main-menu_establecimientos:establecimientos
  $menu_links['main-menu_establecimientos:establecimientos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'establecimientos',
    'router_path' => 'establecimientos',
    'link_title' => 'Establecimientos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_establecimientos:establecimientos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_directorio:<front>',
  );
  
  // Exported menu link: main-menu_actividades:<front> ***********************************************
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
  // Exported menu link: main-menu_presentaciones-habituales:presentaciones-habituales
  $menu_links['main-menu_presentaciones-habituales:presentaciones-habituales'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'presentaciones-habituales',
    'router_path' => 'presentaciones-habituales',
    'link_title' => 'Presentaciones habituales',
    'options' => array(
      'identifier' => 'main-menu_presentaciones-habituales:presentaciones-habituales',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_actividades:<front>',
  );
  
  // Exported menu link: main-menu_circuitos:<front> *********************************************
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
  // Exported menu link: main-menu_mis-circuitos:mis-circuitos
  $menu_links['main-menu_mis-circuitos:mis-circuitos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mis-circuitos',
    'router_path' => 'mis-circuitos',
    'link_title' => 'Mis circuitos',
    'options' => array(
      'identifier' => 'main-menu_mis-circuitos:mis-circuitos',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_circuitos:<front>',
  );
  
  // Exported menu link: main-menu_quiero-promocionar:<front> ******************************************
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
  // Exported menu link: main-menu_artista:promocionar_artista
  $menu_links['main-menu_artista:promocionar_artista'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'promocionar_artista',
    'router_path' => 'promocionar_artista',
    'link_title' => 'Artista',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_artista:promocionar_artista',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_quiero-promocionar:<front>',
  );
  // Exported menu link: main-menu_agrupacin:promocionar_agrupacion
  $menu_links['main-menu_agrupacin:promocionar_agrupacion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'promocionar_agrupacion',
    'router_path' => 'promocionar_agrupacion',
    'link_title' => 'Agrupación',
    'options' => array(
      'identifier' => 'main-menu_agrupacin:promocionar_agrupacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_quiero-promocionar:<front>',
  );
  
  // Exported menu link: main-menu_actividad:promocionar_actividad
  $menu_links['main-menu_actividad:promocionar_actividad'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'promocionar_actividad',
    'router_path' => 'promocionar_actividad',
    'link_title' => 'Actividad',
    'options' => array(
      'identifier' => 'main-menu_actividad:promocionar_actividad',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_quiero-promocionar:<front>',
  );
  // Exported menu link: main-menu_establecimiento:promocionar_establecimiento
  $menu_links['main-menu_establecimiento:establecimiento'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'establecimiento',
    'router_path' => 'establecimiento',
    'link_title' => 'Establecimiento',
    'options' => array(
      'identifier' => 'main-menu_establecimiento:establecimiento	',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_quiero-promocionar:<front>',
  );
  
  
  // Exported menu link: main-menu_boletn-semanal:boletin ********************************************
  $menu_links['main-menu_boletn-semanal:boletin'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'boletin',
    'router_path' => 'boletin',
    'link_title' => 'Boletín Semanal',
    'options' => array(
      'identifier' => 'main-menu_boletn-semanal:boletin',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -42,
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
    'parent_identifier' => 'main-menu_boletn-semanal:boletin',
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
    'parent_identifier' => 'main-menu_boletn-semanal:boletin',
  );
  
  // Exported menu link: main-menu_contctenos:contact *******************************************
  $menu_links['main-menu_contctenos:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contáctenos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contctenos:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -41,
    'customized' => 1,
  );
  
  //****************************************************************************************
  //****************************************************************************************
  
  // Exported menu link: menu-moderador_miembros:miembros ******************************************
  $menu_links['menu-moderador_miembros:miembros'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'miembros',
    'router_path' => 'miembros',
    'link_title' => 'Miembros',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-moderador_miembros:miembros',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-moderador_aadir-nuevo:admin/people/create
  $menu_links['menu-moderador_aadir-nuevo:admin/people/create'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'admin/people/create',
    'router_path' => 'admin/people/create',
    'link_title' => 'Añadir nuevo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-moderador_aadir-nuevo:admin/people/create',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-moderador_miembros:miembros',
  );
  
  // Exported menu link: menu-moderador_actividades:todas_actividades **************************************************
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
  // Exported menu link: menu-moderador_aadir-nuevo:node/add/actividad
  $menu_links['menu-moderador_aadir-nuevo:node/add/actividad'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'node/add/actividad',
    'router_path' => 'node/add/actividad',
    'link_title' => 'Añadir nuevo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-moderador_aadir-nuevo:node/add/actividad',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-moderador_actividades:todas_actividades',
  );
  
  // Exported menu link: menu-moderador_artistas:artistas **************************************************
  $menu_links['menu-moderador_artistas:artistas'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'artistas',
    'router_path' => 'artistas',
    'link_title' => 'Artistas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-moderador_artistas:artistas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-moderador_aadir-nuevo:node/add/artista
  $menu_links['menu-moderador_aadir-nuevo:node/add/artista'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'node/add/artista',
    'router_path' => 'node/add/artista',
    'link_title' => 'Añadir nuevo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-moderador_aadir-nuevo:node/add/artista',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-moderador_artistas:artistas',
  );
  
  // Exported menu link: menu-moderador_circuitos:todos_circuitos ************************************************
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
  // Exported menu link: menu-moderador_aadir-nuevo:node/add/circuito
  $menu_links['menu-moderador_aadir-nuevo:node/add/circuito'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'node/add/circuito',
    'router_path' => 'node/add/circuito',
    'link_title' => 'Añadir nuevo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-moderador_aadir-nuevo:node/add/circuito',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-moderador_circuitos:todos_circuitos ',
  );
  
   // Exported menu link: menu-moderador_establecimientos:establecimientos ********************************
  $menu_links['menu-moderador_establecimientos:establecimientos'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'establecimientos',
    'router_path' => 'establecimientos',
    'link_title' => 'Establecimientos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-moderador_establecimientos:establecimientos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-moderador_aadir-nuevo:node/add/establecimiento
  $menu_links['menu-moderador_aadir-nuevo:node/add/establecimiento'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'node/add/establecimiento',
    'router_path' => 'node/add/establecimiento',
    'link_title' => 'Añadir nuevo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-moderador_aadir-nuevo:node/add/establecimiento',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-moderador_establecimientos:establecimientos',
  );
  
  // Exported menu link: menu-moderador_agrupaciones:agrupaciones **********************************
  $menu_links['menu-moderador_agrupaciones:agrupaciones'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'agrupaciones',
    'router_path' => 'agrupaciones',
    'link_title' => 'Agrupaciones',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-moderador_agrupaciones:agrupaciones',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-moderador_aadir-nuevo:node/add/grupo-artistico
  $menu_links['menu-moderador_aadir-nuevo:node/add/grupo-artistico'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'node/add/grupo-artistico',
    'router_path' => 'node/add/grupo-artistico',
    'link_title' => 'Añadir nuevo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-moderador_aadir-nuevo:node/add/grupo-artistico',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-moderador_agrupaciones:agrupaciones',
  );
  
  
  // Exported menu link: menu-moderador_presentaciones-habituales:presentaciones-habituales ******************************************
  $menu_links['menu-moderador_presentaciones-habituales:presentaciones-habituales'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'presentaciones-habituales',
    'router_path' => 'presentaciones-habituales',
    'link_title' => 'Presentaciones habituales',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-moderador_presentaciones-habituales:presentaciones-habituales',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-moderador_aadir-nuevo:node/add/presentacion
  $menu_links['menu-moderador_aadir-nuevo:node/add/presentacion'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'node/add/presentacion',
    'router_path' => 'node/add/presentacion',
    'link_title' => 'Añadir nuevo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-moderador_aadir-nuevo:node/add/presentacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-moderador_presentaciones-habituales:presentaciones-habituales',
  );
 
  
  // Exported menu link: menu-moderador_contenido-recomendado:recomendado ***********************************
  $menu_links['menu-moderador_contenido-recomendado:recomendado'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'recomendado',
    'router_path' => 'recomendado',
    'link_title' => 'Contenido recomendado',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-moderador_contenido-recomendado:recomendado',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
 
  
  // Exported menu link: menu-moderador_nuevos-comentarios:nuevos-comentarios ***********************************
  $menu_links['menu-moderador_nuevos-comentarios:nuevos-comentarios'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'nuevos-comentarios',
    'router_path' => 'nuevos-comentarios',
    'link_title' => 'Nuevos comentarios',
    'options' => array(
      'identifier' => 'menu-moderador_nuevos-comentarios:nuevos-comentarios',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  
  
  // Exported menu link: menu-moderador_nuevos-usuarios:nuevos-usuarios ***********************************
  $menu_links['menu-moderador_nuevos-usuarios:nuevos-usuarios'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'nuevos-usuarios',
    'router_path' => 'nuevos-usuarios',
    'link_title' => 'Nuevos usuarios',
    'options' => array(
      'identifier' => 'menu-moderador_nuevos-usuarios:nuevos-usuarios',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  
  // Exported menu link: menu-moderador_solicitud-membresa-vip-usuarios-annimos:solicitud-vip-anonimo ***********************************
  $menu_links['menu-moderador_solicitud-membresa-vip-usuarios-annimos:solicitud-vip-anonimo'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'solicitud-vip-anonimo',
    'router_path' => 'solicitud-vip-anonimo',
    'link_title' => 'Solicitud membresía VIP (usuarios anónimos)',
    'options' => array(
      'identifier' => 'menu-moderador_solicitud-membresa-vip-usuarios-annimos:solicitud-vip-anonimo',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  
  
  // Exported menu link: menu-moderador_solicitud-membresa-vip-usuarios-registrados:solicitud-vip-registrado ***********************************
  $menu_links['menu-moderador_solicitud-membresa-vip-usuarios-registrados:solicitud-vip-registrado'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'solicitud-vip-registrado',
    'router_path' => 'solicitud-vip-registrado',
    'link_title' => 'Solicitud membresía VIP (usuarios registrados)',
    'options' => array(
      'identifier' => 'menu-moderador_solicitud-membresa-vip-usuarios-registrados:solicitud-vip-registrado',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  
  
  // Exported menu link: menu-moderador_solicitud-promocin-actividades:solicitud-promocion-actividad ***********************************
  $menu_links['menu-moderador_solicitud-promocin-actividades:solicitud-promocion-actividad'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'solicitud-promocion-actividad',
    'router_path' => 'solicitud-promocion-actividad',
    'link_title' => 'Solicitud promoción (ACTIVIDADES)',
    'options' => array(
      'identifier' => 'menu-moderador_solicitud-promocin-actividades:solicitud-promocion-actividad',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
  );
  
  
  // Exported menu link: menu-moderador_solicitud-promocin-artistas:solicitud-promocion-artista ***********************************
  $menu_links['menu-moderador_solicitud-promocin-artistas:solicitud-promocion-artista'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'solicitud-promocion-artista',
    'router_path' => 'solicitud-promocion-artista',
    'link_title' => 'Solicitud promoción (ARTISTAS)',
    'options' => array(
      'identifier' => 'menu-moderador_solicitud-promocin-artistas:solicitud-promocion-artista',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  
  
  // Exported menu link: menu-moderador_solicitud-promocin-establecimientos:solicitud-promocion-establecimiento ***********************************
  $menu_links['menu-moderador_solicitud-promocin-establecimientos:solicitud-promocion-establecimiento'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'solicitud-promocion-establecimiento',
    'router_path' => 'solicitud-promocion-establecimiento',
    'link_title' => 'Solicitud promoción (ESTABLECIMIENTOS)',
    'options' => array(
      'identifier' => 'menu-moderador_solicitud-promocin-establecimientos:solicitud-promocion-establecimiento',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
  );
  
  
  // Exported menu link: menu-moderador_solicitud-promocin-grupos:solicitud-promocion-grupo ***********************************
  $menu_links['menu-moderador_solicitud-promocin-grupos:solicitud-promocion-grupo'] = array(
    'menu_name' => 'menu-moderador',
    'link_path' => 'solicitud-promocion-grupo',
    'router_path' => 'solicitud-promocion-grupo',
    'link_title' => 'Solicitud promoción (GRUPOS)',
    'options' => array(
      'identifier' => 'menu-moderador_solicitud-promocin-grupos:solicitud-promocion-grupo',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  
  //********************************************************************************************************************************************
  //********************************************************************************************************************************************
  
  // Exported menu link: navigation_actividad:node/add/actividad ***********************************
  $menu_links['navigation_actividad:node/add/actividad'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/actividad',
    'router_path' => 'node/add/actividad',
    'link_title' => 'Actividad',
    'options' => array(
      'attributes' => array(
        'title' => 'Actividades culturales, festivas, recreativas que tienen lugar en establecimientos u otros sitios.',
      ),
      'identifier' => 'navigation_actividad:node/add/actividad',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_agregar-contenido:node/add',
  );
 
  // Exported menu link: navigation_circuito:node/add/circuito
  $menu_links['navigation_circuito:node/add/circuito'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/circuito',
    'router_path' => 'node/add/circuito',
    'link_title' => 'Circuito',
    'options' => array(
      'attributes' => array(
        'title' => 'Circuitos temáticos compuestos por varias actividades afines.',
      ),
      'identifier' => 'navigation_circuito:node/add/circuito',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_agregar-contenido:node/add',
  );
  
  // Exported menu link: navigation_compose-tips:filter/tips
  $menu_links['navigation_compose-tips:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(
      'identifier' => 'navigation_compose-tips:filter/tips',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  
  // Exported menu link: navigation_contact:contact
  $menu_links['navigation_contact:contact'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'navigation_contact:contact',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  
  // Exported menu link: navigation_establecimiento:node/add/establecimiento
  $menu_links['navigation_establecimiento:node/add/establecimiento'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/establecimiento',
    'router_path' => 'node/add/establecimiento',
    'link_title' => 'Establecimiento',
    'options' => array(
      'attributes' => array(
        'title' => 'Lugares a los que se puede asistir para disfrutar de sus servicios, eventos, actividades, opciones recreativas, artistas que se presenten, etc...',
      ),
      'identifier' => 'navigation_establecimiento:node/add/establecimiento',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_agregar-contenido:node/add',
  );
  
  // Exported menu link: navigation_grupo-artstico:node/add/grupo-artistico
  $menu_links['navigation_grupo-artstico:node/add/grupo-artistico'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/grupo-artistico',
    'router_path' => 'node/add/grupo-artistico',
    'link_title' => 'Grupo artístico',
    'options' => array(
      'attributes' => array(
        'title' => 'Entidad artística formada por más de una persona (artista). Ejemplo: dúos, tríos, coros, agrupaciones musicales, compañías de teatro, danza, etc...',
      ),
      'identifier' => 'navigation_grupo-artstico:node/add/grupo-artistico',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_agregar-contenido:node/add',
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
  
  
  // Exported menu link: navigation_my-bookmarks:bookmarks
  $menu_links['navigation_my-bookmarks:bookmarks'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'bookmarks',
    'router_path' => 'bookmarks',
    'link_title' => 'My bookmarks',
    'options' => array(
      'identifier' => 'navigation_my-bookmarks:bookmarks',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  
  
  // Exported menu link: navigation_pgina-bsica:node/add/page
  $menu_links['navigation_pgina-bsica:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Página básica',
    'options' => array(
      'attributes' => array(
        'title' => 'Use las <em>páginas básicas</em> para su contenido estático, como una página "Acerca de...".',
      ),
      'identifier' => 'navigation_pgina-bsica:node/add/page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_agregar-contenido:node/add',
  );
  
  // Exported menu link: navigation_presentacin-habitual:node/add/presentacion
  $menu_links['navigation_presentacin-habitual:node/add/presentacion'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/presentacion',
    'router_path' => 'node/add/presentacion',
    'link_title' => 'Presentación habitual',
    'options' => array(
      'attributes' => array(
        'title' => 'Presentaciones habituales de un artista o una agrupación en un establecimiento, con un horario determinado.',
      ),
      'identifier' => 'navigation_presentacin-habitual:node/add/presentacion',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_agregar-contenido:node/add',
  );
  
  // Exported menu link: navigation_simplenews-newsletter:node/add/simplenews
  $menu_links['navigation_simplenews-newsletter:node/add/simplenews'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/simplenews',
    'router_path' => 'node/add/simplenews',
    'link_title' => 'Simplenews newsletter',
    'options' => array(
      'attributes' => array(
        'title' => 'A newsletter issue to be sent to subscribed email addresses.',
      ),
      'identifier' => 'navigation_simplenews-newsletter:node/add/simplenews',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_agregar-contenido:node/add',
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
  
  // Exported menu link: navigation_search:search
  $menu_links['navigation_search:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'navigation_search:search',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  
  
   // Exported menu link: navigation_buzn-de-mensajes-de-chat:drupalchat/messages
  $menu_links['navigation_buzn-de-mensajes-de-chat:drupalchat/messages'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'drupalchat/messages',
    'router_path' => 'drupalchat/messages',
    'link_title' => 'Buzón de mensajes de chat',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_buzn-de-mensajes-de-chat:drupalchat/messages',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
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
  t('Actividad');
  t('Actividades');
  t('Add content');
  t('Agrupaciones');
  t('Agrupación');
  t('Artista');
  t('Artistas');
  t('Añadir nuevo');
  t('Boletín Semanal');
  t('Buzón de mensajes de chat');
  t('Cancelar suscripción');
  t('Circuito');
  t('Circuitos');
  t('Compose tips');
  t('Contact');
  t('Contenido recomendado');
  t('Contáctenos');
  t('Directorio');
  t('Esta semana');
  t('Establecimiento');
  t('Establecimientos');
  t('Este mes');
  t('Grupo artístico');
  t('Hoy');
  t('Inicio');
  t('Invitar por correo');
  t('Log out');
  t('Miembros');
  t('Mis circuitos');
  t('My bookmarks');
  t('Nuevos comentarios');
  t('Nuevos usuarios');
  t('Presentaciones habituales');
  t('Presentación habitual');
  t('Próximos circuitos');
  t('Página básica');
  t('Quiero promocionar');
  t('Se comenta');
  t('Search');
  t('Simplenews newsletter');
  t('Solicitud membresía VIP (usuarios anónimos)');
  t('Solicitud membresía VIP (usuarios registrados)');
  t('Solicitud promoción (ACTIVIDADES)');
  t('Solicitud promoción (ARTISTAS)');
  t('Solicitud promoción (ESTABLECIMIENTOS)');
  t('Solicitud promoción (GRUPOS)');
  t('Suscribirse');
  t('User account');


  return $menu_links;
}
