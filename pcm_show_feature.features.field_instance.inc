<?php
/**
 * @file
 * pcm_show_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function pcm_show_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_show_scheduling-field_airing_channel'
  $field_instances['field_collection_item-field_show_scheduling-field_airing_channel'] = array(
    'bundle' => 'field_show_scheduling',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_airing_channel',
    'label' => 'Channel',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_show_scheduling-field_live_source'
  $field_instances['field_collection_item-field_show_scheduling-field_live_source'] = array(
    'bundle' => 'field_show_scheduling',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_live_source',
    'label' => 'Live Source',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_show_scheduling-field_show_schedule_start_date'
  $field_instances['field_collection_item-field_show_scheduling-field_show_schedule_start_date'] = array(
    'bundle' => 'field_show_scheduling',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_show_schedule_start_date',
    'label' => 'Start Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_show_scheduling-field_start_time'
  $field_instances['field_collection_item-field_show_scheduling-field_start_time'] = array(
    'bundle' => 'field_show_scheduling',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_start_time',
    'label' => 'Start Time',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_cablecast_show_id'
  $field_instances['node-cm_show-field_cablecast_show_id'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'custom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(),
        'type' => 'number_unformatted',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cablecast_show_id',
    'label' => 'Cablecast Show ID',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_can11'
  $field_instances['node-cm_show-field_can11'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Has this show been produced at another CAN facility and aired on channel 11?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_can11',
    'label' => 'Has this show been produced at another CAN facility and aired on channel 11?',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 4,
        5 => 0,
        7 => 0,
        14 => 0,
        15 => 15,
        16 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_day_part'
  $field_instances['node-cm_show-field_day_part'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_day_part',
    'label' => 'Time',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_duplication_release'
  $field_instances['node-cm_show-field_duplication_release'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'I give permission to Portland Community Media to make copies of, or dub clip from this program. <i title="I give permission pursuant to the terms and conditions listed in the Operating Policies, Rules and Procedures.6.16) Except as limited by these Operating Policies, Rules and Procedures, copyright ownership of projects produced with PCM facilities belongs to the producer of the project. PCM will re-distribute and/or duplicate projects only with the signed permission of the producer. PCM reserves the right to use portions of cablecast programming for PCM historical compilations and promotional purposes."><img src="/misc/help.png">Help</i>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_duplication_release',
    'label' => 'Duplication Release',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 4,
        5 => 0,
        7 => 0,
        14 => 0,
        15 => 15,
        16 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_episode_number'
  $field_instances['node-cm_show-field_episode_number'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is prepopulated to the next available episode number. If you change it to a lesser number and submit it, you will get an error.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 0,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_episode_number',
    'label' => 'Episode Number',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_filler'
  $field_instances['node-cm_show-field_filler'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'May we use your program to fill gaps in our daily schedule? This is In addition to your scheduled plays',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_filler',
    'label' => 'Filler',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 4,
        5 => 0,
        7 => 0,
        14 => 0,
        15 => 15,
        16 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_filler_end_date'
  $field_instances['node-cm_show-field_filler_end_date'] = array(
    'bundle' => 'cm_show',
    'deleted' => 0,
    'description' => 'Date to stop airing program as "filler".',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_filler_end_date',
    'label' => 'Filler End Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'strtotime',
      'default_value2' => 'same',
      'default_value_code' => '+6 months',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_filler_start_date'
  $field_instances['node-cm_show-field_filler_start_date'] = array(
    'bundle' => 'cm_show',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_filler_start_date',
    'label' => 'Filler Start Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_is_placeholder'
  $field_instances['node-cm_show-field_is_placeholder'] = array(
    'bundle' => 'cm_show',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_is_placeholder',
    'label' => 'Is Placeholder?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_narrative'
  $field_instances['node-cm_show-field_narrative'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A longer description, available to viewers on our website.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_narrative',
    'label' => 'Show Narrative',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_objectionable_content'
  $field_instances['node-cm_show-field_objectionable_content'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Information about mature or potentially objectionable content can be found in section 6 of the Operating Policies, Rules & Procedures.<i class="beautytips" title="6.06) In order to provide parents and viewers with the tools to decide whether certain programs are appropriate for viewing in their household, PCM follows “safe harbor” scheduling standards similar to those adopted by the FCC.
 
Programming that contains indecency (as identified in section 6.07), profanity (as identified in section 6.08), and/or extreme violence or degradation is considered “potentially objectionable” and will be cablecast during safe harbor hours:

·  11pm – 5am on channels 22 and 23
·  12am – 5am on channel 11
 
The producer of record is required to inform PCM programming staff if his/her project contains potentially objectionable content. Potentially objectionable projects must be identified as such on the distribution request form. Potentially objectionable programs that are submitted without notification will be cancelled, and the producer may lose the privilege of submitting programs for distribution at PCM. Potentially objectionable programs require a warning message prior to the program content (see section 6.09).
 
6.07) A producer must use a warning message as described in Section 6.09 with any project in which is seen uncovered any of the following portions of a live maturely developed human body: the nipple or aureole area of a female breast, the genital area of a male or female or the anal cleavage of a male or female.
 
6.08) A producer must use a warning message as described in Section 6.09 with any project in which is heard a slang, vulgar or colloquial expression which refers, in the context within which it is used, to sexual intercourse, masturbation or anal or oral sexual contact, to human genitals or to human elimination.
 
6.09) The warning message required by Sections 6.07 and 6.08 shall consist of a spoken and an easily readable on-screen message stating: “The following program contains material which may be offensive to some viewers or may be inappropriate for viewing by children.” The written message shall appear on the screen for at least 15 seconds at the beginning of a project. It shall be the responsibility of the producer to assure that this message is included in projects containing material described in section 6.07 or 6.08."><img src=\'/misc/help.png\'>Help</i>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objectionable_content',
    'label' => 'Adult Content',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 4,
        5 => 0,
        7 => 0,
        14 => 0,
        15 => 15,
        16 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_objectionable_content_conf'
  $field_instances['node-cm_show-field_objectionable_content_conf'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your initials to confirm you have complied with section 6.06 of PCM\'s Operating Policies, Rules and Procedures (OPR&P) stating: I have included the required 15-second disclaimer at the beginning of my program.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objectionable_content_conf',
    'label' => 'Your Initials',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 15,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_pbcore_genres'
  $field_instances['node-cm_show-field_pbcore_genres'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pbcore_genres',
    'label' => 'Genres',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_pcm_channels'
  $field_instances['node-cm_show-field_pcm_channels'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Has this program aired on Portland Community Media channels in the past?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pcm_channels',
    'label' => 'Previous Airing',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 4,
        5 => 0,
        7 => 0,
        14 => 0,
        15 => 15,
        16 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_pcm_facilities'
  $field_instances['node-cm_show-field_pcm_facilities'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Were any of PCM\'s facilities or equipment used to produce this program?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pcm_facilities',
    'label' => 'Was this show produced in PCM studios or using PCM equipment?',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 4,
        5 => 0,
        7 => 0,
        14 => 0,
        15 => 15,
        16 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_playback_comments'
  $field_instances['node-cm_show-field_playback_comments'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_playback_comments',
    'label' => 'Playback Comments',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_playback_interval'
  $field_instances['node-cm_show-field_playback_interval'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_playback_interval',
    'label' => 'Day',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_premier_date'
  $field_instances['node-cm_show-field_premier_date'] = array(
    'bundle' => 'cm_show',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'custom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_premier_date',
    'label' => 'Premiere Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_produced_city'
  $field_instances['node-cm_show-field_produced_city'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_produced_city',
    'label' => 'Was it produced within Portland city limits?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_produced_where'
  $field_instances['node-cm_show-field_produced_where'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_produced_where',
    'label' => 'Was this show produced in the Metropolitan Portland area?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_runtime'
  $field_instances['node-cm_show-field_runtime'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm:ss',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm:ss',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm:ss',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_runtime',
    'label' => 'Runtime',
    'required' => 1,
    'settings' => array(
      'default_description' => 1,
      'format' => 'h:mm:ss',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_short_description'
  $field_instances['node-cm_show-field_short_description'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This field will be used for the TV Guide listing of this program, and is limited to 256 characters.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_short_description',
    'label' => 'Short Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_show_airings_view'
  $field_instances['node-cm_show-field_show_airings_view'] = array(
    'bundle' => 'cm_show',
    'default_value' => array(
      0 => array(
        'vname' => 'pcm_show_airings|block_1',
        'vargs' => '[node:nid]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_show_airings_view',
    'label' => 'Scheduled Airings',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(
        '_project_airings_scheduled' => 0,
        'airing_conflict_block' => 0,
        'airing_detail_for_grid' => 0,
        'airing_devices_for_show' => 0,
        'airing_grid_jump_menus' => 0,
        'airing_master_list' => 0,
        'airings' => 0,
        'airings_airing_group' => 0,
        'airings_airings_scheduled' => 0,
        'airings_missing_show_content' => 0,
        'airings_producer_dashboard' => 0,
        'aspera_show_rss_lookup' => 0,
        'cable_schedule' => 0,
        'civicrm_multiday_event_cal' => 0,
        'civicrm_multiday_event_event_type_legend' => 0,
        'civicrm_multiday_event_list' => 0,
        'civicrm_multiday_event_list_by_type' => 0,
        'civicrm_multiday_event_public_calendar' => 0,
        'civicrm_multiday_event_upcoming_events' => 0,
        'clone_of_series_request_pending' => 0,
        'cm_cm_show_airings' => 0,
        'cm_project_shows' => 0,
        'cm_project_unapproved_projects' => 0,
        'content_manage' => 0,
        'field_collection_values' => 0,
        'forms' => 0,
        'legal_terms' => 0,
        'legal_users' => 0,
        'media_default' => 0,
        'my_shows' => 0,
        'og_all_user_group_content' => 0,
        'og_extras_groups' => 0,
        'og_extras_members' => 0,
        'og_extras_nodes' => 0,
        'og_members' => 0,
        'og_members_admin' => 0,
        'og_nodes' => 0,
        'og_user_groups' => 0,
        'om_crew_connect_my_skills' => 0,
        'pbcore_search_terms' => 0,
        'pcm_project_shows' => 0,
        'pcm_show_airings' => 'pcm_show_airings',
        'producer_search' => 0,
        'producer_tools' => 0,
        'project_airings' => 0,
        'project_cancel' => 0,
        'project_export' => 0,
        'project_legacy_renewals' => 0,
        'project_members' => 0,
        'project_picker' => 0,
        'project_producer_dashboard' => 0,
        'projects_active_completion_date_past' => 0,
        'projects_staff_dashboard' => 0,
        'series_request_airings' => 0,
        'series_request_airings_scheduled' => 0,
        'series_request_pending' => 0,
        'series_request_project_settings' => 0,
        'series_request_scheduled_slots' => 0,
        'series_request_scheduling_information' => 0,
        'series_request_search' => 0,
        'series_request_viewfields' => 0,
        'series_requests_approved' => 0,
        'show_admin_displays' => 0,
        'show_report_export' => 0,
        'show_request_daily_airings' => 0,
        'show_request_scheduling_information' => 0,
        'shows' => 0,
        'shows_producer_dashboard' => 0,
        'simple_show_search' => 0,
        'summer_camps' => 0,
        'taxonomy_term' => 0,
        'upcoming_workshops' => 0,
      ),
      'force_default' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_show_is_special'
  $field_instances['node-cm_show-field_show_is_special'] = array(
    'bundle' => 'cm_show',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Does this Show differ from others in your Project. Should it be shown at a different time? Is it live, is it a different duration, etc.?',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_show_is_special',
    'label' => 'Is This a Special?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_show_placeholder_season'
  $field_instances['node-cm_show-field_show_placeholder_season'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_show_placeholder_season',
    'label' => 'Placeholder Season',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_show_scheduling'
  $field_instances['node-cm_show-field_show_scheduling'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_show_scheduling',
    'label' => 'Scheduling',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_show_special_title'
  $field_instances['node-cm_show-field_show_special_title'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_show_special_title',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_special_show_scheduling'
  $field_instances['node-cm_show-field_special_show_scheduling'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please tell us more about your Show and your desires for scheduling. If your Project is a Series, please explain how this Show differs from others in your Project. Is it live? is it a different duration?, etc...',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_special_show_scheduling',
    'label' => 'Special Show Scheduling Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_technical_requirements'
  $field_instances['node-cm_show-field_technical_requirements'] = array(
    'bundle' => 'cm_show',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'My program meets the technical requirements of the Operating Policies, Rules & Procedures, section 6.18) <i title="Technical quality guidelines-

A) File integrity verification. Digital files will undergo a verification process for errors at the time of submission. This verification is automatically performed by the ingest software, and will identify files whose creation is non-standard.

B) Program technical quality. Programs will undergo a verification process to ensure that the program meets basic technical quality standards. Programs will be assessed to ensure that the following technical standards are met (except where there is clear and deliberate artistic intent).

C) A project that has technical errors as described above, where those errors continue for a period of three (3) minutes or more, or where those errors occur repeatedly throughout the program, will not be replayed until the technical errors have been corrected. Programming staff will immediately notify the producer of record by phone when a program has been pulled for poor technical quality. Once the program technical quality errors have been corrected the producer of record may submit the program to complete the pre-scheduled plays, or if those plays have been missed, the program will be re-scheduled.

D) PCM recognizes that some footage has content value that is greater than the video quality. Staff must follow technical standards guidelines fairly. A producer may contact program staff or the designated staff person to discuss best options prior to cablecast to ensure the program schedule is uninterrupted.
"><img src="/misc/help.png">Hover here to read the Technical Requirements</i>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_technical_requirements',
    'label' => 'Technical Requirements have been met.',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 4,
        5 => 0,
        7 => 0,
        14 => 0,
        15 => 15,
        16 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_tv_guide_title'
  $field_instances['node-cm_show-field_tv_guide_title'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tv_guide_title',
    'label' => 'TV Guide Title',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-cm_show-field_where_produced'
  $field_instances['node-cm_show-field_where_produced'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Where was this program produced?',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_where_produced',
    'label' => 'Production Location',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 4,
        5 => 0,
        7 => 0,
        14 => 0,
        15 => 15,
        16 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-cm_show-og_group_ref'
  $field_instances['node-cm_show-og_group_ref'] = array(
    'bundle' => 'cm_show',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'og_ui',
        'settings' => array(),
        'type' => 'og_list_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'og_ui',
        'settings' => array(),
        'type' => 'og_list_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_group_ref',
    'label' => 'Project',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'admin' => array(
            'widget_type' => 'options_select',
          ),
          'default' => array(
            'widget_type' => 'options_select',
          ),
          'status' => TRUE,
        ),
        'prepopulate' => array(
          'action' => 'disable',
          'action_on_edit' => 0,
          'fallback' => 'hide',
          'providers' => array(
            'og_context' => 0,
            'url' => 1,
          ),
          'skip_perm' => 'edit any cm_show content',
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'og',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'taxonomy_term-pbcore_genres-field_cablecast_category_id'
  $field_instances['taxonomy_term-pbcore_genres-field_cablecast_category_id'] = array(
    'bundle' => 'pbcore_genres',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_cablecast_category_id',
    'label' => 'Cablecast Category ID',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'taxonomy_term-pbcore_genres-field_pbcore_custom_name'
  $field_instances['taxonomy_term-pbcore_genres-field_pbcore_custom_name'] = array(
    'bundle' => 'pbcore_genres',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_pbcore_custom_name',
    'label' => 'Custom Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-pbcore_genres-field_term_enable'
  $field_instances['taxonomy_term-pbcore_genres-field_term_enable'] = array(
    'bundle' => 'pbcore_genres',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_term_enable',
    'label' => 'Enable',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A longer description, available to viewers on our website.');
  t('Adult Content');
  t('Cablecast Category ID');
  t('Cablecast Show ID');
  t('Channel');
  t('Custom Name');
  t('Date to stop airing program as "filler".');
  t('Day');
  t('Does this Show differ from others in your Project. Should it be shown at a different time? Is it live, is it a different duration, etc.?');
  t('Duplication Release');
  t('Enable');
  t('Enter your initials to confirm you have complied with section 6.06 of PCM\'s Operating Policies, Rules and Procedures (OPR&P) stating: I have included the required 15-second disclaimer at the beginning of my program.');
  t('Episode Number');
  t('Filler');
  t('Filler End Date');
  t('Filler Start Date');
  t('Genres');
  t('Has this program aired on Portland Community Media channels in the past?');
  t('Has this show been produced at another CAN facility and aired on channel 11?');
  t('I give permission to Portland Community Media to make copies of, or dub clip from this program. <i title="I give permission pursuant to the terms and conditions listed in the Operating Policies, Rules and Procedures.6.16) Except as limited by these Operating Policies, Rules and Procedures, copyright ownership of projects produced with PCM facilities belongs to the producer of the project. PCM will re-distribute and/or duplicate projects only with the signed permission of the producer. PCM reserves the right to use portions of cablecast programming for PCM historical compilations and promotional purposes."><img src="/misc/help.png">Help</i>');
  t('Information about mature or potentially objectionable content can be found in section 6 of the Operating Policies, Rules & Procedures.<i class="beautytips" title="6.06) In order to provide parents and viewers with the tools to decide whether certain programs are appropriate for viewing in their household, PCM follows “safe harbor” scheduling standards similar to those adopted by the FCC.
 
Programming that contains indecency (as identified in section 6.07), profanity (as identified in section 6.08), and/or extreme violence or degradation is considered “potentially objectionable” and will be cablecast during safe harbor hours:

·  11pm – 5am on channels 22 and 23
·  12am – 5am on channel 11
 
The producer of record is required to inform PCM programming staff if his/her project contains potentially objectionable content. Potentially objectionable projects must be identified as such on the distribution request form. Potentially objectionable programs that are submitted without notification will be cancelled, and the producer may lose the privilege of submitting programs for distribution at PCM. Potentially objectionable programs require a warning message prior to the program content (see section 6.09).
 
6.07) A producer must use a warning message as described in Section 6.09 with any project in which is seen uncovered any of the following portions of a live maturely developed human body: the nipple or aureole area of a female breast, the genital area of a male or female or the anal cleavage of a male or female.
 
6.08) A producer must use a warning message as described in Section 6.09 with any project in which is heard a slang, vulgar or colloquial expression which refers, in the context within which it is used, to sexual intercourse, masturbation or anal or oral sexual contact, to human genitals or to human elimination.
 
6.09) The warning message required by Sections 6.07 and 6.08 shall consist of a spoken and an easily readable on-screen message stating: “The following program contains material which may be offensive to some viewers or may be inappropriate for viewing by children.” The written message shall appear on the screen for at least 15 seconds at the beginning of a project. It shall be the responsibility of the producer to assure that this message is included in projects containing material described in section 6.07 or 6.08."><img src=\'/misc/help.png\'>Help</i>');
  t('Is Placeholder?');
  t('Is This a Special?');
  t('Live Source');
  t('May we use your program to fill gaps in our daily schedule? This is In addition to your scheduled plays');
  t('My program meets the technical requirements of the Operating Policies, Rules & Procedures, section 6.18) <i title="Technical quality guidelines-

A) File integrity verification. Digital files will undergo a verification process for errors at the time of submission. This verification is automatically performed by the ingest software, and will identify files whose creation is non-standard.

B) Program technical quality. Programs will undergo a verification process to ensure that the program meets basic technical quality standards. Programs will be assessed to ensure that the following technical standards are met (except where there is clear and deliberate artistic intent).

C) A project that has technical errors as described above, where those errors continue for a period of three (3) minutes or more, or where those errors occur repeatedly throughout the program, will not be replayed until the technical errors have been corrected. Programming staff will immediately notify the producer of record by phone when a program has been pulled for poor technical quality. Once the program technical quality errors have been corrected the producer of record may submit the program to complete the pre-scheduled plays, or if those plays have been missed, the program will be re-scheduled.

D) PCM recognizes that some footage has content value that is greater than the video quality. Staff must follow technical standards guidelines fairly. A producer may contact program staff or the designated staff person to discuss best options prior to cablecast to ensure the program schedule is uninterrupted.
"><img src="/misc/help.png">Hover here to read the Technical Requirements</i>');
  t('Placeholder Season');
  t('Playback Comments');
  t('Please tell us more about your Show and your desires for scheduling. If your Project is a Series, please explain how this Show differs from others in your Project. Is it live? is it a different duration?, etc...');
  t('Premiere Date');
  t('Previous Airing');
  t('Production Location');
  t('Project');
  t('Runtime');
  t('Scheduled Airings');
  t('Scheduling');
  t('Short Description');
  t('Show Narrative');
  t('Special Show Scheduling Notes');
  t('Start Date');
  t('Start Time');
  t('TV Guide Title');
  t('Technical Requirements have been met.');
  t('This field will be used for the TV Guide listing of this program, and is limited to 256 characters.');
  t('This is prepopulated to the next available episode number. If you change it to a lesser number and submit it, you will get an error.');
  t('Time');
  t('Title');
  t('Was it produced within Portland city limits?');
  t('Was this show produced in PCM studios or using PCM equipment?');
  t('Was this show produced in the Metropolitan Portland area?');
  t('Were any of PCM\'s facilities or equipment used to produce this program?');
  t('Where was this program produced?');
  t('Your Initials');

  return $field_instances;
}
