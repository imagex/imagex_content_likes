<?php
/**
 * @file
 * imagex_content_likes.features.inc
 */

/**
 * Implements hook_views_api().
 */
function imagex_content_likes_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function imagex_content_likes_flag_default_flags() {
  $flags = array();
  // Exported flag: "imagex_node_like".
  $flags['imagex_node_like'] = array(
    'entity_type' => 'node',
    'title' => 'imagex_node_like',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Like',
    'flag_long' => '',
    'flag_message' => 'Liked',
    'unflag_short' => 'Unlike',
    'unflag_long' => '',
    'unflag_message' => 'Unliked',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 'rss',
      'search_index' => 'search_index',
      'search_result' => 'search_result',
      'diff_standard' => 'diff_standard',
      'token' => 'token',
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'imagex_content_likes',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
