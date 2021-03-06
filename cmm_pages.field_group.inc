<?php
/**
 * @file
 * cmm_pages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cmm_pages_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|page|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Page',
    'weight' => '0',
    'children' => array(
      0 => 'field_page_body',
      1 => 'title',
      2 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-main field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_main|node|page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Page');

  return $field_groups;
}
