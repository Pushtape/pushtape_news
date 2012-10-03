<?php
/**
 * @file
 * pushtape_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pushtape_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pushtape_news_view';
  $context->description = 'on the news overview page';
  $context->tag = 'pushtape';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'pushtape_news' => 'pushtape_news',
        'pushtape_news:page_1' => 'pushtape_news:page_1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('on the news overview page');
  t('pushtape');
  $export['pushtape_news_view'] = $context;

  return $export;
}
