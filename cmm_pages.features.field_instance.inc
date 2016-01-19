<?php
/**
 * @file
 * cmm_pages.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cmm_pages_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-field_page_body'.
  $field_instances['node-page-field_page_body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
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
    'field_name' => 'field_page_body',
    'label' => 'Page Body',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'card' => 'card',
        'card_group' => 'card_group',
        'slideshow' => 'slideshow',
        'text' => 'text',
      ),
      'bundle_weights' => array(
        'card' => -5,
        'card_group' => -6,
        'slideshow' => -7,
        'text' => -8,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Content',
      'title_multiple' => 'Contents',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Page Body');

  return $field_instances;
}
