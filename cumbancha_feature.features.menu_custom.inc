<?php
/**
 * @file
 * cumbancha_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function cumbancha_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Menú principal',
    'description' => 'El menú <em>Principal</em> se usa en muchos sitios web para mostrar las secciones principales del sitio, generalmente en una barra de navegación superior.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'El menú <em>Administrar</em> contiene enlaces a tareas administrativas.',
  );
  // Exported menu: menu-agrupaciones-artisticas.
  $menus['menu-agrupaciones-artisticas'] = array(
    'menu_name' => 'menu-agrupaciones-artisticas',
    'title' => 'Agrupaciones artísticas',
    'description' => 'Grupos de personas que practican una manifestación cultural de manera profesional.',
  );
  // Exported menu: menu-artistas.
  $menus['menu-artistas'] = array(
    'menu_name' => 'menu-artistas',
    'title' => 'Artistas',
    'description' => 'Persona que practica una manifestación artística de manera profesional.',
  );
  // Exported menu: menu-circuitos.
  $menus['menu-circuitos'] = array(
    'menu_name' => 'menu-circuitos',
    'title' => 'Circuitos',
    'description' => 'Circuitos temáticos compuestos por varias actividades afines.',
  );
  // Exported menu: menu-establecimientos.
  $menus['menu-establecimientos'] = array(
    'menu_name' => 'menu-establecimientos',
    'title' => 'Establecimientos',
    'description' => 'Lugares donde asistir',
  );
  // Exported menu: menu-eventos.
  $menus['menu-eventos'] = array(
    'menu_name' => 'menu-eventos',
    'title' => 'Eventos',
    'description' => 'Eventos y presentaciones habituales.',
  );
  // Exported menu: menu-moderador.
  $menus['menu-moderador'] = array(
    'menu_name' => 'menu-moderador',
    'title' => 'Moderador',
    'description' => 'Opciones de trabajo del moderador.',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navegación',
    'description' => 'El menú de <em>Navegación</em> contiene enlaces para los visitantes al sitio. Algunos módulos agregan enlaces al menú de <em>Navegación</em> automáticamente.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'El menú <em>Usuario</em> contiene enlaces relacionados con la cuenta del usuario, como el enlace \'Cerrar sesión\'.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Agrupaciones artísticas');
  t('Artistas');
  t('Circuitos');
  t('Circuitos temáticos compuestos por varias actividades afines.');
  t('El menú <em>Administrar</em> contiene enlaces a tareas administrativas.');
  t('El menú <em>Principal</em> se usa en muchos sitios web para mostrar las secciones principales del sitio, generalmente en una barra de navegación superior.');
  t('El menú <em>Usuario</em> contiene enlaces relacionados con la cuenta del usuario, como el enlace \'Cerrar sesión\'.');
  t('El menú de <em>Navegación</em> contiene enlaces para los visitantes al sitio. Algunos módulos agregan enlaces al menú de <em>Navegación</em> automáticamente.');
  t('Establecimientos');
  t('Eventos');
  t('Eventos y presentaciones habituales.');
  t('Features');
  t('Grupos de personas que practican una manifestación cultural de manera profesional.');
  t('Lugares donde asistir');
  t('Management');
  t('Menu items for any enabled features.');
  t('Menú principal');
  t('Moderador');
  t('Navegación');
  t('Opciones de trabajo del moderador.');
  t('Persona que practica una manifestación artística de manera profesional.');
  t('User menu');


  return $menus;
}
