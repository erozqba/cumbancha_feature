<?php
/**
 * @file
 * cumbancha_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function cumbancha_feature_default_rules_configuration() {
  $items = array();
  $items['rules_agregar_taxonom_a_de_palabras_clave'] = entity_import('rules_config', '{ "rules_agregar_taxonom_a_de_palabras_clave" : {
      "LABEL" : "Agregar Taxonom\\u00eda de Palabras Clave",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "taxonomy" ],
      "ON" : { "taxonomy_term_insert" : [] },
      "IF" : [
        { "NOT data_is" : { "data" : [ "term:vocabulary" ], "value" : "palabras_clave" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "taxonomy_term",
              "param_name" : "[term:name]",
              "param_vocabulary" : "palabras_clave"
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        }
      ]
    }
  }');
  $items['rules_agregar_taxonomia_de_grupo_artistico'] = entity_import('rules_config', '{ "rules_agregar_taxonomia_de_grupo_artistico" : {
      "LABEL" : "Agregar Taxonom\\u00eda de grupo art\\u00edstico",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--grupo_artistico" : { "bundle" : "grupo_artistico" } },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "taxonomy_term",
              "param_name" : "[node:field-tipo-de-agrupacion] [node:title]",
              "param_vocabulary" : "agrupaciones_artisticas"
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        }
      ]
    }
  }');
  $items['rules_agregar_taxonomia_de_lugar'] = entity_import('rules_config', '{ "rules_agregar_taxonomia_de_lugar" : {
      "LABEL" : "Agregar Taxonom\\u00eda de lugar",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--establecimiento" : { "bundle" : "establecimiento" } },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "taxonomy_term",
              "param_name" : "[node:field-tipo] [node:title]",
              "param_vocabulary" : "lugar"
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        }
      ]
    }
  }');
  return $items;
}
