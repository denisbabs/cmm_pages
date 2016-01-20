<?php
/**
 * @file
 * cmm_pages.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function cmm_pages_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_page_body'.
  $field_bases['field_page_body'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_page_body',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  return $field_bases;
}
