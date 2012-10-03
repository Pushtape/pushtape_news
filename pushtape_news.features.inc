<?php
/**
 * @file
 * pushtape_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pushtape_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pushtape_news_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pushtape_news_node_info() {
  $items = array(
    'pushtape_news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('An important piece of news to post to your site. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
