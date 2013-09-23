<?php
/**
 * @file
 * osu_file.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function osu_file_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
