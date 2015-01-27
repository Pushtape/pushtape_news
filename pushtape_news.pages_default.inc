<?php
/**
 * @file
 * pushtape_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function pushtape_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news';
  $page->task = 'page';
  $page->admin_title = 'News';
  $page->admin_description = '';
  $page->path = 'news';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'News',
    'weight' => 0,
    'name' => 'main-menu',
    'parent' => 'main-menu:0',
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'news',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bonham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'News';
  $display->uuid = '30c6ce38-f606-4d3f-a0aa-44a559021be0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-72bfc0cc-02ea-46fe-9f1e-4f55cf0d981d';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => 'Latest News',
      'items_per_page' => '3',
      'exposed' => array(
        'widget_title' => 'Latest News',
        'more_link' => 1,
        'use_pager' => 1,
        'pager_id' => '',
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => '2',
      'link_to_view' => NULL,
      'more_link' => 1,
      'path' => NULL,
      'view_settings' => 'nodes',
      'header_type' => 'none',
      'override_title' => '',
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '72bfc0cc-02ea-46fe-9f1e-4f55cf0d981d';
    $display->content['new-72bfc0cc-02ea-46fe-9f1e-4f55cf0d981d'] = $pane;
    $display->panels['contentmain'][0] = 'new-72bfc0cc-02ea-46fe-9f1e-4f55cf0d981d';
    $pane = new stdClass();
    $pane->pid = 'new-61de7553-eea7-4d3e-9ccd-af6ab4defe6e';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => '',
      'items_per_page' => '0',
      'exposed' => array(
        'widget_title' => '',
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
      'fields_override' => array(
        'field_featured_image' => 1,
        'title' => 1,
        'body' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_style' => array(
          'well' => 'well',
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
        ),
      ),
      'style' => 'bootstrapcustomize',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '61de7553-eea7-4d3e-9ccd-af6ab4defe6e';
    $display->content['new-61de7553-eea7-4d3e-9ccd-af6ab4defe6e'] = $pane;
    $display->panels['header'][0] = 'new-61de7553-eea7-4d3e-9ccd-af6ab4defe6e';
    $pane = new stdClass();
    $pane->pid = 'new-994a76b3-9c20-40cf-bc4a-a3951b487de6';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'albums-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_artwork' => 1,
        'title' => 1,
        'field_artist' => 0,
        'field_album' => 1,
        'field_tracklist' => 1,
      ),
      'exposed' => array(
        'widget_title' => 'Featured Album',
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'teaser',
      'widget_title' => 'Featured Album',
      'items_per_page' => NULL,
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_style' => array(
          'well' => 'well',
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
        ),
      ),
      'style' => 'bootstrapcustomize',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '994a76b3-9c20-40cf-bc4a-a3951b487de6';
    $display->content['new-994a76b3-9c20-40cf-bc4a-a3951b487de6'] = $pane;
    $display->panels['sidebar'][0] = 'new-994a76b3-9c20-40cf-bc4a-a3951b487de6';
    $pane = new stdClass();
    $pane->pid = 'new-4c6ec5de-b60b-4955-a637-c96ec3a014f5';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '3',
      'fields_override' => array(
        'title' => 1,
        'field_event_date' => 1,
        'field_event_venue' => 1,
        'field_event_city' => 1,
        'field_event_state' => 1,
      ),
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => 1,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
      'override_title' => '',
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_style' => array(
          'well' => 'well',
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
        ),
      ),
      'style' => 'bootstrapcustomize',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4c6ec5de-b60b-4955-a637-c96ec3a014f5';
    $display->content['new-4c6ec5de-b60b-4955-a637-c96ec3a014f5'] = $pane;
    $display->panels['sidebar'][1] = 'new-4c6ec5de-b60b-4955-a637-c96ec3a014f5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news'] = $page;

  return $pages;

}
