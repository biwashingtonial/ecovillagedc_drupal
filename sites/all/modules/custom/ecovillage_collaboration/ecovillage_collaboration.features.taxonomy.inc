<?php
/**
 * @file
 * ecovillage_collaboration.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ecovillage_collaboration_taxonomy_default_vocabularies() {
  return array(
    'ecovillage_working_groups' => array(
      'name' => 'Working Groups',
      'machine_name' => 'ecovillage_working_groups',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
