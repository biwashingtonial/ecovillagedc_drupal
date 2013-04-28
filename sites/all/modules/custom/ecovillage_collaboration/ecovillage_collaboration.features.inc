<?php
/**
 * @file
 * ecovillage_collaboration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ecovillage_collaboration_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ecovillage_collaboration_node_info() {
  $items = array(
    'ecovillage_event' => array(
      'name' => t('Event, Meeting, or Task'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('What'),
      'help' => '',
    ),
  );
  return $items;
}
