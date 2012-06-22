<?php
/**
 * @file
 * pushtape_news.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pushtape_news_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_pushtape_news';
  $strongarm->value = 'edit-display';
  $export['additional_settings__active_tab_pushtape_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_pushtape_news';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_pushtape_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_pushtape_news';
  $strongarm->value = 'm/d/Y - g:ia';
  $export['date_popup_authored_format_pushtape_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_pushtape_news';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_pushtape_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_pushtape_news';
  $strongarm->value = array();
  $export['menu_options_pushtape_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_pushtape_news';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_pushtape_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pushtape_news';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
    2 => 'revision',
  );
  $export['node_options_pushtape_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_pushtape_news';
  $strongarm->value = '0';
  $export['node_preview_pushtape_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_pushtape_news';
  $strongarm->value = 1;
  $export['node_submitted_pushtape_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_pushtape_news';
  $strongarm->value = array(
    'status' => 1,
    'default' => 1,
    'choice' => 0,
  );
  $export['panelizer_defaults_node_pushtape_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pushtape_news_pattern';
  $strongarm->value = 'news/[node:title]';
  $export['pathauto_node_pushtape_news_pattern'] = $strongarm;

  return $export;
}
