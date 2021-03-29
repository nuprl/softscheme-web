/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/SRFI/srfi/146/rbtree.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_3224( CONT_PARAMS );
static RTYPE compiled_block_1_3223( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_3222( CONT_PARAMS );
static RTYPE compiled_block_1_3220( CONT_PARAMS );
static RTYPE compiled_block_1_3221( CONT_PARAMS );
static RTYPE compiled_block_1_3219( CONT_PARAMS );
static RTYPE compiled_block_1_1807( CONT_PARAMS );
static RTYPE compiled_block_1_1806( CONT_PARAMS );
static RTYPE compiled_block_1_1805( CONT_PARAMS );
static RTYPE compiled_block_1_1804( CONT_PARAMS );
static RTYPE compiled_block_1_1803( CONT_PARAMS );
static RTYPE compiled_block_1_1802( CONT_PARAMS );
static RTYPE compiled_block_1_1801( CONT_PARAMS );
static RTYPE compiled_block_1_3206( CONT_PARAMS );
static RTYPE compiled_block_1_1825( CONT_PARAMS );
static RTYPE compiled_block_1_1817( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_start_1_43( CONT_PARAMS );
static RTYPE compiled_start_1_42( CONT_PARAMS );
static RTYPE compiled_start_1_41( CONT_PARAMS );
static RTYPE compiled_start_1_40( CONT_PARAMS );
static RTYPE compiled_start_1_39( CONT_PARAMS );
static RTYPE compiled_start_1_38( CONT_PARAMS );
static RTYPE compiled_start_1_37( CONT_PARAMS );
static RTYPE compiled_start_1_36( CONT_PARAMS );
static RTYPE compiled_start_1_35( CONT_PARAMS );
static RTYPE compiled_start_1_34( CONT_PARAMS );
static RTYPE compiled_start_1_33( CONT_PARAMS );
static RTYPE compiled_start_1_32( CONT_PARAMS );
static RTYPE compiled_block_1_3203( CONT_PARAMS );
static RTYPE compiled_block_1_3199( CONT_PARAMS );
static RTYPE compiled_block_1_3200( CONT_PARAMS );
static RTYPE compiled_block_1_3201( CONT_PARAMS );
static RTYPE compiled_block_1_3198( CONT_PARAMS );
static RTYPE compiled_block_1_3144( CONT_PARAMS );
static RTYPE compiled_block_1_3145( CONT_PARAMS );
static RTYPE compiled_block_1_3148( CONT_PARAMS );
static RTYPE compiled_block_1_3151( CONT_PARAMS );
static RTYPE compiled_block_1_3154( CONT_PARAMS );
static RTYPE compiled_block_1_3157( CONT_PARAMS );
static RTYPE compiled_block_1_3160( CONT_PARAMS );
static RTYPE compiled_block_1_3163( CONT_PARAMS );
static RTYPE compiled_block_1_3166( CONT_PARAMS );
static RTYPE compiled_block_1_3169( CONT_PARAMS );
static RTYPE compiled_block_1_3172( CONT_PARAMS );
static RTYPE compiled_block_1_3175( CONT_PARAMS );
static RTYPE compiled_block_1_3178( CONT_PARAMS );
static RTYPE compiled_block_1_3181( CONT_PARAMS );
static RTYPE compiled_block_1_3184( CONT_PARAMS );
static RTYPE compiled_block_1_3187( CONT_PARAMS );
static RTYPE compiled_block_1_3190( CONT_PARAMS );
static RTYPE compiled_block_1_3196( CONT_PARAMS );
static RTYPE compiled_block_1_3188( CONT_PARAMS );
static RTYPE compiled_block_1_3185( CONT_PARAMS );
static RTYPE compiled_block_1_3182( CONT_PARAMS );
static RTYPE compiled_block_1_3179( CONT_PARAMS );
static RTYPE compiled_block_1_3176( CONT_PARAMS );
static RTYPE compiled_block_1_3173( CONT_PARAMS );
static RTYPE compiled_block_1_3170( CONT_PARAMS );
static RTYPE compiled_block_1_3167( CONT_PARAMS );
static RTYPE compiled_block_1_3164( CONT_PARAMS );
static RTYPE compiled_block_1_3161( CONT_PARAMS );
static RTYPE compiled_block_1_3158( CONT_PARAMS );
static RTYPE compiled_block_1_3155( CONT_PARAMS );
static RTYPE compiled_block_1_3152( CONT_PARAMS );
static RTYPE compiled_block_1_3149( CONT_PARAMS );
static RTYPE compiled_block_1_3146( CONT_PARAMS );
static RTYPE compiled_block_1_3143( CONT_PARAMS );
static RTYPE compiled_block_1_3142( CONT_PARAMS );
static RTYPE compiled_block_1_3088( CONT_PARAMS );
static RTYPE compiled_block_1_3089( CONT_PARAMS );
static RTYPE compiled_block_1_3092( CONT_PARAMS );
static RTYPE compiled_block_1_3095( CONT_PARAMS );
static RTYPE compiled_block_1_3098( CONT_PARAMS );
static RTYPE compiled_block_1_3101( CONT_PARAMS );
static RTYPE compiled_block_1_3104( CONT_PARAMS );
static RTYPE compiled_block_1_3107( CONT_PARAMS );
static RTYPE compiled_block_1_3110( CONT_PARAMS );
static RTYPE compiled_block_1_3113( CONT_PARAMS );
static RTYPE compiled_block_1_3116( CONT_PARAMS );
static RTYPE compiled_block_1_3119( CONT_PARAMS );
static RTYPE compiled_block_1_3122( CONT_PARAMS );
static RTYPE compiled_block_1_3125( CONT_PARAMS );
static RTYPE compiled_block_1_3128( CONT_PARAMS );
static RTYPE compiled_block_1_3131( CONT_PARAMS );
static RTYPE compiled_block_1_3134( CONT_PARAMS );
static RTYPE compiled_block_1_3140( CONT_PARAMS );
static RTYPE compiled_block_1_3132( CONT_PARAMS );
static RTYPE compiled_block_1_3129( CONT_PARAMS );
static RTYPE compiled_block_1_3126( CONT_PARAMS );
static RTYPE compiled_block_1_3123( CONT_PARAMS );
static RTYPE compiled_block_1_3120( CONT_PARAMS );
static RTYPE compiled_block_1_3117( CONT_PARAMS );
static RTYPE compiled_block_1_3114( CONT_PARAMS );
static RTYPE compiled_block_1_3111( CONT_PARAMS );
static RTYPE compiled_block_1_3108( CONT_PARAMS );
static RTYPE compiled_block_1_3105( CONT_PARAMS );
static RTYPE compiled_block_1_3102( CONT_PARAMS );
static RTYPE compiled_block_1_3099( CONT_PARAMS );
static RTYPE compiled_block_1_3096( CONT_PARAMS );
static RTYPE compiled_block_1_3093( CONT_PARAMS );
static RTYPE compiled_block_1_3090( CONT_PARAMS );
static RTYPE compiled_block_1_3087( CONT_PARAMS );
static RTYPE compiled_block_1_3086( CONT_PARAMS );
static RTYPE compiled_block_1_3048( CONT_PARAMS );
static RTYPE compiled_block_1_3049( CONT_PARAMS );
static RTYPE compiled_block_1_3052( CONT_PARAMS );
static RTYPE compiled_block_1_3055( CONT_PARAMS );
static RTYPE compiled_block_1_3058( CONT_PARAMS );
static RTYPE compiled_block_1_3061( CONT_PARAMS );
static RTYPE compiled_block_1_3064( CONT_PARAMS );
static RTYPE compiled_block_1_3067( CONT_PARAMS );
static RTYPE compiled_block_1_3070( CONT_PARAMS );
static RTYPE compiled_block_1_3073( CONT_PARAMS );
static RTYPE compiled_block_1_3076( CONT_PARAMS );
static RTYPE compiled_block_1_3079( CONT_PARAMS );
static RTYPE compiled_block_1_3084( CONT_PARAMS );
static RTYPE compiled_block_1_3077( CONT_PARAMS );
static RTYPE compiled_block_1_3074( CONT_PARAMS );
static RTYPE compiled_block_1_3071( CONT_PARAMS );
static RTYPE compiled_block_1_3068( CONT_PARAMS );
static RTYPE compiled_block_1_3065( CONT_PARAMS );
static RTYPE compiled_block_1_3062( CONT_PARAMS );
static RTYPE compiled_block_1_3059( CONT_PARAMS );
static RTYPE compiled_block_1_3056( CONT_PARAMS );
static RTYPE compiled_block_1_3053( CONT_PARAMS );
static RTYPE compiled_block_1_3050( CONT_PARAMS );
static RTYPE compiled_block_1_3047( CONT_PARAMS );
static RTYPE compiled_block_1_3046( CONT_PARAMS );
static RTYPE compiled_block_1_3008( CONT_PARAMS );
static RTYPE compiled_block_1_3009( CONT_PARAMS );
static RTYPE compiled_block_1_3012( CONT_PARAMS );
static RTYPE compiled_block_1_3015( CONT_PARAMS );
static RTYPE compiled_block_1_3018( CONT_PARAMS );
static RTYPE compiled_block_1_3021( CONT_PARAMS );
static RTYPE compiled_block_1_3024( CONT_PARAMS );
static RTYPE compiled_block_1_3027( CONT_PARAMS );
static RTYPE compiled_block_1_3030( CONT_PARAMS );
static RTYPE compiled_block_1_3033( CONT_PARAMS );
static RTYPE compiled_block_1_3036( CONT_PARAMS );
static RTYPE compiled_block_1_3039( CONT_PARAMS );
static RTYPE compiled_block_1_3044( CONT_PARAMS );
static RTYPE compiled_block_1_3037( CONT_PARAMS );
static RTYPE compiled_block_1_3034( CONT_PARAMS );
static RTYPE compiled_block_1_3031( CONT_PARAMS );
static RTYPE compiled_block_1_3028( CONT_PARAMS );
static RTYPE compiled_block_1_3025( CONT_PARAMS );
static RTYPE compiled_block_1_3022( CONT_PARAMS );
static RTYPE compiled_block_1_3019( CONT_PARAMS );
static RTYPE compiled_block_1_3016( CONT_PARAMS );
static RTYPE compiled_block_1_3013( CONT_PARAMS );
static RTYPE compiled_block_1_3010( CONT_PARAMS );
static RTYPE compiled_block_1_3007( CONT_PARAMS );
static RTYPE compiled_block_1_3006( CONT_PARAMS );
static RTYPE compiled_block_1_2968( CONT_PARAMS );
static RTYPE compiled_block_1_2969( CONT_PARAMS );
static RTYPE compiled_block_1_2972( CONT_PARAMS );
static RTYPE compiled_block_1_2975( CONT_PARAMS );
static RTYPE compiled_block_1_2978( CONT_PARAMS );
static RTYPE compiled_block_1_2981( CONT_PARAMS );
static RTYPE compiled_block_1_2984( CONT_PARAMS );
static RTYPE compiled_block_1_2987( CONT_PARAMS );
static RTYPE compiled_block_1_2990( CONT_PARAMS );
static RTYPE compiled_block_1_2993( CONT_PARAMS );
static RTYPE compiled_block_1_2996( CONT_PARAMS );
static RTYPE compiled_block_1_2999( CONT_PARAMS );
static RTYPE compiled_block_1_3004( CONT_PARAMS );
static RTYPE compiled_block_1_2997( CONT_PARAMS );
static RTYPE compiled_block_1_2994( CONT_PARAMS );
static RTYPE compiled_block_1_2991( CONT_PARAMS );
static RTYPE compiled_block_1_2988( CONT_PARAMS );
static RTYPE compiled_block_1_2985( CONT_PARAMS );
static RTYPE compiled_block_1_2982( CONT_PARAMS );
static RTYPE compiled_block_1_2979( CONT_PARAMS );
static RTYPE compiled_block_1_2976( CONT_PARAMS );
static RTYPE compiled_block_1_2973( CONT_PARAMS );
static RTYPE compiled_block_1_2970( CONT_PARAMS );
static RTYPE compiled_block_1_2967( CONT_PARAMS );
static RTYPE compiled_block_1_2966( CONT_PARAMS );
static RTYPE compiled_block_1_2928( CONT_PARAMS );
static RTYPE compiled_block_1_2929( CONT_PARAMS );
static RTYPE compiled_block_1_2932( CONT_PARAMS );
static RTYPE compiled_block_1_2935( CONT_PARAMS );
static RTYPE compiled_block_1_2938( CONT_PARAMS );
static RTYPE compiled_block_1_2941( CONT_PARAMS );
static RTYPE compiled_block_1_2944( CONT_PARAMS );
static RTYPE compiled_block_1_2947( CONT_PARAMS );
static RTYPE compiled_block_1_2950( CONT_PARAMS );
static RTYPE compiled_block_1_2953( CONT_PARAMS );
static RTYPE compiled_block_1_2956( CONT_PARAMS );
static RTYPE compiled_block_1_2959( CONT_PARAMS );
static RTYPE compiled_block_1_2964( CONT_PARAMS );
static RTYPE compiled_block_1_2957( CONT_PARAMS );
static RTYPE compiled_block_1_2954( CONT_PARAMS );
static RTYPE compiled_block_1_2951( CONT_PARAMS );
static RTYPE compiled_block_1_2948( CONT_PARAMS );
static RTYPE compiled_block_1_2945( CONT_PARAMS );
static RTYPE compiled_block_1_2942( CONT_PARAMS );
static RTYPE compiled_block_1_2939( CONT_PARAMS );
static RTYPE compiled_block_1_2936( CONT_PARAMS );
static RTYPE compiled_block_1_2933( CONT_PARAMS );
static RTYPE compiled_block_1_2930( CONT_PARAMS );
static RTYPE compiled_block_1_2927( CONT_PARAMS );
static RTYPE compiled_start_1_44( CONT_PARAMS );
static RTYPE compiled_start_1_51( CONT_PARAMS );
static RTYPE compiled_block_1_3194( CONT_PARAMS );
static RTYPE compiled_block_1_3193( CONT_PARAMS );
static RTYPE compiled_block_1_3192( CONT_PARAMS );
static RTYPE compiled_block_1_3191( CONT_PARAMS );
static RTYPE compiled_start_1_50( CONT_PARAMS );
static RTYPE compiled_block_1_3138( CONT_PARAMS );
static RTYPE compiled_block_1_3137( CONT_PARAMS );
static RTYPE compiled_block_1_3136( CONT_PARAMS );
static RTYPE compiled_block_1_3135( CONT_PARAMS );
static RTYPE compiled_start_1_49( CONT_PARAMS );
static RTYPE compiled_block_1_3082( CONT_PARAMS );
static RTYPE compiled_block_1_3081( CONT_PARAMS );
static RTYPE compiled_block_1_3080( CONT_PARAMS );
static RTYPE compiled_start_1_48( CONT_PARAMS );
static RTYPE compiled_block_1_3042( CONT_PARAMS );
static RTYPE compiled_block_1_3041( CONT_PARAMS );
static RTYPE compiled_block_1_3040( CONT_PARAMS );
static RTYPE compiled_start_1_47( CONT_PARAMS );
static RTYPE compiled_block_1_3002( CONT_PARAMS );
static RTYPE compiled_block_1_3001( CONT_PARAMS );
static RTYPE compiled_block_1_3000( CONT_PARAMS );
static RTYPE compiled_start_1_46( CONT_PARAMS );
static RTYPE compiled_block_1_2962( CONT_PARAMS );
static RTYPE compiled_block_1_2961( CONT_PARAMS );
static RTYPE compiled_block_1_2960( CONT_PARAMS );
static RTYPE compiled_start_1_45( CONT_PARAMS );
static RTYPE compiled_start_1_31( CONT_PARAMS );
static RTYPE compiled_block_1_2924( CONT_PARAMS );
static RTYPE compiled_block_1_2920( CONT_PARAMS );
static RTYPE compiled_block_1_2921( CONT_PARAMS );
static RTYPE compiled_block_1_2922( CONT_PARAMS );
static RTYPE compiled_block_1_2919( CONT_PARAMS );
static RTYPE compiled_block_1_2870( CONT_PARAMS );
static RTYPE compiled_block_1_2871( CONT_PARAMS );
static RTYPE compiled_block_1_2874( CONT_PARAMS );
static RTYPE compiled_block_1_2877( CONT_PARAMS );
static RTYPE compiled_block_1_2880( CONT_PARAMS );
static RTYPE compiled_block_1_2883( CONT_PARAMS );
static RTYPE compiled_block_1_2886( CONT_PARAMS );
static RTYPE compiled_block_1_2889( CONT_PARAMS );
static RTYPE compiled_block_1_2892( CONT_PARAMS );
static RTYPE compiled_block_1_2895( CONT_PARAMS );
static RTYPE compiled_block_1_2898( CONT_PARAMS );
static RTYPE compiled_block_1_2901( CONT_PARAMS );
static RTYPE compiled_block_1_2904( CONT_PARAMS );
static RTYPE compiled_block_1_2907( CONT_PARAMS );
static RTYPE compiled_block_1_2910( CONT_PARAMS );
static RTYPE compiled_block_1_2913( CONT_PARAMS );
static RTYPE compiled_block_1_2917( CONT_PARAMS );
static RTYPE compiled_block_1_2911( CONT_PARAMS );
static RTYPE compiled_block_1_2908( CONT_PARAMS );
static RTYPE compiled_block_1_2905( CONT_PARAMS );
static RTYPE compiled_block_1_2902( CONT_PARAMS );
static RTYPE compiled_block_1_2899( CONT_PARAMS );
static RTYPE compiled_block_1_2896( CONT_PARAMS );
static RTYPE compiled_block_1_2893( CONT_PARAMS );
static RTYPE compiled_block_1_2890( CONT_PARAMS );
static RTYPE compiled_block_1_2887( CONT_PARAMS );
static RTYPE compiled_block_1_2884( CONT_PARAMS );
static RTYPE compiled_block_1_2881( CONT_PARAMS );
static RTYPE compiled_block_1_2878( CONT_PARAMS );
static RTYPE compiled_block_1_2875( CONT_PARAMS );
static RTYPE compiled_block_1_2872( CONT_PARAMS );
static RTYPE compiled_block_1_2869( CONT_PARAMS );
static RTYPE compiled_block_1_2868( CONT_PARAMS );
static RTYPE compiled_block_1_2819( CONT_PARAMS );
static RTYPE compiled_block_1_2820( CONT_PARAMS );
static RTYPE compiled_block_1_2823( CONT_PARAMS );
static RTYPE compiled_block_1_2826( CONT_PARAMS );
static RTYPE compiled_block_1_2829( CONT_PARAMS );
static RTYPE compiled_block_1_2832( CONT_PARAMS );
static RTYPE compiled_block_1_2835( CONT_PARAMS );
static RTYPE compiled_block_1_2838( CONT_PARAMS );
static RTYPE compiled_block_1_2841( CONT_PARAMS );
static RTYPE compiled_block_1_2844( CONT_PARAMS );
static RTYPE compiled_block_1_2847( CONT_PARAMS );
static RTYPE compiled_block_1_2850( CONT_PARAMS );
static RTYPE compiled_block_1_2853( CONT_PARAMS );
static RTYPE compiled_block_1_2856( CONT_PARAMS );
static RTYPE compiled_block_1_2859( CONT_PARAMS );
static RTYPE compiled_block_1_2862( CONT_PARAMS );
static RTYPE compiled_block_1_2866( CONT_PARAMS );
static RTYPE compiled_block_1_2860( CONT_PARAMS );
static RTYPE compiled_block_1_2857( CONT_PARAMS );
static RTYPE compiled_block_1_2854( CONT_PARAMS );
static RTYPE compiled_block_1_2851( CONT_PARAMS );
static RTYPE compiled_block_1_2848( CONT_PARAMS );
static RTYPE compiled_block_1_2845( CONT_PARAMS );
static RTYPE compiled_block_1_2842( CONT_PARAMS );
static RTYPE compiled_block_1_2839( CONT_PARAMS );
static RTYPE compiled_block_1_2836( CONT_PARAMS );
static RTYPE compiled_block_1_2833( CONT_PARAMS );
static RTYPE compiled_block_1_2830( CONT_PARAMS );
static RTYPE compiled_block_1_2827( CONT_PARAMS );
static RTYPE compiled_block_1_2824( CONT_PARAMS );
static RTYPE compiled_block_1_2821( CONT_PARAMS );
static RTYPE compiled_block_1_2818( CONT_PARAMS );
static RTYPE compiled_block_1_2817( CONT_PARAMS );
static RTYPE compiled_block_1_2768( CONT_PARAMS );
static RTYPE compiled_block_1_2769( CONT_PARAMS );
static RTYPE compiled_block_1_2772( CONT_PARAMS );
static RTYPE compiled_block_1_2775( CONT_PARAMS );
static RTYPE compiled_block_1_2778( CONT_PARAMS );
static RTYPE compiled_block_1_2781( CONT_PARAMS );
static RTYPE compiled_block_1_2784( CONT_PARAMS );
static RTYPE compiled_block_1_2787( CONT_PARAMS );
static RTYPE compiled_block_1_2790( CONT_PARAMS );
static RTYPE compiled_block_1_2793( CONT_PARAMS );
static RTYPE compiled_block_1_2796( CONT_PARAMS );
static RTYPE compiled_block_1_2799( CONT_PARAMS );
static RTYPE compiled_block_1_2802( CONT_PARAMS );
static RTYPE compiled_block_1_2805( CONT_PARAMS );
static RTYPE compiled_block_1_2808( CONT_PARAMS );
static RTYPE compiled_block_1_2811( CONT_PARAMS );
static RTYPE compiled_block_1_2815( CONT_PARAMS );
static RTYPE compiled_block_1_2809( CONT_PARAMS );
static RTYPE compiled_block_1_2806( CONT_PARAMS );
static RTYPE compiled_block_1_2803( CONT_PARAMS );
static RTYPE compiled_block_1_2800( CONT_PARAMS );
static RTYPE compiled_block_1_2797( CONT_PARAMS );
static RTYPE compiled_block_1_2794( CONT_PARAMS );
static RTYPE compiled_block_1_2791( CONT_PARAMS );
static RTYPE compiled_block_1_2788( CONT_PARAMS );
static RTYPE compiled_block_1_2785( CONT_PARAMS );
static RTYPE compiled_block_1_2782( CONT_PARAMS );
static RTYPE compiled_block_1_2779( CONT_PARAMS );
static RTYPE compiled_block_1_2776( CONT_PARAMS );
static RTYPE compiled_block_1_2773( CONT_PARAMS );
static RTYPE compiled_block_1_2770( CONT_PARAMS );
static RTYPE compiled_block_1_2767( CONT_PARAMS );
static RTYPE compiled_block_1_2766( CONT_PARAMS );
static RTYPE compiled_block_1_2717( CONT_PARAMS );
static RTYPE compiled_block_1_2718( CONT_PARAMS );
static RTYPE compiled_block_1_2721( CONT_PARAMS );
static RTYPE compiled_block_1_2724( CONT_PARAMS );
static RTYPE compiled_block_1_2727( CONT_PARAMS );
static RTYPE compiled_block_1_2730( CONT_PARAMS );
static RTYPE compiled_block_1_2733( CONT_PARAMS );
static RTYPE compiled_block_1_2736( CONT_PARAMS );
static RTYPE compiled_block_1_2739( CONT_PARAMS );
static RTYPE compiled_block_1_2742( CONT_PARAMS );
static RTYPE compiled_block_1_2745( CONT_PARAMS );
static RTYPE compiled_block_1_2748( CONT_PARAMS );
static RTYPE compiled_block_1_2751( CONT_PARAMS );
static RTYPE compiled_block_1_2754( CONT_PARAMS );
static RTYPE compiled_block_1_2757( CONT_PARAMS );
static RTYPE compiled_block_1_2760( CONT_PARAMS );
static RTYPE compiled_block_1_2764( CONT_PARAMS );
static RTYPE compiled_block_1_2758( CONT_PARAMS );
static RTYPE compiled_block_1_2755( CONT_PARAMS );
static RTYPE compiled_block_1_2752( CONT_PARAMS );
static RTYPE compiled_block_1_2749( CONT_PARAMS );
static RTYPE compiled_block_1_2746( CONT_PARAMS );
static RTYPE compiled_block_1_2743( CONT_PARAMS );
static RTYPE compiled_block_1_2740( CONT_PARAMS );
static RTYPE compiled_block_1_2737( CONT_PARAMS );
static RTYPE compiled_block_1_2734( CONT_PARAMS );
static RTYPE compiled_block_1_2731( CONT_PARAMS );
static RTYPE compiled_block_1_2728( CONT_PARAMS );
static RTYPE compiled_block_1_2725( CONT_PARAMS );
static RTYPE compiled_block_1_2722( CONT_PARAMS );
static RTYPE compiled_block_1_2719( CONT_PARAMS );
static RTYPE compiled_block_1_2716( CONT_PARAMS );
static RTYPE compiled_block_1_2715( CONT_PARAMS );
static RTYPE compiled_block_1_2666( CONT_PARAMS );
static RTYPE compiled_block_1_2667( CONT_PARAMS );
static RTYPE compiled_block_1_2670( CONT_PARAMS );
static RTYPE compiled_block_1_2673( CONT_PARAMS );
static RTYPE compiled_block_1_2676( CONT_PARAMS );
static RTYPE compiled_block_1_2679( CONT_PARAMS );
static RTYPE compiled_block_1_2682( CONT_PARAMS );
static RTYPE compiled_block_1_2685( CONT_PARAMS );
static RTYPE compiled_block_1_2688( CONT_PARAMS );
static RTYPE compiled_block_1_2691( CONT_PARAMS );
static RTYPE compiled_block_1_2694( CONT_PARAMS );
static RTYPE compiled_block_1_2697( CONT_PARAMS );
static RTYPE compiled_block_1_2700( CONT_PARAMS );
static RTYPE compiled_block_1_2703( CONT_PARAMS );
static RTYPE compiled_block_1_2706( CONT_PARAMS );
static RTYPE compiled_block_1_2709( CONT_PARAMS );
static RTYPE compiled_block_1_2713( CONT_PARAMS );
static RTYPE compiled_block_1_2707( CONT_PARAMS );
static RTYPE compiled_block_1_2704( CONT_PARAMS );
static RTYPE compiled_block_1_2701( CONT_PARAMS );
static RTYPE compiled_block_1_2698( CONT_PARAMS );
static RTYPE compiled_block_1_2695( CONT_PARAMS );
static RTYPE compiled_block_1_2692( CONT_PARAMS );
static RTYPE compiled_block_1_2689( CONT_PARAMS );
static RTYPE compiled_block_1_2686( CONT_PARAMS );
static RTYPE compiled_block_1_2683( CONT_PARAMS );
static RTYPE compiled_block_1_2680( CONT_PARAMS );
static RTYPE compiled_block_1_2677( CONT_PARAMS );
static RTYPE compiled_block_1_2674( CONT_PARAMS );
static RTYPE compiled_block_1_2671( CONT_PARAMS );
static RTYPE compiled_block_1_2668( CONT_PARAMS );
static RTYPE compiled_block_1_2665( CONT_PARAMS );
static RTYPE compiled_block_1_2664( CONT_PARAMS );
static RTYPE compiled_block_1_2615( CONT_PARAMS );
static RTYPE compiled_block_1_2616( CONT_PARAMS );
static RTYPE compiled_block_1_2619( CONT_PARAMS );
static RTYPE compiled_block_1_2622( CONT_PARAMS );
static RTYPE compiled_block_1_2625( CONT_PARAMS );
static RTYPE compiled_block_1_2628( CONT_PARAMS );
static RTYPE compiled_block_1_2631( CONT_PARAMS );
static RTYPE compiled_block_1_2634( CONT_PARAMS );
static RTYPE compiled_block_1_2637( CONT_PARAMS );
static RTYPE compiled_block_1_2640( CONT_PARAMS );
static RTYPE compiled_block_1_2643( CONT_PARAMS );
static RTYPE compiled_block_1_2646( CONT_PARAMS );
static RTYPE compiled_block_1_2649( CONT_PARAMS );
static RTYPE compiled_block_1_2652( CONT_PARAMS );
static RTYPE compiled_block_1_2655( CONT_PARAMS );
static RTYPE compiled_block_1_2658( CONT_PARAMS );
static RTYPE compiled_block_1_2662( CONT_PARAMS );
static RTYPE compiled_block_1_2656( CONT_PARAMS );
static RTYPE compiled_block_1_2653( CONT_PARAMS );
static RTYPE compiled_block_1_2650( CONT_PARAMS );
static RTYPE compiled_block_1_2647( CONT_PARAMS );
static RTYPE compiled_block_1_2644( CONT_PARAMS );
static RTYPE compiled_block_1_2641( CONT_PARAMS );
static RTYPE compiled_block_1_2638( CONT_PARAMS );
static RTYPE compiled_block_1_2635( CONT_PARAMS );
static RTYPE compiled_block_1_2632( CONT_PARAMS );
static RTYPE compiled_block_1_2629( CONT_PARAMS );
static RTYPE compiled_block_1_2626( CONT_PARAMS );
static RTYPE compiled_block_1_2623( CONT_PARAMS );
static RTYPE compiled_block_1_2620( CONT_PARAMS );
static RTYPE compiled_block_1_2617( CONT_PARAMS );
static RTYPE compiled_block_1_2614( CONT_PARAMS );
static RTYPE compiled_start_1_52( CONT_PARAMS );
static RTYPE compiled_start_1_59( CONT_PARAMS );
static RTYPE compiled_block_1_2915( CONT_PARAMS );
static RTYPE compiled_block_1_2914( CONT_PARAMS );
static RTYPE compiled_start_1_58( CONT_PARAMS );
static RTYPE compiled_block_1_2864( CONT_PARAMS );
static RTYPE compiled_block_1_2863( CONT_PARAMS );
static RTYPE compiled_start_1_57( CONT_PARAMS );
static RTYPE compiled_block_1_2813( CONT_PARAMS );
static RTYPE compiled_block_1_2812( CONT_PARAMS );
static RTYPE compiled_start_1_56( CONT_PARAMS );
static RTYPE compiled_block_1_2762( CONT_PARAMS );
static RTYPE compiled_block_1_2761( CONT_PARAMS );
static RTYPE compiled_start_1_55( CONT_PARAMS );
static RTYPE compiled_block_1_2711( CONT_PARAMS );
static RTYPE compiled_block_1_2710( CONT_PARAMS );
static RTYPE compiled_start_1_54( CONT_PARAMS );
static RTYPE compiled_block_1_2660( CONT_PARAMS );
static RTYPE compiled_block_1_2659( CONT_PARAMS );
static RTYPE compiled_start_1_53( CONT_PARAMS );
static RTYPE compiled_start_1_30( CONT_PARAMS );
static RTYPE compiled_block_1_2611( CONT_PARAMS );
static RTYPE compiled_block_1_2590( CONT_PARAMS );
static RTYPE compiled_block_1_2591( CONT_PARAMS );
static RTYPE compiled_block_1_2594( CONT_PARAMS );
static RTYPE compiled_block_1_2597( CONT_PARAMS );
static RTYPE compiled_block_1_2600( CONT_PARAMS );
static RTYPE compiled_block_1_2603( CONT_PARAMS );
static RTYPE compiled_block_1_2609( CONT_PARAMS );
static RTYPE compiled_block_1_2601( CONT_PARAMS );
static RTYPE compiled_block_1_2598( CONT_PARAMS );
static RTYPE compiled_block_1_2595( CONT_PARAMS );
static RTYPE compiled_block_1_2592( CONT_PARAMS );
static RTYPE compiled_block_1_2589( CONT_PARAMS );
static RTYPE compiled_block_1_2588( CONT_PARAMS );
static RTYPE compiled_block_1_2549( CONT_PARAMS );
static RTYPE compiled_block_1_2550( CONT_PARAMS );
static RTYPE compiled_block_1_2553( CONT_PARAMS );
static RTYPE compiled_block_1_2556( CONT_PARAMS );
static RTYPE compiled_block_1_2559( CONT_PARAMS );
static RTYPE compiled_block_1_2562( CONT_PARAMS );
static RTYPE compiled_block_1_2565( CONT_PARAMS );
static RTYPE compiled_block_1_2571( CONT_PARAMS );
static RTYPE compiled_block_1_2574( CONT_PARAMS );
static RTYPE compiled_block_1_2577( CONT_PARAMS );
static RTYPE compiled_block_1_2580( CONT_PARAMS );
static RTYPE compiled_block_1_2583( CONT_PARAMS );
static RTYPE compiled_block_1_2586( CONT_PARAMS );
static RTYPE compiled_block_1_2581( CONT_PARAMS );
static RTYPE compiled_block_1_2578( CONT_PARAMS );
static RTYPE compiled_block_1_2575( CONT_PARAMS );
static RTYPE compiled_block_1_2572( CONT_PARAMS );
static RTYPE compiled_block_1_2569( CONT_PARAMS );
static RTYPE compiled_block_1_2568( CONT_PARAMS );
static RTYPE compiled_block_1_2566( CONT_PARAMS );
static RTYPE compiled_block_1_2563( CONT_PARAMS );
static RTYPE compiled_block_1_2560( CONT_PARAMS );
static RTYPE compiled_block_1_2557( CONT_PARAMS );
static RTYPE compiled_block_1_2554( CONT_PARAMS );
static RTYPE compiled_block_1_2551( CONT_PARAMS );
static RTYPE compiled_block_1_2548( CONT_PARAMS );
static RTYPE compiled_block_1_2547( CONT_PARAMS );
static RTYPE compiled_block_1_2517( CONT_PARAMS );
static RTYPE compiled_block_1_2518( CONT_PARAMS );
static RTYPE compiled_block_1_2521( CONT_PARAMS );
static RTYPE compiled_block_1_2524( CONT_PARAMS );
static RTYPE compiled_block_1_2527( CONT_PARAMS );
static RTYPE compiled_block_1_2530( CONT_PARAMS );
static RTYPE compiled_block_1_2533( CONT_PARAMS );
static RTYPE compiled_block_1_2539( CONT_PARAMS );
static RTYPE compiled_block_1_2545( CONT_PARAMS );
static RTYPE compiled_block_1_2542( CONT_PARAMS );
static RTYPE compiled_block_1_2540( CONT_PARAMS );
static RTYPE compiled_block_1_2537( CONT_PARAMS );
static RTYPE compiled_block_1_2536( CONT_PARAMS );
static RTYPE compiled_block_1_2534( CONT_PARAMS );
static RTYPE compiled_block_1_2531( CONT_PARAMS );
static RTYPE compiled_block_1_2528( CONT_PARAMS );
static RTYPE compiled_block_1_2525( CONT_PARAMS );
static RTYPE compiled_block_1_2522( CONT_PARAMS );
static RTYPE compiled_block_1_2519( CONT_PARAMS );
static RTYPE compiled_block_1_2516( CONT_PARAMS );
static RTYPE compiled_block_1_2515( CONT_PARAMS );
static RTYPE compiled_block_1_2485( CONT_PARAMS );
static RTYPE compiled_block_1_2486( CONT_PARAMS );
static RTYPE compiled_block_1_2489( CONT_PARAMS );
static RTYPE compiled_block_1_2492( CONT_PARAMS );
static RTYPE compiled_block_1_2495( CONT_PARAMS );
static RTYPE compiled_block_1_2498( CONT_PARAMS );
static RTYPE compiled_block_1_2501( CONT_PARAMS );
static RTYPE compiled_block_1_2507( CONT_PARAMS );
static RTYPE compiled_block_1_2513( CONT_PARAMS );
static RTYPE compiled_block_1_2510( CONT_PARAMS );
static RTYPE compiled_block_1_2508( CONT_PARAMS );
static RTYPE compiled_block_1_2505( CONT_PARAMS );
static RTYPE compiled_block_1_2504( CONT_PARAMS );
static RTYPE compiled_block_1_2502( CONT_PARAMS );
static RTYPE compiled_block_1_2499( CONT_PARAMS );
static RTYPE compiled_block_1_2496( CONT_PARAMS );
static RTYPE compiled_block_1_2493( CONT_PARAMS );
static RTYPE compiled_block_1_2490( CONT_PARAMS );
static RTYPE compiled_block_1_2487( CONT_PARAMS );
static RTYPE compiled_block_1_2484( CONT_PARAMS );
static RTYPE compiled_start_1_60( CONT_PARAMS );
static RTYPE compiled_start_1_64( CONT_PARAMS );
static RTYPE compiled_block_1_2606( CONT_PARAMS );
static RTYPE compiled_block_1_2605( CONT_PARAMS );
static RTYPE compiled_start_1_66( CONT_PARAMS );
static RTYPE compiled_start_1_65( CONT_PARAMS );
static RTYPE compiled_block_1_2584( CONT_PARAMS );
static RTYPE compiled_start_1_63( CONT_PARAMS );
static RTYPE compiled_block_1_2543( CONT_PARAMS );
static RTYPE compiled_start_1_62( CONT_PARAMS );
static RTYPE compiled_block_1_2511( CONT_PARAMS );
static RTYPE compiled_start_1_61( CONT_PARAMS );
static RTYPE compiled_block_1_2482( CONT_PARAMS );
static RTYPE compiled_temp_1_68( CONT_PARAMS );
static RTYPE compiled_block_1_2480( CONT_PARAMS );
static RTYPE compiled_temp_1_67( CONT_PARAMS );
static RTYPE compiled_block_1_2476( CONT_PARAMS );
static RTYPE compiled_start_1_29( CONT_PARAMS );
static RTYPE compiled_block_1_2474( CONT_PARAMS );
static RTYPE compiled_temp_1_70( CONT_PARAMS );
static RTYPE compiled_block_1_2472( CONT_PARAMS );
static RTYPE compiled_temp_1_69( CONT_PARAMS );
static RTYPE compiled_block_1_2468( CONT_PARAMS );
static RTYPE compiled_start_1_28( CONT_PARAMS );
static RTYPE compiled_block_1_2416( CONT_PARAMS );
static RTYPE compiled_start_1_27( CONT_PARAMS );
static RTYPE compiled_block_1_2465( CONT_PARAMS );
static RTYPE compiled_block_1_2448( CONT_PARAMS );
static RTYPE compiled_block_1_2449( CONT_PARAMS );
static RTYPE compiled_block_1_2452( CONT_PARAMS );
static RTYPE compiled_block_1_2455( CONT_PARAMS );
static RTYPE compiled_block_1_2458( CONT_PARAMS );
static RTYPE compiled_block_1_2461( CONT_PARAMS );
static RTYPE compiled_block_1_2463( CONT_PARAMS );
static RTYPE compiled_block_1_2459( CONT_PARAMS );
static RTYPE compiled_block_1_2456( CONT_PARAMS );
static RTYPE compiled_block_1_2453( CONT_PARAMS );
static RTYPE compiled_block_1_2450( CONT_PARAMS );
static RTYPE compiled_block_1_2447( CONT_PARAMS );
static RTYPE compiled_block_1_2446( CONT_PARAMS );
static RTYPE compiled_block_1_2429( CONT_PARAMS );
static RTYPE compiled_block_1_2430( CONT_PARAMS );
static RTYPE compiled_block_1_2433( CONT_PARAMS );
static RTYPE compiled_block_1_2436( CONT_PARAMS );
static RTYPE compiled_block_1_2439( CONT_PARAMS );
static RTYPE compiled_block_1_2442( CONT_PARAMS );
static RTYPE compiled_block_1_2444( CONT_PARAMS );
static RTYPE compiled_block_1_2440( CONT_PARAMS );
static RTYPE compiled_block_1_2437( CONT_PARAMS );
static RTYPE compiled_block_1_2434( CONT_PARAMS );
static RTYPE compiled_block_1_2431( CONT_PARAMS );
static RTYPE compiled_block_1_2428( CONT_PARAMS );
static RTYPE compiled_block_1_2427( CONT_PARAMS );
static RTYPE compiled_block_1_2420( CONT_PARAMS );
static RTYPE compiled_block_1_2421( CONT_PARAMS );
static RTYPE compiled_block_1_2425( CONT_PARAMS );
static RTYPE compiled_block_1_2424( CONT_PARAMS );
static RTYPE compiled_block_1_2422( CONT_PARAMS );
static RTYPE compiled_block_1_2419( CONT_PARAMS );
static RTYPE compiled_start_1_71( CONT_PARAMS );
static RTYPE compiled_temp_1_75( CONT_PARAMS );
static RTYPE compiled_block_1_2462( CONT_PARAMS );
static RTYPE compiled_start_1_74( CONT_PARAMS );
static RTYPE compiled_start_1_73( CONT_PARAMS );
static RTYPE compiled_start_1_72( CONT_PARAMS );
static RTYPE compiled_block_1_2412( CONT_PARAMS );
static RTYPE compiled_block_1_2414( CONT_PARAMS );
static RTYPE compiled_block_1_2413( CONT_PARAMS );
static RTYPE compiled_start_1_26( CONT_PARAMS );
static RTYPE compiled_block_1_2407( CONT_PARAMS );
static RTYPE compiled_block_1_2409( CONT_PARAMS );
static RTYPE compiled_block_1_2408( CONT_PARAMS );
static RTYPE compiled_start_1_25( CONT_PARAMS );
static RTYPE compiled_block_1_2338( CONT_PARAMS );
static RTYPE compiled_block_1_2341( CONT_PARAMS );
static RTYPE compiled_block_1_2340( CONT_PARAMS );
static RTYPE compiled_start_1_24( CONT_PARAMS );
static RTYPE compiled_block_1_2403( CONT_PARAMS );
static RTYPE compiled_block_1_2359( CONT_PARAMS );
static RTYPE compiled_block_1_2360( CONT_PARAMS );
static RTYPE compiled_block_1_2363( CONT_PARAMS );
static RTYPE compiled_block_1_2366( CONT_PARAMS );
static RTYPE compiled_block_1_2369( CONT_PARAMS );
static RTYPE compiled_block_1_2372( CONT_PARAMS );
static RTYPE compiled_block_1_2401( CONT_PARAMS );
static RTYPE compiled_block_1_2370( CONT_PARAMS );
static RTYPE compiled_block_1_2367( CONT_PARAMS );
static RTYPE compiled_block_1_2364( CONT_PARAMS );
static RTYPE compiled_block_1_2361( CONT_PARAMS );
static RTYPE compiled_block_1_2358( CONT_PARAMS );
static RTYPE compiled_block_1_2357( CONT_PARAMS );
static RTYPE compiled_block_1_2344( CONT_PARAMS );
static RTYPE compiled_block_1_2345( CONT_PARAMS );
static RTYPE compiled_block_1_2355( CONT_PARAMS );
static RTYPE compiled_block_1_2348( CONT_PARAMS );
static RTYPE compiled_block_1_2346( CONT_PARAMS );
static RTYPE compiled_block_1_2343( CONT_PARAMS );
static RTYPE compiled_start_1_76( CONT_PARAMS );
static RTYPE compiled_block_1_2399( CONT_PARAMS );
static RTYPE compiled_block_1_2398( CONT_PARAMS );
static RTYPE compiled_block_1_2397( CONT_PARAMS );
static RTYPE compiled_block_1_2392( CONT_PARAMS );
static RTYPE compiled_block_1_2395( CONT_PARAMS );
static RTYPE compiled_block_1_2394( CONT_PARAMS );
static RTYPE compiled_block_1_2393( CONT_PARAMS );
static RTYPE compiled_block_1_2390( CONT_PARAMS );
static RTYPE compiled_block_1_2389( CONT_PARAMS );
static RTYPE compiled_block_1_2376( CONT_PARAMS );
static RTYPE compiled_block_1_2387( CONT_PARAMS );
static RTYPE compiled_block_1_2386( CONT_PARAMS );
static RTYPE compiled_block_1_2385( CONT_PARAMS );
static RTYPE compiled_block_1_2384( CONT_PARAMS );
static RTYPE compiled_block_1_2383( CONT_PARAMS );
static RTYPE compiled_block_1_2382( CONT_PARAMS );
static RTYPE compiled_block_1_2381( CONT_PARAMS );
static RTYPE compiled_block_1_2380( CONT_PARAMS );
static RTYPE compiled_block_1_2379( CONT_PARAMS );
static RTYPE compiled_block_1_2378( CONT_PARAMS );
static RTYPE compiled_block_1_2377( CONT_PARAMS );
static RTYPE compiled_block_1_2374( CONT_PARAMS );
static RTYPE compiled_block_1_2373( CONT_PARAMS );
static RTYPE compiled_start_1_78( CONT_PARAMS );
static RTYPE compiled_block_1_2353( CONT_PARAMS );
static RTYPE compiled_block_1_2352( CONT_PARAMS );
static RTYPE compiled_block_1_2351( CONT_PARAMS );
static RTYPE compiled_block_1_2350( CONT_PARAMS );
static RTYPE compiled_block_1_2349( CONT_PARAMS );
static RTYPE compiled_start_1_77( CONT_PARAMS );
static RTYPE compiled_block_1_2336( CONT_PARAMS );
static RTYPE compiled_block_1_2335( CONT_PARAMS );
static RTYPE compiled_block_1_2334( CONT_PARAMS );
static RTYPE compiled_block_1_2333( CONT_PARAMS );
static RTYPE compiled_block_1_2332( CONT_PARAMS );
static RTYPE compiled_temp_1_86( CONT_PARAMS );
static RTYPE compiled_block_1_2331( CONT_PARAMS );
static RTYPE compiled_block_1_2328( CONT_PARAMS );
static RTYPE compiled_block_1_2329( CONT_PARAMS );
static RTYPE compiled_temp_1_85( CONT_PARAMS );
static RTYPE compiled_block_1_2303( CONT_PARAMS );
static RTYPE compiled_block_1_2325( CONT_PARAMS );
static RTYPE compiled_block_1_2324( CONT_PARAMS );
static RTYPE compiled_block_1_2323( CONT_PARAMS );
static RTYPE compiled_temp_1_84( CONT_PARAMS );
static RTYPE compiled_block_1_2322( CONT_PARAMS );
static RTYPE compiled_block_1_2321( CONT_PARAMS );
static RTYPE compiled_block_1_2320( CONT_PARAMS );
static RTYPE compiled_block_1_2317( CONT_PARAMS );
static RTYPE compiled_block_1_2318( CONT_PARAMS );
static RTYPE compiled_temp_1_83( CONT_PARAMS );
static RTYPE compiled_block_1_2302( CONT_PARAMS );
static RTYPE compiled_block_1_2314( CONT_PARAMS );
static RTYPE compiled_temp_1_82( CONT_PARAMS );
static RTYPE compiled_block_1_2311( CONT_PARAMS );
static RTYPE compiled_block_1_2312( CONT_PARAMS );
static RTYPE compiled_temp_1_81( CONT_PARAMS );
static RTYPE compiled_temp_1_80( CONT_PARAMS );
static RTYPE compiled_block_1_2308( CONT_PARAMS );
static RTYPE compiled_temp_1_79( CONT_PARAMS );
static RTYPE compiled_block_1_2306( CONT_PARAMS );
static RTYPE compiled_block_1_2305( CONT_PARAMS );
static RTYPE compiled_start_1_23( CONT_PARAMS );
static RTYPE compiled_block_1_2262( CONT_PARAMS );
static RTYPE compiled_start_1_22( CONT_PARAMS );
static RTYPE compiled_block_1_2299( CONT_PARAMS );
static RTYPE compiled_block_1_2276( CONT_PARAMS );
static RTYPE compiled_block_1_2277( CONT_PARAMS );
static RTYPE compiled_block_1_2280( CONT_PARAMS );
static RTYPE compiled_block_1_2283( CONT_PARAMS );
static RTYPE compiled_block_1_2286( CONT_PARAMS );
static RTYPE compiled_block_1_2289( CONT_PARAMS );
static RTYPE compiled_block_1_2297( CONT_PARAMS );
static RTYPE compiled_block_1_2287( CONT_PARAMS );
static RTYPE compiled_block_1_2284( CONT_PARAMS );
static RTYPE compiled_block_1_2281( CONT_PARAMS );
static RTYPE compiled_block_1_2278( CONT_PARAMS );
static RTYPE compiled_block_1_2275( CONT_PARAMS );
static RTYPE compiled_block_1_2274( CONT_PARAMS );
static RTYPE compiled_block_1_2266( CONT_PARAMS );
static RTYPE compiled_block_1_2267( CONT_PARAMS );
static RTYPE compiled_block_1_2272( CONT_PARAMS );
static RTYPE compiled_block_1_2270( CONT_PARAMS );
static RTYPE compiled_block_1_2268( CONT_PARAMS );
static RTYPE compiled_block_1_2265( CONT_PARAMS );
static RTYPE compiled_start_1_87( CONT_PARAMS );
static RTYPE compiled_start_1_89( CONT_PARAMS );
static RTYPE compiled_block_1_2294( CONT_PARAMS );
static RTYPE compiled_block_1_2293( CONT_PARAMS );
static RTYPE compiled_start_1_91( CONT_PARAMS );
static RTYPE compiled_block_1_2291( CONT_PARAMS );
static RTYPE compiled_block_1_2290( CONT_PARAMS );
static RTYPE compiled_start_1_90( CONT_PARAMS );
static RTYPE compiled_start_1_88( CONT_PARAMS );
static RTYPE compiled_block_1_2219( CONT_PARAMS );
static RTYPE compiled_start_1_21( CONT_PARAMS );
static RTYPE compiled_block_1_2259( CONT_PARAMS );
static RTYPE compiled_block_1_2233( CONT_PARAMS );
static RTYPE compiled_block_1_2234( CONT_PARAMS );
static RTYPE compiled_block_1_2237( CONT_PARAMS );
static RTYPE compiled_block_1_2240( CONT_PARAMS );
static RTYPE compiled_block_1_2243( CONT_PARAMS );
static RTYPE compiled_block_1_2246( CONT_PARAMS );
static RTYPE compiled_block_1_2257( CONT_PARAMS );
static RTYPE compiled_block_1_2244( CONT_PARAMS );
static RTYPE compiled_block_1_2241( CONT_PARAMS );
static RTYPE compiled_block_1_2238( CONT_PARAMS );
static RTYPE compiled_block_1_2235( CONT_PARAMS );
static RTYPE compiled_block_1_2232( CONT_PARAMS );
static RTYPE compiled_block_1_2231( CONT_PARAMS );
static RTYPE compiled_block_1_2223( CONT_PARAMS );
static RTYPE compiled_block_1_2224( CONT_PARAMS );
static RTYPE compiled_block_1_2229( CONT_PARAMS );
static RTYPE compiled_block_1_2227( CONT_PARAMS );
static RTYPE compiled_block_1_2225( CONT_PARAMS );
static RTYPE compiled_block_1_2222( CONT_PARAMS );
static RTYPE compiled_start_1_92( CONT_PARAMS );
static RTYPE compiled_block_1_2254( CONT_PARAMS );
static RTYPE compiled_block_1_2252( CONT_PARAMS );
static RTYPE compiled_block_1_2250( CONT_PARAMS );
static RTYPE compiled_block_1_2248( CONT_PARAMS );
static RTYPE compiled_block_1_2247( CONT_PARAMS );
static RTYPE compiled_start_1_94( CONT_PARAMS );
static RTYPE compiled_start_1_95( CONT_PARAMS );
static RTYPE compiled_start_1_93( CONT_PARAMS );
static RTYPE compiled_block_1_2176( CONT_PARAMS );
static RTYPE compiled_start_1_20( CONT_PARAMS );
static RTYPE compiled_block_1_2216( CONT_PARAMS );
static RTYPE compiled_block_1_2190( CONT_PARAMS );
static RTYPE compiled_block_1_2191( CONT_PARAMS );
static RTYPE compiled_block_1_2194( CONT_PARAMS );
static RTYPE compiled_block_1_2197( CONT_PARAMS );
static RTYPE compiled_block_1_2200( CONT_PARAMS );
static RTYPE compiled_block_1_2203( CONT_PARAMS );
static RTYPE compiled_block_1_2214( CONT_PARAMS );
static RTYPE compiled_block_1_2201( CONT_PARAMS );
static RTYPE compiled_block_1_2198( CONT_PARAMS );
static RTYPE compiled_block_1_2195( CONT_PARAMS );
static RTYPE compiled_block_1_2192( CONT_PARAMS );
static RTYPE compiled_block_1_2189( CONT_PARAMS );
static RTYPE compiled_block_1_2188( CONT_PARAMS );
static RTYPE compiled_block_1_2180( CONT_PARAMS );
static RTYPE compiled_block_1_2181( CONT_PARAMS );
static RTYPE compiled_block_1_2186( CONT_PARAMS );
static RTYPE compiled_block_1_2184( CONT_PARAMS );
static RTYPE compiled_block_1_2182( CONT_PARAMS );
static RTYPE compiled_block_1_2179( CONT_PARAMS );
static RTYPE compiled_start_1_96( CONT_PARAMS );
static RTYPE compiled_block_1_2211( CONT_PARAMS );
static RTYPE compiled_block_1_2209( CONT_PARAMS );
static RTYPE compiled_block_1_2207( CONT_PARAMS );
static RTYPE compiled_block_1_2205( CONT_PARAMS );
static RTYPE compiled_block_1_2204( CONT_PARAMS );
static RTYPE compiled_start_1_98( CONT_PARAMS );
static RTYPE compiled_start_1_99( CONT_PARAMS );
static RTYPE compiled_start_1_97( CONT_PARAMS );
static RTYPE compiled_start_1_19( CONT_PARAMS );
static RTYPE compiled_block_1_2173( CONT_PARAMS );
static RTYPE compiled_start_1_101( CONT_PARAMS );
static RTYPE compiled_block_1_1998( CONT_PARAMS );
static RTYPE compiled_block_1_2000( CONT_PARAMS );
static RTYPE compiled_start_1_100( CONT_PARAMS );
static RTYPE compiled_block_1_2170( CONT_PARAMS );
static RTYPE compiled_block_1_2018( CONT_PARAMS );
static RTYPE compiled_block_1_2019( CONT_PARAMS );
static RTYPE compiled_block_1_2022( CONT_PARAMS );
static RTYPE compiled_block_1_2025( CONT_PARAMS );
static RTYPE compiled_block_1_2028( CONT_PARAMS );
static RTYPE compiled_block_1_2031( CONT_PARAMS );
static RTYPE compiled_block_1_2034( CONT_PARAMS );
static RTYPE compiled_block_1_2168( CONT_PARAMS );
static RTYPE compiled_block_1_2032( CONT_PARAMS );
static RTYPE compiled_block_1_2029( CONT_PARAMS );
static RTYPE compiled_block_1_2026( CONT_PARAMS );
static RTYPE compiled_block_1_2023( CONT_PARAMS );
static RTYPE compiled_block_1_2020( CONT_PARAMS );
static RTYPE compiled_block_1_2017( CONT_PARAMS );
static RTYPE compiled_block_1_2003( CONT_PARAMS );
static RTYPE compiled_block_1_2004( CONT_PARAMS );
static RTYPE compiled_block_1_2015( CONT_PARAMS );
static RTYPE compiled_block_1_2007( CONT_PARAMS );
static RTYPE compiled_block_1_2005( CONT_PARAMS );
static RTYPE compiled_block_1_2002( CONT_PARAMS );
static RTYPE compiled_start_1_102( CONT_PARAMS );
static RTYPE compiled_block_1_2157( CONT_PARAMS );
static RTYPE compiled_block_1_2155( CONT_PARAMS );
static RTYPE compiled_block_1_2038( CONT_PARAMS );
static RTYPE compiled_block_1_2153( CONT_PARAMS );
static RTYPE compiled_block_1_2036( CONT_PARAMS );
static RTYPE compiled_block_1_2035( CONT_PARAMS );
static RTYPE compiled_start_1_104( CONT_PARAMS );
static RTYPE compiled_block_1_2165( CONT_PARAMS );
static RTYPE compiled_block_1_2164( CONT_PARAMS );
static RTYPE compiled_start_1_110( CONT_PARAMS );
static RTYPE compiled_start_1_109( CONT_PARAMS );
static RTYPE compiled_block_1_2160( CONT_PARAMS );
static RTYPE compiled_block_1_2159( CONT_PARAMS );
static RTYPE compiled_start_1_108( CONT_PARAMS );
static RTYPE compiled_start_1_107( CONT_PARAMS );
static RTYPE compiled_block_1_2151( CONT_PARAMS );
static RTYPE compiled_start_1_106( CONT_PARAMS );
static RTYPE compiled_block_1_2149( CONT_PARAMS );
static RTYPE compiled_block_1_2147( CONT_PARAMS );
static RTYPE compiled_block_1_2142( CONT_PARAMS );
static RTYPE compiled_block_1_2113( CONT_PARAMS );
static RTYPE compiled_block_1_2114( CONT_PARAMS );
static RTYPE compiled_block_1_2117( CONT_PARAMS );
static RTYPE compiled_block_1_2120( CONT_PARAMS );
static RTYPE compiled_block_1_2123( CONT_PARAMS );
static RTYPE compiled_block_1_2126( CONT_PARAMS );
static RTYPE compiled_block_1_2129( CONT_PARAMS );
static RTYPE compiled_block_1_2135( CONT_PARAMS );
static RTYPE compiled_block_1_2140( CONT_PARAMS );
static RTYPE compiled_block_1_2138( CONT_PARAMS );
static RTYPE compiled_block_1_2136( CONT_PARAMS );
static RTYPE compiled_block_1_2133( CONT_PARAMS );
static RTYPE compiled_block_1_2132( CONT_PARAMS );
static RTYPE compiled_block_1_2130( CONT_PARAMS );
static RTYPE compiled_block_1_2127( CONT_PARAMS );
static RTYPE compiled_block_1_2124( CONT_PARAMS );
static RTYPE compiled_block_1_2121( CONT_PARAMS );
static RTYPE compiled_block_1_2118( CONT_PARAMS );
static RTYPE compiled_block_1_2115( CONT_PARAMS );
static RTYPE compiled_block_1_2112( CONT_PARAMS );
static RTYPE compiled_block_1_2111( CONT_PARAMS );
static RTYPE compiled_block_1_2073( CONT_PARAMS );
static RTYPE compiled_block_1_2074( CONT_PARAMS );
static RTYPE compiled_block_1_2077( CONT_PARAMS );
static RTYPE compiled_block_1_2080( CONT_PARAMS );
static RTYPE compiled_block_1_2083( CONT_PARAMS );
static RTYPE compiled_block_1_2086( CONT_PARAMS );
static RTYPE compiled_block_1_2089( CONT_PARAMS );
static RTYPE compiled_block_1_2092( CONT_PARAMS );
static RTYPE compiled_block_1_2095( CONT_PARAMS );
static RTYPE compiled_block_1_2098( CONT_PARAMS );
static RTYPE compiled_block_1_2101( CONT_PARAMS );
static RTYPE compiled_block_1_2104( CONT_PARAMS );
static RTYPE compiled_block_1_2109( CONT_PARAMS );
static RTYPE compiled_block_1_2107( CONT_PARAMS );
static RTYPE compiled_block_1_2105( CONT_PARAMS );
static RTYPE compiled_block_1_2102( CONT_PARAMS );
static RTYPE compiled_block_1_2099( CONT_PARAMS );
static RTYPE compiled_block_1_2096( CONT_PARAMS );
static RTYPE compiled_block_1_2093( CONT_PARAMS );
static RTYPE compiled_block_1_2090( CONT_PARAMS );
static RTYPE compiled_block_1_2087( CONT_PARAMS );
static RTYPE compiled_block_1_2084( CONT_PARAMS );
static RTYPE compiled_block_1_2081( CONT_PARAMS );
static RTYPE compiled_block_1_2078( CONT_PARAMS );
static RTYPE compiled_block_1_2075( CONT_PARAMS );
static RTYPE compiled_block_1_2072( CONT_PARAMS );
static RTYPE compiled_block_1_2071( CONT_PARAMS );
static RTYPE compiled_block_1_2042( CONT_PARAMS );
static RTYPE compiled_block_1_2043( CONT_PARAMS );
static RTYPE compiled_block_1_2046( CONT_PARAMS );
static RTYPE compiled_block_1_2049( CONT_PARAMS );
static RTYPE compiled_block_1_2052( CONT_PARAMS );
static RTYPE compiled_block_1_2055( CONT_PARAMS );
static RTYPE compiled_block_1_2058( CONT_PARAMS );
static RTYPE compiled_block_1_2064( CONT_PARAMS );
static RTYPE compiled_block_1_2069( CONT_PARAMS );
static RTYPE compiled_block_1_2067( CONT_PARAMS );
static RTYPE compiled_block_1_2065( CONT_PARAMS );
static RTYPE compiled_block_1_2062( CONT_PARAMS );
static RTYPE compiled_block_1_2061( CONT_PARAMS );
static RTYPE compiled_block_1_2059( CONT_PARAMS );
static RTYPE compiled_block_1_2056( CONT_PARAMS );
static RTYPE compiled_block_1_2053( CONT_PARAMS );
static RTYPE compiled_block_1_2050( CONT_PARAMS );
static RTYPE compiled_block_1_2047( CONT_PARAMS );
static RTYPE compiled_block_1_2044( CONT_PARAMS );
static RTYPE compiled_block_1_2041( CONT_PARAMS );
static RTYPE compiled_start_1_111( CONT_PARAMS );
static RTYPE compiled_start_1_115( CONT_PARAMS );
static RTYPE compiled_block_1_2144( CONT_PARAMS );
static RTYPE compiled_start_1_117( CONT_PARAMS );
static RTYPE compiled_start_1_116( CONT_PARAMS );
static RTYPE compiled_start_1_114( CONT_PARAMS );
static RTYPE compiled_start_1_113( CONT_PARAMS );
static RTYPE compiled_start_1_112( CONT_PARAMS );
static RTYPE compiled_block_1_2039( CONT_PARAMS );
static RTYPE compiled_start_1_105( CONT_PARAMS );
static RTYPE compiled_start_1_103( CONT_PARAMS );
static RTYPE compiled_block_1_2012( CONT_PARAMS );
static RTYPE compiled_start_1_119( CONT_PARAMS );
static RTYPE compiled_block_1_2010( CONT_PARAMS );
static RTYPE compiled_block_1_2009( CONT_PARAMS );
static RTYPE compiled_block_1_2008( CONT_PARAMS );
static RTYPE compiled_start_1_118( CONT_PARAMS );
static RTYPE compiled_start_1_18( CONT_PARAMS );
static RTYPE compiled_start_1_17( CONT_PARAMS );
static RTYPE compiled_start_1_120( CONT_PARAMS );
static RTYPE compiled_start_1_121( CONT_PARAMS );
static RTYPE compiled_start_1_16( CONT_PARAMS );
static RTYPE compiled_start_1_122( CONT_PARAMS );
static RTYPE compiled_block_1_1956( CONT_PARAMS );
static RTYPE compiled_start_1_15( CONT_PARAMS );
static RTYPE compiled_block_1_1990( CONT_PARAMS );
static RTYPE compiled_block_1_1969( CONT_PARAMS );
static RTYPE compiled_block_1_1970( CONT_PARAMS );
static RTYPE compiled_block_1_1973( CONT_PARAMS );
static RTYPE compiled_block_1_1976( CONT_PARAMS );
static RTYPE compiled_block_1_1979( CONT_PARAMS );
static RTYPE compiled_block_1_1982( CONT_PARAMS );
static RTYPE compiled_block_1_1988( CONT_PARAMS );
static RTYPE compiled_block_1_1980( CONT_PARAMS );
static RTYPE compiled_block_1_1977( CONT_PARAMS );
static RTYPE compiled_block_1_1974( CONT_PARAMS );
static RTYPE compiled_block_1_1971( CONT_PARAMS );
static RTYPE compiled_block_1_1968( CONT_PARAMS );
static RTYPE compiled_block_1_1967( CONT_PARAMS );
static RTYPE compiled_block_1_1960( CONT_PARAMS );
static RTYPE compiled_block_1_1961( CONT_PARAMS );
static RTYPE compiled_block_1_1965( CONT_PARAMS );
static RTYPE compiled_block_1_1964( CONT_PARAMS );
static RTYPE compiled_block_1_1962( CONT_PARAMS );
static RTYPE compiled_block_1_1959( CONT_PARAMS );
static RTYPE compiled_start_1_123( CONT_PARAMS );
static RTYPE compiled_block_1_1986( CONT_PARAMS );
static RTYPE compiled_block_1_1985( CONT_PARAMS );
static RTYPE compiled_block_1_1984( CONT_PARAMS );
static RTYPE compiled_block_1_1983( CONT_PARAMS );
static RTYPE compiled_start_1_125( CONT_PARAMS );
static RTYPE compiled_start_1_124( CONT_PARAMS );
static RTYPE compiled_block_1_1919( CONT_PARAMS );
static RTYPE compiled_start_1_14( CONT_PARAMS );
static RTYPE compiled_block_1_1953( CONT_PARAMS );
static RTYPE compiled_block_1_1932( CONT_PARAMS );
static RTYPE compiled_block_1_1933( CONT_PARAMS );
static RTYPE compiled_block_1_1936( CONT_PARAMS );
static RTYPE compiled_block_1_1939( CONT_PARAMS );
static RTYPE compiled_block_1_1942( CONT_PARAMS );
static RTYPE compiled_block_1_1945( CONT_PARAMS );
static RTYPE compiled_block_1_1951( CONT_PARAMS );
static RTYPE compiled_block_1_1943( CONT_PARAMS );
static RTYPE compiled_block_1_1940( CONT_PARAMS );
static RTYPE compiled_block_1_1937( CONT_PARAMS );
static RTYPE compiled_block_1_1934( CONT_PARAMS );
static RTYPE compiled_block_1_1931( CONT_PARAMS );
static RTYPE compiled_block_1_1930( CONT_PARAMS );
static RTYPE compiled_block_1_1923( CONT_PARAMS );
static RTYPE compiled_block_1_1924( CONT_PARAMS );
static RTYPE compiled_block_1_1928( CONT_PARAMS );
static RTYPE compiled_block_1_1927( CONT_PARAMS );
static RTYPE compiled_block_1_1925( CONT_PARAMS );
static RTYPE compiled_block_1_1922( CONT_PARAMS );
static RTYPE compiled_start_1_126( CONT_PARAMS );
static RTYPE compiled_block_1_1949( CONT_PARAMS );
static RTYPE compiled_block_1_1948( CONT_PARAMS );
static RTYPE compiled_block_1_1947( CONT_PARAMS );
static RTYPE compiled_block_1_1946( CONT_PARAMS );
static RTYPE compiled_start_1_128( CONT_PARAMS );
static RTYPE compiled_start_1_127( CONT_PARAMS );
static RTYPE compiled_start_1_13( CONT_PARAMS );
static RTYPE compiled_start_1_12( CONT_PARAMS );
static RTYPE compiled_block_1_1915( CONT_PARAMS );
static RTYPE compiled_block_1_1898( CONT_PARAMS );
static RTYPE compiled_block_1_1899( CONT_PARAMS );
static RTYPE compiled_block_1_1902( CONT_PARAMS );
static RTYPE compiled_block_1_1905( CONT_PARAMS );
static RTYPE compiled_block_1_1908( CONT_PARAMS );
static RTYPE compiled_block_1_1911( CONT_PARAMS );
static RTYPE compiled_block_1_1913( CONT_PARAMS );
static RTYPE compiled_block_1_1909( CONT_PARAMS );
static RTYPE compiled_block_1_1906( CONT_PARAMS );
static RTYPE compiled_block_1_1903( CONT_PARAMS );
static RTYPE compiled_block_1_1900( CONT_PARAMS );
static RTYPE compiled_block_1_1897( CONT_PARAMS );
static RTYPE compiled_block_1_1896( CONT_PARAMS );
static RTYPE compiled_block_1_1888( CONT_PARAMS );
static RTYPE compiled_block_1_1889( CONT_PARAMS );
static RTYPE compiled_block_1_1894( CONT_PARAMS );
static RTYPE compiled_block_1_1892( CONT_PARAMS );
static RTYPE compiled_block_1_1890( CONT_PARAMS );
static RTYPE compiled_block_1_1887( CONT_PARAMS );
static RTYPE compiled_start_1_129( CONT_PARAMS );
static RTYPE compiled_start_1_131( CONT_PARAMS );
static RTYPE compiled_start_1_130( CONT_PARAMS );
static RTYPE compiled_start_1_11( CONT_PARAMS );
static RTYPE compiled_block_1_1884( CONT_PARAMS );
static RTYPE compiled_block_1_1880( CONT_PARAMS );
static RTYPE compiled_block_1_1881( CONT_PARAMS );
static RTYPE compiled_block_1_1882( CONT_PARAMS );
static RTYPE compiled_block_1_1879( CONT_PARAMS );
static RTYPE compiled_block_1_1856( CONT_PARAMS );
static RTYPE compiled_block_1_1857( CONT_PARAMS );
static RTYPE compiled_block_1_1860( CONT_PARAMS );
static RTYPE compiled_block_1_1863( CONT_PARAMS );
static RTYPE compiled_block_1_1866( CONT_PARAMS );
static RTYPE compiled_block_1_1869( CONT_PARAMS );
static RTYPE compiled_block_1_1872( CONT_PARAMS );
static RTYPE compiled_block_1_1875( CONT_PARAMS );
static RTYPE compiled_block_1_1877( CONT_PARAMS );
static RTYPE compiled_block_1_1873( CONT_PARAMS );
static RTYPE compiled_block_1_1870( CONT_PARAMS );
static RTYPE compiled_block_1_1867( CONT_PARAMS );
static RTYPE compiled_block_1_1864( CONT_PARAMS );
static RTYPE compiled_block_1_1861( CONT_PARAMS );
static RTYPE compiled_block_1_1858( CONT_PARAMS );
static RTYPE compiled_block_1_1855( CONT_PARAMS );
static RTYPE compiled_start_1_132( CONT_PARAMS );
static RTYPE compiled_start_1_134( CONT_PARAMS );
static RTYPE compiled_start_1_133( CONT_PARAMS );
static RTYPE compiled_start_1_10( CONT_PARAMS );
static RTYPE compiled_block_1_1852( CONT_PARAMS );
static RTYPE compiled_block_1_1848( CONT_PARAMS );
static RTYPE compiled_block_1_1849( CONT_PARAMS );
static RTYPE compiled_block_1_1850( CONT_PARAMS );
static RTYPE compiled_block_1_1847( CONT_PARAMS );
static RTYPE compiled_block_1_1830( CONT_PARAMS );
static RTYPE compiled_block_1_1831( CONT_PARAMS );
static RTYPE compiled_block_1_1834( CONT_PARAMS );
static RTYPE compiled_block_1_1837( CONT_PARAMS );
static RTYPE compiled_block_1_1840( CONT_PARAMS );
static RTYPE compiled_block_1_1843( CONT_PARAMS );
static RTYPE compiled_block_1_1845( CONT_PARAMS );
static RTYPE compiled_block_1_1841( CONT_PARAMS );
static RTYPE compiled_block_1_1838( CONT_PARAMS );
static RTYPE compiled_block_1_1835( CONT_PARAMS );
static RTYPE compiled_block_1_1832( CONT_PARAMS );
static RTYPE compiled_block_1_1829( CONT_PARAMS );
static RTYPE compiled_start_1_135( CONT_PARAMS );
static RTYPE compiled_start_1_137( CONT_PARAMS );
static RTYPE compiled_start_1_136( CONT_PARAMS );
static RTYPE compiled_block_1_1828( CONT_PARAMS );
static RTYPE compiled_start_1_9( CONT_PARAMS );
static RTYPE compiled_block_1_1827( CONT_PARAMS );
static RTYPE compiled_start_1_8( CONT_PARAMS );
static RTYPE compiled_block_1_1826( CONT_PARAMS );
static RTYPE compiled_start_1_7( CONT_PARAMS );
static RTYPE compiled_block_1_1822( CONT_PARAMS );
static RTYPE compiled_block_1_1819( CONT_PARAMS );
static RTYPE compiled_start_1_6( CONT_PARAMS );
static RTYPE compiled_block_1_1814( CONT_PARAMS );
static RTYPE compiled_block_1_1811( CONT_PARAMS );
static RTYPE compiled_start_1_5( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_block_1_1799( CONT_PARAMS );
static RTYPE compiled_block_1_1774( CONT_PARAMS );
static RTYPE compiled_block_1_1719( CONT_PARAMS );
static RTYPE compiled_block_1_1682( CONT_PARAMS );
static RTYPE compiled_block_1_1644( CONT_PARAMS );
static RTYPE compiled_block_1_1620( CONT_PARAMS );
static RTYPE compiled_block_1_1138( CONT_PARAMS );
static RTYPE compiled_block_1_1110( CONT_PARAMS );
static RTYPE compiled_block_1_1019( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_block_1_1776( CONT_PARAMS );
static RTYPE compiled_block_1_1778( CONT_PARAMS );
static RTYPE compiled_block_1_1781( CONT_PARAMS );
static RTYPE compiled_block_1_1783( CONT_PARAMS );
static RTYPE compiled_block_1_1785( CONT_PARAMS );
static RTYPE compiled_block_1_1787( CONT_PARAMS );
static RTYPE compiled_block_1_1789( CONT_PARAMS );
static RTYPE compiled_block_1_1791( CONT_PARAMS );
static RTYPE compiled_block_1_1790( CONT_PARAMS );
static RTYPE compiled_block_1_1779( CONT_PARAMS );
static RTYPE compiled_start_1_146( CONT_PARAMS );
static RTYPE compiled_block_1_1746( CONT_PARAMS );
static RTYPE compiled_block_1_1748( CONT_PARAMS );
static RTYPE compiled_block_1_1750( CONT_PARAMS );
static RTYPE compiled_block_1_1752( CONT_PARAMS );
static RTYPE compiled_block_1_1754( CONT_PARAMS );
static RTYPE compiled_block_1_1756( CONT_PARAMS );
static RTYPE compiled_block_1_1758( CONT_PARAMS );
static RTYPE compiled_block_1_1760( CONT_PARAMS );
static RTYPE compiled_block_1_1762( CONT_PARAMS );
static RTYPE compiled_block_1_1764( CONT_PARAMS );
static RTYPE compiled_block_1_1763( CONT_PARAMS );
static RTYPE compiled_block_1_1720( CONT_PARAMS );
static RTYPE compiled_block_1_1723( CONT_PARAMS );
static RTYPE compiled_block_1_1725( CONT_PARAMS );
static RTYPE compiled_block_1_1727( CONT_PARAMS );
static RTYPE compiled_block_1_1729( CONT_PARAMS );
static RTYPE compiled_block_1_1731( CONT_PARAMS );
static RTYPE compiled_block_1_1734( CONT_PARAMS );
static RTYPE compiled_block_1_1736( CONT_PARAMS );
static RTYPE compiled_block_1_1732( CONT_PARAMS );
static RTYPE compiled_start_1_145( CONT_PARAMS );
static RTYPE compiled_block_1_1684( CONT_PARAMS );
static RTYPE compiled_block_1_1686( CONT_PARAMS );
static RTYPE compiled_block_1_1688( CONT_PARAMS );
static RTYPE compiled_block_1_1690( CONT_PARAMS );
static RTYPE compiled_block_1_1692( CONT_PARAMS );
static RTYPE compiled_block_1_1694( CONT_PARAMS );
static RTYPE compiled_block_1_1696( CONT_PARAMS );
static RTYPE compiled_block_1_1699( CONT_PARAMS );
static RTYPE compiled_block_1_1701( CONT_PARAMS );
static RTYPE compiled_block_1_1703( CONT_PARAMS );
static RTYPE compiled_block_1_1707( CONT_PARAMS );
static RTYPE compiled_block_1_1706( CONT_PARAMS );
static RTYPE compiled_block_1_1705( CONT_PARAMS );
static RTYPE compiled_block_1_1704( CONT_PARAMS );
static RTYPE compiled_block_1_1697( CONT_PARAMS );
static RTYPE compiled_start_1_144( CONT_PARAMS );
static RTYPE compiled_block_1_1646( CONT_PARAMS );
static RTYPE compiled_block_1_1648( CONT_PARAMS );
static RTYPE compiled_block_1_1650( CONT_PARAMS );
static RTYPE compiled_block_1_1652( CONT_PARAMS );
static RTYPE compiled_block_1_1654( CONT_PARAMS );
static RTYPE compiled_block_1_1656( CONT_PARAMS );
static RTYPE compiled_block_1_1658( CONT_PARAMS );
static RTYPE compiled_block_1_1661( CONT_PARAMS );
static RTYPE compiled_block_1_1663( CONT_PARAMS );
static RTYPE compiled_block_1_1665( CONT_PARAMS );
static RTYPE compiled_block_1_1670( CONT_PARAMS );
static RTYPE compiled_block_1_1669( CONT_PARAMS );
static RTYPE compiled_block_1_1668( CONT_PARAMS );
static RTYPE compiled_block_1_1667( CONT_PARAMS );
static RTYPE compiled_block_1_1666( CONT_PARAMS );
static RTYPE compiled_block_1_1659( CONT_PARAMS );
static RTYPE compiled_start_1_143( CONT_PARAMS );
static RTYPE compiled_block_1_1622( CONT_PARAMS );
static RTYPE compiled_block_1_1624( CONT_PARAMS );
static RTYPE compiled_block_1_1626( CONT_PARAMS );
static RTYPE compiled_block_1_1628( CONT_PARAMS );
static RTYPE compiled_block_1_1631( CONT_PARAMS );
static RTYPE compiled_block_1_1633( CONT_PARAMS );
static RTYPE compiled_block_1_1635( CONT_PARAMS );
static RTYPE compiled_block_1_1629( CONT_PARAMS );
static RTYPE compiled_start_1_142( CONT_PARAMS );
static RTYPE compiled_block_1_1382( CONT_PARAMS );
static RTYPE compiled_block_1_1583( CONT_PARAMS );
static RTYPE compiled_block_1_1585( CONT_PARAMS );
static RTYPE compiled_block_1_1587( CONT_PARAMS );
static RTYPE compiled_block_1_1589( CONT_PARAMS );
static RTYPE compiled_block_1_1596( CONT_PARAMS );
static RTYPE compiled_block_1_1598( CONT_PARAMS );
static RTYPE compiled_block_1_1600( CONT_PARAMS );
static RTYPE compiled_block_1_1602( CONT_PARAMS );
static RTYPE compiled_block_1_1605( CONT_PARAMS );
static RTYPE compiled_block_1_1607( CONT_PARAMS );
static RTYPE compiled_block_1_1608( CONT_PARAMS );
static RTYPE compiled_block_1_1603( CONT_PARAMS );
static RTYPE compiled_block_1_1591( CONT_PARAMS );
static RTYPE compiled_block_1_1592( CONT_PARAMS );
static RTYPE compiled_block_1_1594( CONT_PARAMS );
static RTYPE compiled_block_1_1593( CONT_PARAMS );
static RTYPE compiled_block_1_1590( CONT_PARAMS );
static RTYPE compiled_block_1_1150( CONT_PARAMS );
static RTYPE compiled_block_1_1545( CONT_PARAMS );
static RTYPE compiled_block_1_1547( CONT_PARAMS );
static RTYPE compiled_block_1_1549( CONT_PARAMS );
static RTYPE compiled_block_1_1551( CONT_PARAMS );
static RTYPE compiled_block_1_1558( CONT_PARAMS );
static RTYPE compiled_block_1_1560( CONT_PARAMS );
static RTYPE compiled_block_1_1562( CONT_PARAMS );
static RTYPE compiled_block_1_1564( CONT_PARAMS );
static RTYPE compiled_block_1_1567( CONT_PARAMS );
static RTYPE compiled_block_1_1569( CONT_PARAMS );
static RTYPE compiled_block_1_1570( CONT_PARAMS );
static RTYPE compiled_block_1_1565( CONT_PARAMS );
static RTYPE compiled_block_1_1553( CONT_PARAMS );
static RTYPE compiled_block_1_1554( CONT_PARAMS );
static RTYPE compiled_block_1_1556( CONT_PARAMS );
static RTYPE compiled_block_1_1555( CONT_PARAMS );
static RTYPE compiled_block_1_1552( CONT_PARAMS );
static RTYPE compiled_block_1_1149( CONT_PARAMS );
static RTYPE compiled_block_1_1508( CONT_PARAMS );
static RTYPE compiled_block_1_1510( CONT_PARAMS );
static RTYPE compiled_block_1_1512( CONT_PARAMS );
static RTYPE compiled_block_1_1514( CONT_PARAMS );
static RTYPE compiled_block_1_1521( CONT_PARAMS );
static RTYPE compiled_block_1_1523( CONT_PARAMS );
static RTYPE compiled_block_1_1525( CONT_PARAMS );
static RTYPE compiled_block_1_1528( CONT_PARAMS );
static RTYPE compiled_block_1_1530( CONT_PARAMS );
static RTYPE compiled_block_1_1533( CONT_PARAMS );
static RTYPE compiled_block_1_1532( CONT_PARAMS );
static RTYPE compiled_block_1_1531( CONT_PARAMS );
static RTYPE compiled_block_1_1526( CONT_PARAMS );
static RTYPE compiled_block_1_1516( CONT_PARAMS );
static RTYPE compiled_block_1_1517( CONT_PARAMS );
static RTYPE compiled_block_1_1519( CONT_PARAMS );
static RTYPE compiled_block_1_1518( CONT_PARAMS );
static RTYPE compiled_block_1_1515( CONT_PARAMS );
static RTYPE compiled_block_1_1148( CONT_PARAMS );
static RTYPE compiled_block_1_1471( CONT_PARAMS );
static RTYPE compiled_block_1_1473( CONT_PARAMS );
static RTYPE compiled_block_1_1475( CONT_PARAMS );
static RTYPE compiled_block_1_1477( CONT_PARAMS );
static RTYPE compiled_block_1_1484( CONT_PARAMS );
static RTYPE compiled_block_1_1486( CONT_PARAMS );
static RTYPE compiled_block_1_1488( CONT_PARAMS );
static RTYPE compiled_block_1_1491( CONT_PARAMS );
static RTYPE compiled_block_1_1493( CONT_PARAMS );
static RTYPE compiled_block_1_1496( CONT_PARAMS );
static RTYPE compiled_block_1_1495( CONT_PARAMS );
static RTYPE compiled_block_1_1494( CONT_PARAMS );
static RTYPE compiled_block_1_1489( CONT_PARAMS );
static RTYPE compiled_block_1_1479( CONT_PARAMS );
static RTYPE compiled_block_1_1480( CONT_PARAMS );
static RTYPE compiled_block_1_1482( CONT_PARAMS );
static RTYPE compiled_block_1_1481( CONT_PARAMS );
static RTYPE compiled_block_1_1478( CONT_PARAMS );
static RTYPE compiled_block_1_1147( CONT_PARAMS );
static RTYPE compiled_block_1_1437( CONT_PARAMS );
static RTYPE compiled_block_1_1439( CONT_PARAMS );
static RTYPE compiled_block_1_1441( CONT_PARAMS );
static RTYPE compiled_block_1_1443( CONT_PARAMS );
static RTYPE compiled_block_1_1450( CONT_PARAMS );
static RTYPE compiled_block_1_1453( CONT_PARAMS );
static RTYPE compiled_block_1_1455( CONT_PARAMS );
static RTYPE compiled_block_1_1457( CONT_PARAMS );
static RTYPE compiled_block_1_1461( CONT_PARAMS );
static RTYPE compiled_block_1_1460( CONT_PARAMS );
static RTYPE compiled_block_1_1459( CONT_PARAMS );
static RTYPE compiled_block_1_1458( CONT_PARAMS );
static RTYPE compiled_block_1_1451( CONT_PARAMS );
static RTYPE compiled_block_1_1445( CONT_PARAMS );
static RTYPE compiled_block_1_1446( CONT_PARAMS );
static RTYPE compiled_block_1_1448( CONT_PARAMS );
static RTYPE compiled_block_1_1447( CONT_PARAMS );
static RTYPE compiled_block_1_1444( CONT_PARAMS );
static RTYPE compiled_block_1_1146( CONT_PARAMS );
static RTYPE compiled_block_1_1386( CONT_PARAMS );
static RTYPE compiled_block_1_1388( CONT_PARAMS );
static RTYPE compiled_block_1_1390( CONT_PARAMS );
static RTYPE compiled_block_1_1392( CONT_PARAMS );
static RTYPE compiled_block_1_1399( CONT_PARAMS );
static RTYPE compiled_block_1_1401( CONT_PARAMS );
static RTYPE compiled_block_1_1403( CONT_PARAMS );
static RTYPE compiled_block_1_1405( CONT_PARAMS );
static RTYPE compiled_block_1_1407( CONT_PARAMS );
static RTYPE compiled_block_1_1409( CONT_PARAMS );
static RTYPE compiled_block_1_1411( CONT_PARAMS );
static RTYPE compiled_block_1_1413( CONT_PARAMS );
static RTYPE compiled_block_1_1423( CONT_PARAMS );
static RTYPE compiled_block_1_1422( CONT_PARAMS );
static RTYPE compiled_block_1_1421( CONT_PARAMS );
static RTYPE compiled_block_1_1420( CONT_PARAMS );
static RTYPE compiled_block_1_1419( CONT_PARAMS );
static RTYPE compiled_block_1_1418( CONT_PARAMS );
static RTYPE compiled_block_1_1417( CONT_PARAMS );
static RTYPE compiled_block_1_1416( CONT_PARAMS );
static RTYPE compiled_block_1_1415( CONT_PARAMS );
static RTYPE compiled_block_1_1414( CONT_PARAMS );
static RTYPE compiled_block_1_1394( CONT_PARAMS );
static RTYPE compiled_block_1_1395( CONT_PARAMS );
static RTYPE compiled_block_1_1397( CONT_PARAMS );
static RTYPE compiled_block_1_1396( CONT_PARAMS );
static RTYPE compiled_block_1_1393( CONT_PARAMS );
static RTYPE compiled_block_1_1145( CONT_PARAMS );
static RTYPE compiled_block_1_1383( CONT_PARAMS );
static RTYPE compiled_block_1_1380( CONT_PARAMS );
static RTYPE compiled_block_1_1144( CONT_PARAMS );
static RTYPE compiled_block_1_1333( CONT_PARAMS );
static RTYPE compiled_block_1_1335( CONT_PARAMS );
static RTYPE compiled_block_1_1337( CONT_PARAMS );
static RTYPE compiled_block_1_1339( CONT_PARAMS );
static RTYPE compiled_block_1_1346( CONT_PARAMS );
static RTYPE compiled_block_1_1348( CONT_PARAMS );
static RTYPE compiled_block_1_1350( CONT_PARAMS );
static RTYPE compiled_block_1_1352( CONT_PARAMS );
static RTYPE compiled_block_1_1354( CONT_PARAMS );
static RTYPE compiled_block_1_1356( CONT_PARAMS );
static RTYPE compiled_block_1_1358( CONT_PARAMS );
static RTYPE compiled_block_1_1367( CONT_PARAMS );
static RTYPE compiled_block_1_1366( CONT_PARAMS );
static RTYPE compiled_block_1_1365( CONT_PARAMS );
static RTYPE compiled_block_1_1364( CONT_PARAMS );
static RTYPE compiled_block_1_1363( CONT_PARAMS );
static RTYPE compiled_block_1_1362( CONT_PARAMS );
static RTYPE compiled_block_1_1361( CONT_PARAMS );
static RTYPE compiled_block_1_1360( CONT_PARAMS );
static RTYPE compiled_block_1_1359( CONT_PARAMS );
static RTYPE compiled_block_1_1341( CONT_PARAMS );
static RTYPE compiled_block_1_1342( CONT_PARAMS );
static RTYPE compiled_block_1_1344( CONT_PARAMS );
static RTYPE compiled_block_1_1343( CONT_PARAMS );
static RTYPE compiled_block_1_1340( CONT_PARAMS );
static RTYPE compiled_block_1_1143( CONT_PARAMS );
static RTYPE compiled_block_1_1286( CONT_PARAMS );
static RTYPE compiled_block_1_1288( CONT_PARAMS );
static RTYPE compiled_block_1_1290( CONT_PARAMS );
static RTYPE compiled_block_1_1292( CONT_PARAMS );
static RTYPE compiled_block_1_1299( CONT_PARAMS );
static RTYPE compiled_block_1_1301( CONT_PARAMS );
static RTYPE compiled_block_1_1303( CONT_PARAMS );
static RTYPE compiled_block_1_1305( CONT_PARAMS );
static RTYPE compiled_block_1_1307( CONT_PARAMS );
static RTYPE compiled_block_1_1309( CONT_PARAMS );
static RTYPE compiled_block_1_1311( CONT_PARAMS );
static RTYPE compiled_block_1_1320( CONT_PARAMS );
static RTYPE compiled_block_1_1319( CONT_PARAMS );
static RTYPE compiled_block_1_1318( CONT_PARAMS );
static RTYPE compiled_block_1_1317( CONT_PARAMS );
static RTYPE compiled_block_1_1316( CONT_PARAMS );
static RTYPE compiled_block_1_1315( CONT_PARAMS );
static RTYPE compiled_block_1_1314( CONT_PARAMS );
static RTYPE compiled_block_1_1313( CONT_PARAMS );
static RTYPE compiled_block_1_1312( CONT_PARAMS );
static RTYPE compiled_block_1_1294( CONT_PARAMS );
static RTYPE compiled_block_1_1295( CONT_PARAMS );
static RTYPE compiled_block_1_1297( CONT_PARAMS );
static RTYPE compiled_block_1_1296( CONT_PARAMS );
static RTYPE compiled_block_1_1293( CONT_PARAMS );
static RTYPE compiled_block_1_1142( CONT_PARAMS );
static RTYPE compiled_block_1_1239( CONT_PARAMS );
static RTYPE compiled_block_1_1241( CONT_PARAMS );
static RTYPE compiled_block_1_1243( CONT_PARAMS );
static RTYPE compiled_block_1_1245( CONT_PARAMS );
static RTYPE compiled_block_1_1252( CONT_PARAMS );
static RTYPE compiled_block_1_1254( CONT_PARAMS );
static RTYPE compiled_block_1_1256( CONT_PARAMS );
static RTYPE compiled_block_1_1258( CONT_PARAMS );
static RTYPE compiled_block_1_1260( CONT_PARAMS );
static RTYPE compiled_block_1_1262( CONT_PARAMS );
static RTYPE compiled_block_1_1264( CONT_PARAMS );
static RTYPE compiled_block_1_1273( CONT_PARAMS );
static RTYPE compiled_block_1_1272( CONT_PARAMS );
static RTYPE compiled_block_1_1271( CONT_PARAMS );
static RTYPE compiled_block_1_1270( CONT_PARAMS );
static RTYPE compiled_block_1_1269( CONT_PARAMS );
static RTYPE compiled_block_1_1268( CONT_PARAMS );
static RTYPE compiled_block_1_1267( CONT_PARAMS );
static RTYPE compiled_block_1_1266( CONT_PARAMS );
static RTYPE compiled_block_1_1265( CONT_PARAMS );
static RTYPE compiled_block_1_1247( CONT_PARAMS );
static RTYPE compiled_block_1_1248( CONT_PARAMS );
static RTYPE compiled_block_1_1250( CONT_PARAMS );
static RTYPE compiled_block_1_1249( CONT_PARAMS );
static RTYPE compiled_block_1_1246( CONT_PARAMS );
static RTYPE compiled_block_1_1141( CONT_PARAMS );
static RTYPE compiled_block_1_1211( CONT_PARAMS );
static RTYPE compiled_block_1_1213( CONT_PARAMS );
static RTYPE compiled_block_1_1215( CONT_PARAMS );
static RTYPE compiled_block_1_1222( CONT_PARAMS );
static RTYPE compiled_block_1_1224( CONT_PARAMS );
static RTYPE compiled_block_1_1227( CONT_PARAMS );
static RTYPE compiled_block_1_1229( CONT_PARAMS );
static RTYPE compiled_block_1_1225( CONT_PARAMS );
static RTYPE compiled_block_1_1217( CONT_PARAMS );
static RTYPE compiled_block_1_1218( CONT_PARAMS );
static RTYPE compiled_block_1_1220( CONT_PARAMS );
static RTYPE compiled_block_1_1219( CONT_PARAMS );
static RTYPE compiled_block_1_1216( CONT_PARAMS );
static RTYPE compiled_block_1_1140( CONT_PARAMS );
static RTYPE compiled_block_1_1191( CONT_PARAMS );
static RTYPE compiled_block_1_1193( CONT_PARAMS );
static RTYPE compiled_block_1_1195( CONT_PARAMS );
static RTYPE compiled_block_1_1197( CONT_PARAMS );
static RTYPE compiled_block_1_1200( CONT_PARAMS );
static RTYPE compiled_block_1_1202( CONT_PARAMS );
static RTYPE compiled_block_1_1198( CONT_PARAMS );
static RTYPE compiled_block_1_1139( CONT_PARAMS );
static RTYPE compiled_block_1_1153( CONT_PARAMS );
static RTYPE compiled_block_1_1155( CONT_PARAMS );
static RTYPE compiled_block_1_1157( CONT_PARAMS );
static RTYPE compiled_block_1_1159( CONT_PARAMS );
static RTYPE compiled_block_1_1166( CONT_PARAMS );
static RTYPE compiled_block_1_1168( CONT_PARAMS );
static RTYPE compiled_block_1_1170( CONT_PARAMS );
static RTYPE compiled_block_1_1172( CONT_PARAMS );
static RTYPE compiled_block_1_1175( CONT_PARAMS );
static RTYPE compiled_block_1_1177( CONT_PARAMS );
static RTYPE compiled_block_1_1178( CONT_PARAMS );
static RTYPE compiled_block_1_1173( CONT_PARAMS );
static RTYPE compiled_block_1_1161( CONT_PARAMS );
static RTYPE compiled_block_1_1162( CONT_PARAMS );
static RTYPE compiled_block_1_1164( CONT_PARAMS );
static RTYPE compiled_block_1_1163( CONT_PARAMS );
static RTYPE compiled_block_1_1160( CONT_PARAMS );
static RTYPE compiled_start_1_141( CONT_PARAMS );
static RTYPE compiled_block_1_1112( CONT_PARAMS );
static RTYPE compiled_block_1_1114( CONT_PARAMS );
static RTYPE compiled_block_1_1116( CONT_PARAMS );
static RTYPE compiled_block_1_1118( CONT_PARAMS );
static RTYPE compiled_block_1_1121( CONT_PARAMS );
static RTYPE compiled_block_1_1123( CONT_PARAMS );
static RTYPE compiled_block_1_1125( CONT_PARAMS );
static RTYPE compiled_block_1_1127( CONT_PARAMS );
static RTYPE compiled_block_1_1129( CONT_PARAMS );
static RTYPE compiled_block_1_1128( CONT_PARAMS );
static RTYPE compiled_block_1_1119( CONT_PARAMS );
static RTYPE compiled_start_1_140( CONT_PARAMS );
static RTYPE compiled_block_1_1081( CONT_PARAMS );
static RTYPE compiled_block_1_1080( CONT_PARAMS );
static RTYPE compiled_block_1_1088( CONT_PARAMS );
static RTYPE compiled_block_1_1090( CONT_PARAMS );
static RTYPE compiled_block_1_1092( CONT_PARAMS );
static RTYPE compiled_block_1_1094( CONT_PARAMS );
static RTYPE compiled_block_1_1096( CONT_PARAMS );
static RTYPE compiled_block_1_1098( CONT_PARAMS );
static RTYPE compiled_block_1_1100( CONT_PARAMS );
static RTYPE compiled_block_1_1102( CONT_PARAMS );
static RTYPE compiled_block_1_1101( CONT_PARAMS );
static RTYPE compiled_block_1_1021( CONT_PARAMS );
static RTYPE compiled_block_1_1085( CONT_PARAMS );
static RTYPE compiled_block_1_1084( CONT_PARAMS );
static RTYPE compiled_block_1_1083( CONT_PARAMS );
static RTYPE compiled_block_1_1082( CONT_PARAMS );
static RTYPE compiled_block_1_1067( CONT_PARAMS );
static RTYPE compiled_block_1_1070( CONT_PARAMS );
static RTYPE compiled_block_1_1078( CONT_PARAMS );
static RTYPE compiled_block_1_1077( CONT_PARAMS );
static RTYPE compiled_block_1_1076( CONT_PARAMS );
static RTYPE compiled_block_1_1071( CONT_PARAMS );
static RTYPE compiled_block_1_1068( CONT_PARAMS );
static RTYPE compiled_block_1_1069( CONT_PARAMS );
static RTYPE compiled_block_1_1064( CONT_PARAMS );
static RTYPE compiled_block_1_1065( CONT_PARAMS );
static RTYPE compiled_block_1_1020( CONT_PARAMS );
static RTYPE compiled_block_1_1024( CONT_PARAMS );
static RTYPE compiled_block_1_1026( CONT_PARAMS );
static RTYPE compiled_block_1_1029( CONT_PARAMS );
static RTYPE compiled_block_1_1031( CONT_PARAMS );
static RTYPE compiled_block_1_1033( CONT_PARAMS );
static RTYPE compiled_block_1_1036( CONT_PARAMS );
static RTYPE compiled_block_1_1038( CONT_PARAMS );
static RTYPE compiled_block_1_1040( CONT_PARAMS );
static RTYPE compiled_block_1_1042( CONT_PARAMS );
static RTYPE compiled_block_1_1054( CONT_PARAMS );
static RTYPE compiled_block_1_1053( CONT_PARAMS );
static RTYPE compiled_block_1_1049( CONT_PARAMS );
static RTYPE compiled_block_1_1052( CONT_PARAMS );
static RTYPE compiled_block_1_1050( CONT_PARAMS );
static RTYPE compiled_block_1_1051( CONT_PARAMS );
static RTYPE compiled_temp_1_147( CONT_PARAMS );
static RTYPE compiled_block_1_1048( CONT_PARAMS );
static RTYPE compiled_block_1_1047( CONT_PARAMS );
static RTYPE compiled_block_1_1046( CONT_PARAMS );
static RTYPE compiled_block_1_1045( CONT_PARAMS );
static RTYPE compiled_block_1_1044( CONT_PARAMS );
static RTYPE compiled_block_1_1043( CONT_PARAMS );
static RTYPE compiled_block_1_1034( CONT_PARAMS );
static RTYPE compiled_block_1_1027( CONT_PARAMS );
static RTYPE compiled_start_1_139( CONT_PARAMS );
static RTYPE compiled_block_1_1075( CONT_PARAMS );
static RTYPE compiled_block_1_1074( CONT_PARAMS );
static RTYPE compiled_block_1_1073( CONT_PARAMS );
static RTYPE compiled_block_1_1072( CONT_PARAMS );
static RTYPE compiled_start_1_148( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_start_1_138( CONT_PARAMS );
static RTYPE compiled_block_1_1009( CONT_PARAMS );
static RTYPE compiled_block_1_1011( CONT_PARAMS );
static RTYPE compiled_block_1_1013( CONT_PARAMS );
static RTYPE compiled_block_1_1012( CONT_PARAMS );
static RTYPE compiled_start_1_150( CONT_PARAMS );
static RTYPE compiled_block_1_1010( CONT_PARAMS );
static RTYPE compiled_start_1_151( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
static RTYPE compiled_start_1_149( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  rotate~1pxGHH~31947 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  balance~1pxGHH~31946 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 4 ); /*  min+delete~1pxGHH~31945 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 5 ); /*  right-tree~1pxGHH~31944 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 6 ); /*  left-tree~1pxGHH~31943 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 7 ); /*  black-height~1pxGHH~31942 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 8 ); /*  catenate-right~1pxGHH~31941 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 9 ); /*  catenate-left~1pxGHH~31940 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 10 ); /*  tree-split~1pxGHH~31939 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 11 ); /*  tree-catenate~1pxGHH~31938 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 12 ); /*  tree-map~1pxGHH~31937 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 13 ); /*  tree-key-predecessor~1pxGHH~31936 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 14 ); /*  tree-key-successor~1pxGHH~31935 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 15 ); /*  tree-search~1pxGHH~31934 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 16 ); /*  identity~1pxGHH~31933 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 17 ); /*  tree-generator~1pxGHH~31932 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 18 ); /*  tree-for-each~1pxGHH~31931 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 19 ); /*  tree-fold/reverse~1pxGHH~31930 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 20 ); /*  tree-fold~1pxGHH~31929 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 21 ); /*  make-tree~1pxGHH~31928 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 22 ); /*  white->black~1pxGHH~31927 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 23 ); /*  redden~1pxGHH~31926 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 24 ); /*  blacken~1pxGHH~31925 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 25 ); /*  white?~1pxGHH~31434 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 26 ); /*  black?~1pxGHH~31433 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 27 ); /*  red?~1pxGHH~31432 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 28 ); /*  white~1pxGHH~31431 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 29 ); /*  black~1pxGHH~31430 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 30 ); /*  red~1pxGHH~31429 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 31 ); /*  value~1pxGHH~31428 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 32 ); /*  key~1pxGHH~31427 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 33 ); /*  right~1pxGHH~31426 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 34 ); /*  item~1pxGHH~31425 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 35 ); /*  left~1pxGHH~31424 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 36 ); /*  color~1pxGHH~31423 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 37 ); /*  node~1pxGHH~31422 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 38 ); /*  item-value~1pxGHH~31421 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 39 ); /*  item-key~1pxGHH~31420 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 40 ); /*  make-item~1pxGHH~31419 */
  twobit_lambda( compiled_start_1_1, 42, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_1_2, 44, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_1_3, 46, 0 );
  twobit_setreg( 3 );
  twobit_movereg( 3, 7 );
  twobit_movereg( 4, 6 );
  twobit_const( 47 );
  twobit_setreg( 1 );
  twobit_const( 48 );
  twobit_setreg( 3 );
  twobit_const( 49 );
  twobit_setreg( 4 );
  twobit_const( 50 );
  twobit_setreg( 5 );
  twobit_const( 51 );
  twobit_setreg( 8 );
  twobit_global( 52 ); /* ex:make-library */
  twobit_setrtn( 3223, compiled_block_1_3223 );
  twobit_invoke( 8 );
  twobit_label( 3223, compiled_block_1_3223 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 53 ); /* ex:register-library! */
  twobit_setrtn( 3224, compiled_block_1_3224 );
  twobit_invoke( 1 );
  twobit_label( 3224, compiled_block_1_3224 );
  twobit_load( 0, 0 );
  twobit_global( 54 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_1( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_global( 2 ); /* ex:uncompress */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_2( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_1_138, 2, 0 );
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1019, compiled_block_1_1019 );
  twobit_invoke( 2 );
  twobit_label( 1019, compiled_block_1_1019 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_1_139, 6, 0 );
  twobit_setreg( 2 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1110, compiled_block_1_1110 );
  twobit_invoke( 2 );
  twobit_label( 1110, compiled_block_1_1110 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_1_140, 9, 0 );
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1138, compiled_block_1_1138 );
  twobit_invoke( 2 );
  twobit_label( 1138, compiled_block_1_1138 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_1_141, 12, 0 );
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1620, compiled_block_1_1620 );
  twobit_invoke( 2 );
  twobit_label( 1620, compiled_block_1_1620 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_1_142, 15, 0 );
  twobit_setreg( 2 );
  twobit_const( 16 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1644, compiled_block_1_1644 );
  twobit_invoke( 2 );
  twobit_label( 1644, compiled_block_1_1644 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_1_143, 18, 0 );
  twobit_setreg( 2 );
  twobit_const( 19 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1682, compiled_block_1_1682 );
  twobit_invoke( 2 );
  twobit_label( 1682, compiled_block_1_1682 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_1_144, 21, 0 );
  twobit_setreg( 2 );
  twobit_const( 22 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1719, compiled_block_1_1719 );
  twobit_invoke( 2 );
  twobit_label( 1719, compiled_block_1_1719 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_1_145, 24, 0 );
  twobit_setreg( 2 );
  twobit_const( 25 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1774, compiled_block_1_1774 );
  twobit_invoke( 2 );
  twobit_label( 1774, compiled_block_1_1774 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_1_146, 27, 0 );
  twobit_setreg( 2 );
  twobit_const( 28 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1799, compiled_block_1_1799 );
  twobit_invoke( 2 );
  twobit_label( 1799, compiled_block_1_1799 );
  twobit_load( 0, 0 );
  twobit_global( 29 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_138( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1003, compiled_block_1_1003 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1005, compiled_block_1_1005 ); /* internal:branchf-pair? */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 1 );
  twobit_lambda( compiled_start_1_149, 2, 0 );
  twobit_setreg( 4 );
  twobit_movereg( 3, 2 );
  twobit_lambda( compiled_start_1_150, 4, 2 );
  twobit_setreg( 3 );
  twobit_movereg( 4, 1 );
  twobit_load( 2, 1 );
  twobit_global( 5 ); /* ex:map-while */
  twobit_pop( 1 );
  twobit_invoke( 3 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_149( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1007, compiled_block_1_1007 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_imm_const_setreg( NIL_CONST, 2 ); /* () */
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_return();
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_150( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1009, compiled_block_1_1009 ); /* internal:branchf-null? */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_1_151, 2, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1012, compiled_block_1_1012 ); /* internal:branchf-null? */
  twobit_const( 3 );
  twobit_skip( 1011, compiled_block_1_1011 );
  twobit_label( 1012, compiled_block_1_1012 );
  twobit_movereg( 1, 3 );
  twobit_global( 4 ); /* map */
  twobit_setreg( 1 );
  twobit_global( 5 ); /* list */
  twobit_setreg( 2 );
  twobit_global( 6 ); /* apply */
  twobit_setrtn( 1013, compiled_block_1_1013 );
  twobit_invoke( 3 );
  twobit_label( 1013, compiled_block_1_1013 );
  twobit_load( 0, 0 );
  twobit_label( 1011, compiled_block_1_1011 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_label( 1009, compiled_block_1_1009 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_151( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_lexical( 1, 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1010, compiled_block_1_1010 );
  twobit_invoke( 5 );
  twobit_label( 1010, compiled_block_1_1010 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_pop( 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_139( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1024, compiled_block_1_1024 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1026, compiled_block_1_1026 ); /* internal:branchf-pair? */
  twobit_save( 9 );
  twobit_store( 0, 0 );
  twobit_store( 1, 9 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_movereg( 3, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1027, compiled_block_1_1027 );
  twobit_invoke( 1 );
  twobit_label( 1027, compiled_block_1_1027 );
  twobit_load( 0, 0 );
  twobit_branchf( 1029, compiled_block_1_1029 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1031, compiled_block_1_1031 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1033, compiled_block_1_1033 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_movereg( 2, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1034, compiled_block_1_1034 );
  twobit_invoke( 1 );
  twobit_label( 1034, compiled_block_1_1034 );
  twobit_load( 0, 0 );
  twobit_branchf( 1036, compiled_block_1_1036 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1038, compiled_block_1_1038 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_op1_branchf_610( 1040, compiled_block_1_1040 ); /* internal:branchf-null? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1042, compiled_block_1_1042 ); /* internal:branchf-null? */
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1043, compiled_block_1_1043 );
  twobit_invoke( 5 );
  twobit_label( 1043, compiled_block_1_1043 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1044, compiled_block_1_1044 );
  twobit_invoke( 5 );
  twobit_label( 1044, compiled_block_1_1044 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1045, compiled_block_1_1045 );
  twobit_invoke( 5 );
  twobit_label( 1045, compiled_block_1_1045 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1046, compiled_block_1_1046 );
  twobit_invoke( 5 );
  twobit_label( 1046, compiled_block_1_1046 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_load( 1, 2 );
  twobit_global( 9 ); /* length */
  twobit_setrtn( 1047, compiled_block_1_1047 );
  twobit_invoke( 1 );
  twobit_label( 1047, compiled_block_1_1047 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_load( 1, 3 );
  twobit_global( 9 ); /* length */
  twobit_setrtn( 1048, compiled_block_1_1048 );
  twobit_invoke( 1 );
  twobit_label( 1048, compiled_block_1_1048 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_branchf_623( 4, 147, compiled_temp_1_147, 1050, compiled_block_1_1050 ); /* internal:branchf-= */
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_setrtn( 1051, compiled_block_1_1051 );
  twobit_branch( 1020, compiled_block_1_1020 );
  twobit_label( 1051, compiled_block_1_1051 );
  twobit_load( 0, 0 );
  twobit_skip( 1049, compiled_block_1_1049 );
  twobit_label( 1050, compiled_block_1_1050 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 10 );
  twobit_setreg( 1 );
  twobit_const( 11 );
  twobit_setreg( 2 );
  twobit_const( 12 );
  twobit_setreg( 3 );
  twobit_global( 13 ); /* ex:syntax-violation */
  twobit_setrtn( 1052, compiled_block_1_1052 );
  twobit_invoke( 4 );
  twobit_label( 1052, compiled_block_1_1052 );
  twobit_load( 0, 0 );
  twobit_label( 1049, compiled_block_1_1049 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 14 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 15 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1053, compiled_block_1_1053 );
  twobit_invoke( 5 );
  twobit_label( 1053, compiled_block_1_1053 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_load( 3, 2 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_global( 16 ); /* append */
  twobit_setrtn( 1054, compiled_block_1_1054 );
  twobit_invoke( 2 );
  twobit_label( 1054, compiled_block_1_1054 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 9 );
  twobit_return();
  twobit_label( 1042, compiled_block_1_1042 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1021, compiled_block_1_1021 );
  twobit_label( 1040, compiled_block_1_1040 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1021, compiled_block_1_1021 );
  twobit_label( 1038, compiled_block_1_1038 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1021, compiled_block_1_1021 );
  twobit_label( 1036, compiled_block_1_1036 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1021, compiled_block_1_1021 );
  twobit_label( 1033, compiled_block_1_1033 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1021, compiled_block_1_1021 );
  twobit_label( 1031, compiled_block_1_1031 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1021, compiled_block_1_1021 );
  twobit_label( 1029, compiled_block_1_1029 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1021, compiled_block_1_1021 );
  twobit_label( 1026, compiled_block_1_1026 );
  twobit_branch( 1021, compiled_block_1_1021 );
  twobit_label( 1024, compiled_block_1_1024 );
  twobit_branch( 1021, compiled_block_1_1021 );
  twobit_label( 1020, compiled_block_1_1020 );
  twobit_reg( 1 );
  twobit_op1_10(); /* null? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1065, compiled_block_1_1065 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1064, compiled_block_1_1064 );
  twobit_label( 1065, compiled_block_1_1065 );
  twobit_reg( 2 );
  twobit_op1_10(); /* null? */
  twobit_label( 1064, compiled_block_1_1064 );
  twobit_branchf( 1067, compiled_block_1_1067 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_branchf( 1069, compiled_block_1_1069 );
  twobit_reg( 2 );
  twobit_op1_10(); /* null? */
  twobit_skip( 1068, compiled_block_1_1068 );
  twobit_label( 1069, compiled_block_1_1069 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1068, compiled_block_1_1068 );
  twobit_branchf( 1071, compiled_block_1_1071 );
  twobit_reg( 3 );
  twobit_skip( 1070, compiled_block_1_1070 );
  twobit_label( 1071, compiled_block_1_1071 );
  twobit_movereg( 2, 3 );
  twobit_movereg( 1, 2 );
  twobit_lambda( compiled_start_1_148, 18, 0 );
  twobit_setreg( 1 );
  twobit_global( 19 ); /* larceny:map */
  twobit_setrtn( 1076, compiled_block_1_1076 );
  twobit_invoke( 3 );
  twobit_label( 1076, compiled_block_1_1076 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 20 ); /* reverse */
  twobit_setrtn( 1077, compiled_block_1_1077 );
  twobit_invoke( 1 );
  twobit_label( 1077, compiled_block_1_1077 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 16 ); /* append */
  twobit_setrtn( 1078, compiled_block_1_1078 );
  twobit_invoke( 2 );
  twobit_label( 1078, compiled_block_1_1078 );
  twobit_load( 0, 0 );
  twobit_label( 1070, compiled_block_1_1070 );
  twobit_setreg( 1 );
  twobit_global( 20 ); /* reverse */
  twobit_pop( 1 );
  twobit_invoke( 1 );
  twobit_label( 1067, compiled_block_1_1067 );
  twobit_save( 8 );
  twobit_store( 0, 0 );
  twobit_store( 3, 8 );
  twobit_reg_op1_check_652(reg(1),1080,compiled_block_1_1080); /* internal:check-pair? with (1 0 0) */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg_op1_check_652(reg(2),1081,compiled_block_1_1081); /* internal:check-pair? with (2 0 0) */
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 3 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 1 );
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_store( 1, 6 );
  twobit_const( 21 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1082, compiled_block_1_1082 );
  twobit_invoke( 5 );
  twobit_label( 1082, compiled_block_1_1082 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_const( 22 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1083, compiled_block_1_1083 );
  twobit_invoke( 5 );
  twobit_label( 1083, compiled_block_1_1083 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_load( 3, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1084, compiled_block_1_1084 );
  twobit_invoke( 5 );
  twobit_label( 1084, compiled_block_1_1084 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1085, compiled_block_1_1085 );
  twobit_invoke( 5 );
  twobit_label( 1085, compiled_block_1_1085 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_load( 3, 8 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_pop( 8 );
  twobit_branch( 1020, compiled_block_1_1020 );
  twobit_label( 1021, compiled_block_1_1021 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1088, compiled_block_1_1088 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1090, compiled_block_1_1090 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1092, compiled_block_1_1092 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1094, compiled_block_1_1094 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1096, compiled_block_1_1096 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_reg( 30 );
  twobit_op1_branchf_611( 1098, compiled_block_1_1098 ); /* internal:branchf-pair? */
  twobit_reg( 30 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 29 );
  twobit_reg( 30 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 30 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1100, compiled_block_1_1100 ); /* internal:branchf-null? */
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 2, 3 );
  twobit_store( 3, 4 );
  twobit_store( 29, 5 );
  twobit_store( 30, 1 );
  twobit_store( 31, 2 );
  twobit_const( 23 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 24 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1101, compiled_block_1_1101 );
  twobit_invoke( 5 );
  twobit_label( 1101, compiled_block_1_1101 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_const( 25 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 24 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1102, compiled_block_1_1102 );
  twobit_invoke( 5 );
  twobit_label( 1102, compiled_block_1_1102 );
  twobit_load( 0, 0 );
  twobit_load( 3, 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 1100, compiled_block_1_1100 );
  twobit_global( 26 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1098, compiled_block_1_1098 );
  twobit_global( 26 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1096, compiled_block_1_1096 );
  twobit_global( 26 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1094, compiled_block_1_1094 );
  twobit_global( 26 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1092, compiled_block_1_1092 );
  twobit_global( 26 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1090, compiled_block_1_1090 );
  twobit_global( 26 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1088, compiled_block_1_1088 );
  twobit_global( 26 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1080, compiled_block_1_1080 );
  twobit_trap( 1, 0, 0, 1 );
  twobit_label( 1081, compiled_block_1_1081 );
  twobit_trap( 2, 0, 0, 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_148( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 4 );
  twobit_store( 2, 1 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1072, compiled_block_1_1072 );
  twobit_invoke( 5 );
  twobit_label( 1072, compiled_block_1_1072 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_const( 5 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1073, compiled_block_1_1073 );
  twobit_invoke( 5 );
  twobit_label( 1073, compiled_block_1_1073 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 3, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1074, compiled_block_1_1074 );
  twobit_invoke( 5 );
  twobit_label( 1074, compiled_block_1_1074 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1075, compiled_block_1_1075 );
  twobit_invoke( 5 );
  twobit_label( 1075, compiled_block_1_1075 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 5 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_140( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1112, compiled_block_1_1112 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1114, compiled_block_1_1114 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1116, compiled_block_1_1116 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1118, compiled_block_1_1118 ); /* internal:branchf-pair? */
  twobit_save( 7 );
  twobit_store( 0, 0 );
  twobit_store( 1, 7 );
  twobit_store( 2, 4 );
  twobit_store( 3, 5 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 3 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1119, compiled_block_1_1119 );
  twobit_invoke( 1 );
  twobit_label( 1119, compiled_block_1_1119 );
  twobit_load( 0, 0 );
  twobit_branchf( 1121, compiled_block_1_1121 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1123, compiled_block_1_1123 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1125, compiled_block_1_1125 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1127, compiled_block_1_1127 ); /* internal:branchf-null? */
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1128, compiled_block_1_1128 );
  twobit_invoke( 5 );
  twobit_label( 1128, compiled_block_1_1128 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_stack( 2 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 3 );
  twobit_global( 6 ); /* append */
  twobit_setrtn( 1129, compiled_block_1_1129 );
  twobit_invoke( 2 );
  twobit_label( 1129, compiled_block_1_1129 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 7 );
  twobit_return();
  twobit_label( 1127, compiled_block_1_1127 );
  twobit_load( 1, 7 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_pop( 7 );
  twobit_invoke( 1 );
  twobit_label( 1125, compiled_block_1_1125 );
  twobit_load( 1, 7 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_pop( 7 );
  twobit_invoke( 1 );
  twobit_label( 1123, compiled_block_1_1123 );
  twobit_load( 1, 7 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_pop( 7 );
  twobit_invoke( 1 );
  twobit_label( 1121, compiled_block_1_1121 );
  twobit_load( 1, 7 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_pop( 7 );
  twobit_invoke( 1 );
  twobit_label( 1118, compiled_block_1_1118 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1116, compiled_block_1_1116 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1114, compiled_block_1_1114 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1112, compiled_block_1_1112 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_141( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1153, compiled_block_1_1153 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1155, compiled_block_1_1155 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1157, compiled_block_1_1157 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1159, compiled_block_1_1159 ); /* internal:branchf-pair? */
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 5 );
  twobit_store( 2, 2 );
  twobit_store( 3, 4 );
  twobit_store( 4, 3 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* ex:identifier? */
  twobit_setrtn( 1160, compiled_block_1_1160 );
  twobit_invoke( 1 );
  twobit_label( 1160, compiled_block_1_1160 );
  twobit_load( 0, 0 );
  twobit_branchf( 1162, compiled_block_1_1162 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1163, compiled_block_1_1163 );
  twobit_invoke( 5 );
  twobit_label( 1163, compiled_block_1_1163 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* ex:free-identifier=? */
  twobit_setrtn( 1164, compiled_block_1_1164 );
  twobit_invoke( 2 );
  twobit_label( 1164, compiled_block_1_1164 );
  twobit_load( 0, 0 );
  twobit_skip( 1161, compiled_block_1_1161 );
  twobit_label( 1162, compiled_block_1_1162 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1161, compiled_block_1_1161 );
  twobit_branchf( 1166, compiled_block_1_1166 );
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1168, compiled_block_1_1168 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1170, compiled_block_1_1170 ); /* internal:branchf-null? */
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1172, compiled_block_1_1172 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_movereg( 2, 1 );
  twobit_global( 7 ); /* list? */
  twobit_setrtn( 1173, compiled_block_1_1173 );
  twobit_invoke( 1 );
  twobit_label( 1173, compiled_block_1_1173 );
  twobit_load( 0, 0 );
  twobit_branchf( 1175, compiled_block_1_1175 );
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1177, compiled_block_1_1177 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1178, compiled_block_1_1178 );
  twobit_invoke( 5 );
  twobit_label( 1178, compiled_block_1_1178 );
  twobit_load( 0, 0 );
  twobit_load( 3, 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_global( 8 ); /* append */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_label( 1177, compiled_block_1_1177 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1150, compiled_block_1_1150 );
  twobit_label( 1175, compiled_block_1_1175 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1150, compiled_block_1_1150 );
  twobit_label( 1172, compiled_block_1_1172 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1150, compiled_block_1_1150 );
  twobit_label( 1170, compiled_block_1_1170 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1150, compiled_block_1_1150 );
  twobit_label( 1168, compiled_block_1_1168 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1150, compiled_block_1_1150 );
  twobit_label( 1166, compiled_block_1_1166 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1150, compiled_block_1_1150 );
  twobit_label( 1159, compiled_block_1_1159 );
  twobit_branch( 1150, compiled_block_1_1150 );
  twobit_label( 1157, compiled_block_1_1157 );
  twobit_branch( 1150, compiled_block_1_1150 );
  twobit_label( 1155, compiled_block_1_1155 );
  twobit_branch( 1150, compiled_block_1_1150 );
  twobit_label( 1153, compiled_block_1_1153 );
  twobit_branch( 1150, compiled_block_1_1150 );
  twobit_label( 1139, compiled_block_1_1139 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1191, compiled_block_1_1191 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1193, compiled_block_1_1193 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1195, compiled_block_1_1195 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1197, compiled_block_1_1197 ); /* internal:branchf-pair? */
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 5 );
  twobit_store( 2, 3 );
  twobit_store( 3, 2 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 4 );
  twobit_movereg( 31, 1 );
  twobit_global( 7 ); /* list? */
  twobit_setrtn( 1198, compiled_block_1_1198 );
  twobit_invoke( 1 );
  twobit_label( 1198, compiled_block_1_1198 );
  twobit_load( 0, 0 );
  twobit_branchf( 1200, compiled_block_1_1200 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1202, compiled_block_1_1202 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 4 );
  twobit_global( 8 ); /* append */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_label( 1202, compiled_block_1_1202 );
  twobit_load( 1, 5 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_pop( 5 );
  twobit_invoke( 1 );
  twobit_label( 1200, compiled_block_1_1200 );
  twobit_load( 1, 5 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_pop( 5 );
  twobit_invoke( 1 );
  twobit_label( 1197, compiled_block_1_1197 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1195, compiled_block_1_1195 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1193, compiled_block_1_1193 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1191, compiled_block_1_1191 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1140, compiled_block_1_1140 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1211, compiled_block_1_1211 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1213, compiled_block_1_1213 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1215, compiled_block_1_1215 ); /* internal:branchf-pair? */
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_movereg( 3, 1 );
  twobit_global( 1 ); /* ex:identifier? */
  twobit_setrtn( 1216, compiled_block_1_1216 );
  twobit_invoke( 1 );
  twobit_label( 1216, compiled_block_1_1216 );
  twobit_load( 0, 0 );
  twobit_branchf( 1218, compiled_block_1_1218 );
  twobit_const( 10 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 11 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1219, compiled_block_1_1219 );
  twobit_invoke( 5 );
  twobit_label( 1219, compiled_block_1_1219 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* ex:free-identifier=? */
  twobit_setrtn( 1220, compiled_block_1_1220 );
  twobit_invoke( 2 );
  twobit_label( 1220, compiled_block_1_1220 );
  twobit_load( 0, 0 );
  twobit_skip( 1217, compiled_block_1_1217 );
  twobit_label( 1218, compiled_block_1_1218 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1217, compiled_block_1_1217 );
  twobit_branchf( 1222, compiled_block_1_1222 );
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1224, compiled_block_1_1224 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_movereg( 3, 1 );
  twobit_global( 7 ); /* list? */
  twobit_setrtn( 1225, compiled_block_1_1225 );
  twobit_invoke( 1 );
  twobit_label( 1225, compiled_block_1_1225 );
  twobit_load( 0, 0 );
  twobit_branchf( 1227, compiled_block_1_1227 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1229, compiled_block_1_1229 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_global( 8 ); /* append */
  twobit_pop( 3 );
  twobit_invoke( 2 );
  twobit_label( 1229, compiled_block_1_1229 );
  twobit_load( 1, 3 );
  twobit_pop( 3 );
  twobit_branch( 1139, compiled_block_1_1139 );
  twobit_label( 1227, compiled_block_1_1227 );
  twobit_load( 1, 3 );
  twobit_pop( 3 );
  twobit_branch( 1139, compiled_block_1_1139 );
  twobit_label( 1224, compiled_block_1_1224 );
  twobit_load( 1, 3 );
  twobit_pop( 3 );
  twobit_branch( 1139, compiled_block_1_1139 );
  twobit_label( 1222, compiled_block_1_1222 );
  twobit_load( 1, 3 );
  twobit_pop( 3 );
  twobit_branch( 1139, compiled_block_1_1139 );
  twobit_label( 1215, compiled_block_1_1215 );
  twobit_branch( 1139, compiled_block_1_1139 );
  twobit_label( 1213, compiled_block_1_1213 );
  twobit_branch( 1139, compiled_block_1_1139 );
  twobit_label( 1211, compiled_block_1_1211 );
  twobit_branch( 1139, compiled_block_1_1139 );
  twobit_label( 1141, compiled_block_1_1141 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1239, compiled_block_1_1239 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1241, compiled_block_1_1241 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1243, compiled_block_1_1243 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1245, compiled_block_1_1245 ); /* internal:branchf-pair? */
  twobit_save( 9 );
  twobit_store( 0, 0 );
  twobit_store( 1, 9 );
  twobit_store( 2, 2 );
  twobit_store( 3, 6 );
  twobit_store( 4, 3 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* ex:identifier? */
  twobit_setrtn( 1246, compiled_block_1_1246 );
  twobit_invoke( 1 );
  twobit_label( 1246, compiled_block_1_1246 );
  twobit_load( 0, 0 );
  twobit_branchf( 1248, compiled_block_1_1248 );
  twobit_const( 12 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1249, compiled_block_1_1249 );
  twobit_invoke( 5 );
  twobit_label( 1249, compiled_block_1_1249 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* ex:free-identifier=? */
  twobit_setrtn( 1250, compiled_block_1_1250 );
  twobit_invoke( 2 );
  twobit_label( 1250, compiled_block_1_1250 );
  twobit_load( 0, 0 );
  twobit_skip( 1247, compiled_block_1_1247 );
  twobit_label( 1248, compiled_block_1_1248 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1247, compiled_block_1_1247 );
  twobit_branchf( 1252, compiled_block_1_1252 );
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1254, compiled_block_1_1254 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1256, compiled_block_1_1256 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1258, compiled_block_1_1258 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_store( 1, 4 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1260, compiled_block_1_1260 ); /* internal:branchf-null? */
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1262, compiled_block_1_1262 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1264, compiled_block_1_1264 ); /* internal:branchf-null? */
  twobit_const( 14 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1265, compiled_block_1_1265 );
  twobit_invoke( 5 );
  twobit_label( 1265, compiled_block_1_1265 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 15 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1266, compiled_block_1_1266 );
  twobit_invoke( 5 );
  twobit_label( 1266, compiled_block_1_1266 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 16 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1267, compiled_block_1_1267 );
  twobit_invoke( 5 );
  twobit_label( 1267, compiled_block_1_1267 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 17 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1268, compiled_block_1_1268 );
  twobit_invoke( 5 );
  twobit_label( 1268, compiled_block_1_1268 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_const( 18 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1269, compiled_block_1_1269 );
  twobit_invoke( 5 );
  twobit_label( 1269, compiled_block_1_1269 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_const( 19 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1270, compiled_block_1_1270 );
  twobit_invoke( 5 );
  twobit_label( 1270, compiled_block_1_1270 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 15 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1271, compiled_block_1_1271 );
  twobit_invoke( 5 );
  twobit_label( 1271, compiled_block_1_1271 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 16 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1272, compiled_block_1_1272 );
  twobit_invoke( 5 );
  twobit_label( 1272, compiled_block_1_1272 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 5 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 5 );
  twobit_const( 17 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1273, compiled_block_1_1273 );
  twobit_invoke( 5 );
  twobit_label( 1273, compiled_block_1_1273 );
  twobit_load( 0, 0 );
  twobit_load( 3, 5 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 9 );
  twobit_return();
  twobit_label( 1264, compiled_block_1_1264 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1140, compiled_block_1_1140 );
  twobit_label( 1262, compiled_block_1_1262 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1140, compiled_block_1_1140 );
  twobit_label( 1260, compiled_block_1_1260 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1140, compiled_block_1_1140 );
  twobit_label( 1258, compiled_block_1_1258 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1140, compiled_block_1_1140 );
  twobit_label( 1256, compiled_block_1_1256 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1140, compiled_block_1_1140 );
  twobit_label( 1254, compiled_block_1_1254 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1140, compiled_block_1_1140 );
  twobit_label( 1252, compiled_block_1_1252 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1140, compiled_block_1_1140 );
  twobit_label( 1245, compiled_block_1_1245 );
  twobit_branch( 1140, compiled_block_1_1140 );
  twobit_label( 1243, compiled_block_1_1243 );
  twobit_branch( 1140, compiled_block_1_1140 );
  twobit_label( 1241, compiled_block_1_1241 );
  twobit_branch( 1140, compiled_block_1_1140 );
  twobit_label( 1239, compiled_block_1_1239 );
  twobit_branch( 1140, compiled_block_1_1140 );
  twobit_label( 1142, compiled_block_1_1142 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1286, compiled_block_1_1286 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1288, compiled_block_1_1288 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1290, compiled_block_1_1290 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1292, compiled_block_1_1292 ); /* internal:branchf-pair? */
  twobit_save( 9 );
  twobit_store( 0, 0 );
  twobit_store( 1, 9 );
  twobit_store( 2, 2 );
  twobit_store( 3, 6 );
  twobit_store( 4, 3 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* ex:identifier? */
  twobit_setrtn( 1293, compiled_block_1_1293 );
  twobit_invoke( 1 );
  twobit_label( 1293, compiled_block_1_1293 );
  twobit_load( 0, 0 );
  twobit_branchf( 1295, compiled_block_1_1295 );
  twobit_const( 20 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 21 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1296, compiled_block_1_1296 );
  twobit_invoke( 5 );
  twobit_label( 1296, compiled_block_1_1296 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* ex:free-identifier=? */
  twobit_setrtn( 1297, compiled_block_1_1297 );
  twobit_invoke( 2 );
  twobit_label( 1297, compiled_block_1_1297 );
  twobit_load( 0, 0 );
  twobit_skip( 1294, compiled_block_1_1294 );
  twobit_label( 1295, compiled_block_1_1295 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1294, compiled_block_1_1294 );
  twobit_branchf( 1299, compiled_block_1_1299 );
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1301, compiled_block_1_1301 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1303, compiled_block_1_1303 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1305, compiled_block_1_1305 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_store( 1, 4 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1307, compiled_block_1_1307 ); /* internal:branchf-null? */
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1309, compiled_block_1_1309 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1311, compiled_block_1_1311 ); /* internal:branchf-null? */
  twobit_const( 14 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 21 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1312, compiled_block_1_1312 );
  twobit_invoke( 5 );
  twobit_label( 1312, compiled_block_1_1312 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 15 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 21 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1313, compiled_block_1_1313 );
  twobit_invoke( 5 );
  twobit_label( 1313, compiled_block_1_1313 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 16 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 21 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1314, compiled_block_1_1314 );
  twobit_invoke( 5 );
  twobit_label( 1314, compiled_block_1_1314 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 17 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 21 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1315, compiled_block_1_1315 );
  twobit_invoke( 5 );
  twobit_label( 1315, compiled_block_1_1315 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_const( 18 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 21 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1316, compiled_block_1_1316 );
  twobit_invoke( 5 );
  twobit_label( 1316, compiled_block_1_1316 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_const( 22 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 21 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1317, compiled_block_1_1317 );
  twobit_invoke( 5 );
  twobit_label( 1317, compiled_block_1_1317 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 15 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 21 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1318, compiled_block_1_1318 );
  twobit_invoke( 5 );
  twobit_label( 1318, compiled_block_1_1318 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 16 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 21 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1319, compiled_block_1_1319 );
  twobit_invoke( 5 );
  twobit_label( 1319, compiled_block_1_1319 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 5 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 5 );
  twobit_const( 17 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 21 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1320, compiled_block_1_1320 );
  twobit_invoke( 5 );
  twobit_label( 1320, compiled_block_1_1320 );
  twobit_load( 0, 0 );
  twobit_load( 3, 5 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 9 );
  twobit_return();
  twobit_label( 1311, compiled_block_1_1311 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1141, compiled_block_1_1141 );
  twobit_label( 1309, compiled_block_1_1309 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1141, compiled_block_1_1141 );
  twobit_label( 1307, compiled_block_1_1307 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1141, compiled_block_1_1141 );
  twobit_label( 1305, compiled_block_1_1305 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1141, compiled_block_1_1141 );
  twobit_label( 1303, compiled_block_1_1303 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1141, compiled_block_1_1141 );
  twobit_label( 1301, compiled_block_1_1301 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1141, compiled_block_1_1141 );
  twobit_label( 1299, compiled_block_1_1299 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1141, compiled_block_1_1141 );
  twobit_label( 1292, compiled_block_1_1292 );
  twobit_branch( 1141, compiled_block_1_1141 );
  twobit_label( 1290, compiled_block_1_1290 );
  twobit_branch( 1141, compiled_block_1_1141 );
  twobit_label( 1288, compiled_block_1_1288 );
  twobit_branch( 1141, compiled_block_1_1141 );
  twobit_label( 1286, compiled_block_1_1286 );
  twobit_branch( 1141, compiled_block_1_1141 );
  twobit_label( 1143, compiled_block_1_1143 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1333, compiled_block_1_1333 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1335, compiled_block_1_1335 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1337, compiled_block_1_1337 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1339, compiled_block_1_1339 ); /* internal:branchf-pair? */
  twobit_save( 9 );
  twobit_store( 0, 0 );
  twobit_store( 1, 9 );
  twobit_store( 2, 2 );
  twobit_store( 3, 6 );
  twobit_store( 4, 3 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* ex:identifier? */
  twobit_setrtn( 1340, compiled_block_1_1340 );
  twobit_invoke( 1 );
  twobit_label( 1340, compiled_block_1_1340 );
  twobit_load( 0, 0 );
  twobit_branchf( 1342, compiled_block_1_1342 );
  twobit_const( 23 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 24 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1343, compiled_block_1_1343 );
  twobit_invoke( 5 );
  twobit_label( 1343, compiled_block_1_1343 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* ex:free-identifier=? */
  twobit_setrtn( 1344, compiled_block_1_1344 );
  twobit_invoke( 2 );
  twobit_label( 1344, compiled_block_1_1344 );
  twobit_load( 0, 0 );
  twobit_skip( 1341, compiled_block_1_1341 );
  twobit_label( 1342, compiled_block_1_1342 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1341, compiled_block_1_1341 );
  twobit_branchf( 1346, compiled_block_1_1346 );
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1348, compiled_block_1_1348 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1350, compiled_block_1_1350 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1352, compiled_block_1_1352 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_store( 1, 4 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1354, compiled_block_1_1354 ); /* internal:branchf-null? */
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1356, compiled_block_1_1356 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1358, compiled_block_1_1358 ); /* internal:branchf-null? */
  twobit_const( 14 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 24 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1359, compiled_block_1_1359 );
  twobit_invoke( 5 );
  twobit_label( 1359, compiled_block_1_1359 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 15 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 24 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1360, compiled_block_1_1360 );
  twobit_invoke( 5 );
  twobit_label( 1360, compiled_block_1_1360 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 16 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 24 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1361, compiled_block_1_1361 );
  twobit_invoke( 5 );
  twobit_label( 1361, compiled_block_1_1361 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 17 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 24 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1362, compiled_block_1_1362 );
  twobit_invoke( 5 );
  twobit_label( 1362, compiled_block_1_1362 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_const( 18 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 24 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1363, compiled_block_1_1363 );
  twobit_invoke( 5 );
  twobit_label( 1363, compiled_block_1_1363 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 24 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1364, compiled_block_1_1364 );
  twobit_invoke( 5 );
  twobit_label( 1364, compiled_block_1_1364 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 15 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 24 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1365, compiled_block_1_1365 );
  twobit_invoke( 5 );
  twobit_label( 1365, compiled_block_1_1365 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 16 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 24 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1366, compiled_block_1_1366 );
  twobit_invoke( 5 );
  twobit_label( 1366, compiled_block_1_1366 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 5 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 5 );
  twobit_const( 17 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 24 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1367, compiled_block_1_1367 );
  twobit_invoke( 5 );
  twobit_label( 1367, compiled_block_1_1367 );
  twobit_load( 0, 0 );
  twobit_load( 3, 5 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 9 );
  twobit_return();
  twobit_label( 1358, compiled_block_1_1358 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1142, compiled_block_1_1142 );
  twobit_label( 1356, compiled_block_1_1356 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1142, compiled_block_1_1142 );
  twobit_label( 1354, compiled_block_1_1354 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1142, compiled_block_1_1142 );
  twobit_label( 1352, compiled_block_1_1352 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1142, compiled_block_1_1142 );
  twobit_label( 1350, compiled_block_1_1350 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1142, compiled_block_1_1142 );
  twobit_label( 1348, compiled_block_1_1348 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1142, compiled_block_1_1142 );
  twobit_label( 1346, compiled_block_1_1346 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1142, compiled_block_1_1142 );
  twobit_label( 1339, compiled_block_1_1339 );
  twobit_branch( 1142, compiled_block_1_1142 );
  twobit_label( 1337, compiled_block_1_1337 );
  twobit_branch( 1142, compiled_block_1_1142 );
  twobit_label( 1335, compiled_block_1_1335 );
  twobit_branch( 1142, compiled_block_1_1142 );
  twobit_label( 1333, compiled_block_1_1333 );
  twobit_branch( 1142, compiled_block_1_1142 );
  twobit_label( 1144, compiled_block_1_1144 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1380, compiled_block_1_1380 ); /* internal:branchf-null? */
  twobit_movereg( 2, 1 );
  twobit_global( 25 ); /* reverse */
  twobit_invoke( 1 );
  twobit_label( 1380, compiled_block_1_1380 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 2, 3 );
  twobit_reg_op1_check_652(reg(1),1382,compiled_block_1_1382); /* internal:check-pair? with (1 0 0) */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_imm_const_setreg( NIL_CONST, 1 ); /* () */
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 26 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 27 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1383, compiled_block_1_1383 );
  twobit_invoke( 5 );
  twobit_label( 1383, compiled_block_1_1383 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_load( 3, 2 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_load( 3, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_pop( 3 );
  twobit_branch( 1144, compiled_block_1_1144 );
  twobit_label( 1145, compiled_block_1_1145 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1386, compiled_block_1_1386 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1388, compiled_block_1_1388 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1390, compiled_block_1_1390 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1392, compiled_block_1_1392 ); /* internal:branchf-pair? */
  twobit_save( 9 );
  twobit_store( 0, 0 );
  twobit_store( 1, 9 );
  twobit_store( 2, 2 );
  twobit_store( 3, 7 );
  twobit_store( 4, 3 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* ex:identifier? */
  twobit_setrtn( 1393, compiled_block_1_1393 );
  twobit_invoke( 1 );
  twobit_label( 1393, compiled_block_1_1393 );
  twobit_load( 0, 0 );
  twobit_branchf( 1395, compiled_block_1_1395 );
  twobit_const( 28 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 29 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1396, compiled_block_1_1396 );
  twobit_invoke( 5 );
  twobit_label( 1396, compiled_block_1_1396 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* ex:free-identifier=? */
  twobit_setrtn( 1397, compiled_block_1_1397 );
  twobit_invoke( 2 );
  twobit_label( 1397, compiled_block_1_1397 );
  twobit_load( 0, 0 );
  twobit_skip( 1394, compiled_block_1_1394 );
  twobit_label( 1395, compiled_block_1_1395 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1394, compiled_block_1_1394 );
  twobit_branchf( 1399, compiled_block_1_1399 );
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1401, compiled_block_1_1401 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1403, compiled_block_1_1403 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 4 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1405, compiled_block_1_1405 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_store( 1, 5 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1407, compiled_block_1_1407 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1409, compiled_block_1_1409 ); /* internal:branchf-null? */
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1411, compiled_block_1_1411 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1413, compiled_block_1_1413 ); /* internal:branchf-null? */
  twobit_const( 14 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 29 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1414, compiled_block_1_1414 );
  twobit_invoke( 5 );
  twobit_label( 1414, compiled_block_1_1414 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 30 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 29 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1415, compiled_block_1_1415 );
  twobit_invoke( 5 );
  twobit_label( 1415, compiled_block_1_1415 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 15 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 29 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1416, compiled_block_1_1416 );
  twobit_invoke( 5 );
  twobit_label( 1416, compiled_block_1_1416 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 5 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 16 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 29 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1417, compiled_block_1_1417 );
  twobit_invoke( 5 );
  twobit_label( 1417, compiled_block_1_1417 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 6 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 17 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 29 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1418, compiled_block_1_1418 );
  twobit_invoke( 5 );
  twobit_label( 1418, compiled_block_1_1418 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_const( 31 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 29 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1419, compiled_block_1_1419 );
  twobit_invoke( 5 );
  twobit_label( 1419, compiled_block_1_1419 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_const( 30 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 29 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1420, compiled_block_1_1420 );
  twobit_invoke( 5 );
  twobit_label( 1420, compiled_block_1_1420 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 15 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 29 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1421, compiled_block_1_1421 );
  twobit_invoke( 5 );
  twobit_label( 1421, compiled_block_1_1421 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_const( 16 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 29 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1422, compiled_block_1_1422 );
  twobit_invoke( 5 );
  twobit_label( 1422, compiled_block_1_1422 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 17 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 29 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1423, compiled_block_1_1423 );
  twobit_invoke( 5 );
  twobit_label( 1423, compiled_block_1_1423 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 9 );
  twobit_return();
  twobit_label( 1413, compiled_block_1_1413 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1143, compiled_block_1_1143 );
  twobit_label( 1411, compiled_block_1_1411 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1143, compiled_block_1_1143 );
  twobit_label( 1409, compiled_block_1_1409 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1143, compiled_block_1_1143 );
  twobit_label( 1407, compiled_block_1_1407 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1143, compiled_block_1_1143 );
  twobit_label( 1405, compiled_block_1_1405 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1143, compiled_block_1_1143 );
  twobit_label( 1403, compiled_block_1_1403 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1143, compiled_block_1_1143 );
  twobit_label( 1401, compiled_block_1_1401 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1143, compiled_block_1_1143 );
  twobit_label( 1399, compiled_block_1_1399 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1143, compiled_block_1_1143 );
  twobit_label( 1392, compiled_block_1_1392 );
  twobit_branch( 1143, compiled_block_1_1143 );
  twobit_label( 1390, compiled_block_1_1390 );
  twobit_branch( 1143, compiled_block_1_1143 );
  twobit_label( 1388, compiled_block_1_1388 );
  twobit_branch( 1143, compiled_block_1_1143 );
  twobit_label( 1386, compiled_block_1_1386 );
  twobit_branch( 1143, compiled_block_1_1143 );
  twobit_label( 1146, compiled_block_1_1146 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1437, compiled_block_1_1437 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1439, compiled_block_1_1439 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1441, compiled_block_1_1441 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1443, compiled_block_1_1443 ); /* internal:branchf-pair? */
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 6 );
  twobit_store( 2, 2 );
  twobit_store( 3, 4 );
  twobit_store( 4, 3 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* ex:identifier? */
  twobit_setrtn( 1444, compiled_block_1_1444 );
  twobit_invoke( 1 );
  twobit_label( 1444, compiled_block_1_1444 );
  twobit_load( 0, 0 );
  twobit_branchf( 1446, compiled_block_1_1446 );
  twobit_const( 32 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 27 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1447, compiled_block_1_1447 );
  twobit_invoke( 5 );
  twobit_label( 1447, compiled_block_1_1447 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* ex:free-identifier=? */
  twobit_setrtn( 1448, compiled_block_1_1448 );
  twobit_invoke( 2 );
  twobit_label( 1448, compiled_block_1_1448 );
  twobit_load( 0, 0 );
  twobit_skip( 1445, compiled_block_1_1445 );
  twobit_label( 1446, compiled_block_1_1446 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1445, compiled_block_1_1445 );
  twobit_branchf( 1450, compiled_block_1_1450 );
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_movereg( 4, 1 );
  twobit_global( 7 ); /* list? */
  twobit_setrtn( 1451, compiled_block_1_1451 );
  twobit_invoke( 1 );
  twobit_label( 1451, compiled_block_1_1451 );
  twobit_load( 0, 0 );
  twobit_branchf( 1453, compiled_block_1_1453 );
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1455, compiled_block_1_1455 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1457, compiled_block_1_1457 ); /* internal:branchf-null? */
  twobit_const( 14 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 27 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1458, compiled_block_1_1458 );
  twobit_invoke( 5 );
  twobit_label( 1458, compiled_block_1_1458 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_load( 1, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_setrtn( 1459, compiled_block_1_1459 );
  twobit_branch( 1144, compiled_block_1_1144 );
  twobit_label( 1459, compiled_block_1_1459 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 33 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 27 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1460, compiled_block_1_1460 );
  twobit_invoke( 5 );
  twobit_label( 1460, compiled_block_1_1460 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_const( 26 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 27 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1461, compiled_block_1_1461 );
  twobit_invoke( 5 );
  twobit_label( 1461, compiled_block_1_1461 );
  twobit_load( 0, 0 );
  twobit_load( 3, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 1457, compiled_block_1_1457 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1145, compiled_block_1_1145 );
  twobit_label( 1455, compiled_block_1_1455 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1145, compiled_block_1_1145 );
  twobit_label( 1453, compiled_block_1_1453 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1145, compiled_block_1_1145 );
  twobit_label( 1450, compiled_block_1_1450 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1145, compiled_block_1_1145 );
  twobit_label( 1443, compiled_block_1_1443 );
  twobit_branch( 1145, compiled_block_1_1145 );
  twobit_label( 1441, compiled_block_1_1441 );
  twobit_branch( 1145, compiled_block_1_1145 );
  twobit_label( 1439, compiled_block_1_1439 );
  twobit_branch( 1145, compiled_block_1_1145 );
  twobit_label( 1437, compiled_block_1_1437 );
  twobit_branch( 1145, compiled_block_1_1145 );
  twobit_label( 1147, compiled_block_1_1147 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1471, compiled_block_1_1471 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1473, compiled_block_1_1473 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1475, compiled_block_1_1475 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1477, compiled_block_1_1477 ); /* internal:branchf-pair? */
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 5 );
  twobit_store( 2, 2 );
  twobit_store( 3, 4 );
  twobit_store( 4, 3 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* ex:identifier? */
  twobit_setrtn( 1478, compiled_block_1_1478 );
  twobit_invoke( 1 );
  twobit_label( 1478, compiled_block_1_1478 );
  twobit_load( 0, 0 );
  twobit_branchf( 1480, compiled_block_1_1480 );
  twobit_const( 12 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 34 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1481, compiled_block_1_1481 );
  twobit_invoke( 5 );
  twobit_label( 1481, compiled_block_1_1481 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* ex:free-identifier=? */
  twobit_setrtn( 1482, compiled_block_1_1482 );
  twobit_invoke( 2 );
  twobit_label( 1482, compiled_block_1_1482 );
  twobit_load( 0, 0 );
  twobit_skip( 1479, compiled_block_1_1479 );
  twobit_label( 1480, compiled_block_1_1480 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1479, compiled_block_1_1479 );
  twobit_branchf( 1484, compiled_block_1_1484 );
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1486, compiled_block_1_1486 ); /* internal:branchf-null? */
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1488, compiled_block_1_1488 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_movereg( 3, 1 );
  twobit_global( 7 ); /* list? */
  twobit_setrtn( 1489, compiled_block_1_1489 );
  twobit_invoke( 1 );
  twobit_label( 1489, compiled_block_1_1489 );
  twobit_load( 0, 0 );
  twobit_branchf( 1491, compiled_block_1_1491 );
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1493, compiled_block_1_1493 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_const( 19 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 34 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1494, compiled_block_1_1494 );
  twobit_invoke( 5 );
  twobit_label( 1494, compiled_block_1_1494 );
  twobit_load( 0, 0 );
  twobit_load( 3, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 35 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 34 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1495, compiled_block_1_1495 );
  twobit_invoke( 5 );
  twobit_label( 1495, compiled_block_1_1495 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_const( 36 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 34 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1496, compiled_block_1_1496 );
  twobit_invoke( 5 );
  twobit_label( 1496, compiled_block_1_1496 );
  twobit_load( 0, 0 );
  twobit_load( 3, 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_global( 8 ); /* append */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_label( 1493, compiled_block_1_1493 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1146, compiled_block_1_1146 );
  twobit_label( 1491, compiled_block_1_1491 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1146, compiled_block_1_1146 );
  twobit_label( 1488, compiled_block_1_1488 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1146, compiled_block_1_1146 );
  twobit_label( 1486, compiled_block_1_1486 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1146, compiled_block_1_1146 );
  twobit_label( 1484, compiled_block_1_1484 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1146, compiled_block_1_1146 );
  twobit_label( 1477, compiled_block_1_1477 );
  twobit_branch( 1146, compiled_block_1_1146 );
  twobit_label( 1475, compiled_block_1_1475 );
  twobit_branch( 1146, compiled_block_1_1146 );
  twobit_label( 1473, compiled_block_1_1473 );
  twobit_branch( 1146, compiled_block_1_1146 );
  twobit_label( 1471, compiled_block_1_1471 );
  twobit_branch( 1146, compiled_block_1_1146 );
  twobit_label( 1148, compiled_block_1_1148 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1508, compiled_block_1_1508 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1510, compiled_block_1_1510 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1512, compiled_block_1_1512 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1514, compiled_block_1_1514 ); /* internal:branchf-pair? */
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 5 );
  twobit_store( 2, 2 );
  twobit_store( 3, 4 );
  twobit_store( 4, 3 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* ex:identifier? */
  twobit_setrtn( 1515, compiled_block_1_1515 );
  twobit_invoke( 1 );
  twobit_label( 1515, compiled_block_1_1515 );
  twobit_load( 0, 0 );
  twobit_branchf( 1517, compiled_block_1_1517 );
  twobit_const( 20 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 37 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1518, compiled_block_1_1518 );
  twobit_invoke( 5 );
  twobit_label( 1518, compiled_block_1_1518 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* ex:free-identifier=? */
  twobit_setrtn( 1519, compiled_block_1_1519 );
  twobit_invoke( 2 );
  twobit_label( 1519, compiled_block_1_1519 );
  twobit_load( 0, 0 );
  twobit_skip( 1516, compiled_block_1_1516 );
  twobit_label( 1517, compiled_block_1_1517 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1516, compiled_block_1_1516 );
  twobit_branchf( 1521, compiled_block_1_1521 );
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1523, compiled_block_1_1523 ); /* internal:branchf-null? */
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1525, compiled_block_1_1525 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_movereg( 3, 1 );
  twobit_global( 7 ); /* list? */
  twobit_setrtn( 1526, compiled_block_1_1526 );
  twobit_invoke( 1 );
  twobit_label( 1526, compiled_block_1_1526 );
  twobit_load( 0, 0 );
  twobit_branchf( 1528, compiled_block_1_1528 );
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1530, compiled_block_1_1530 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_const( 22 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 37 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1531, compiled_block_1_1531 );
  twobit_invoke( 5 );
  twobit_label( 1531, compiled_block_1_1531 );
  twobit_load( 0, 0 );
  twobit_load( 3, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 35 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 37 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1532, compiled_block_1_1532 );
  twobit_invoke( 5 );
  twobit_label( 1532, compiled_block_1_1532 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_const( 36 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 37 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1533, compiled_block_1_1533 );
  twobit_invoke( 5 );
  twobit_label( 1533, compiled_block_1_1533 );
  twobit_load( 0, 0 );
  twobit_load( 3, 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_global( 8 ); /* append */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_label( 1530, compiled_block_1_1530 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1147, compiled_block_1_1147 );
  twobit_label( 1528, compiled_block_1_1528 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1147, compiled_block_1_1147 );
  twobit_label( 1525, compiled_block_1_1525 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1147, compiled_block_1_1147 );
  twobit_label( 1523, compiled_block_1_1523 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1147, compiled_block_1_1147 );
  twobit_label( 1521, compiled_block_1_1521 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1147, compiled_block_1_1147 );
  twobit_label( 1514, compiled_block_1_1514 );
  twobit_branch( 1147, compiled_block_1_1147 );
  twobit_label( 1512, compiled_block_1_1512 );
  twobit_branch( 1147, compiled_block_1_1147 );
  twobit_label( 1510, compiled_block_1_1510 );
  twobit_branch( 1147, compiled_block_1_1147 );
  twobit_label( 1508, compiled_block_1_1508 );
  twobit_branch( 1147, compiled_block_1_1147 );
  twobit_label( 1149, compiled_block_1_1149 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1545, compiled_block_1_1545 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1547, compiled_block_1_1547 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1549, compiled_block_1_1549 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1551, compiled_block_1_1551 ); /* internal:branchf-pair? */
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 5 );
  twobit_store( 2, 2 );
  twobit_store( 3, 4 );
  twobit_store( 4, 3 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* ex:identifier? */
  twobit_setrtn( 1552, compiled_block_1_1552 );
  twobit_invoke( 1 );
  twobit_label( 1552, compiled_block_1_1552 );
  twobit_load( 0, 0 );
  twobit_branchf( 1554, compiled_block_1_1554 );
  twobit_const( 19 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 38 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1555, compiled_block_1_1555 );
  twobit_invoke( 5 );
  twobit_label( 1555, compiled_block_1_1555 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* ex:free-identifier=? */
  twobit_setrtn( 1556, compiled_block_1_1556 );
  twobit_invoke( 2 );
  twobit_label( 1556, compiled_block_1_1556 );
  twobit_load( 0, 0 );
  twobit_skip( 1553, compiled_block_1_1553 );
  twobit_label( 1554, compiled_block_1_1554 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1553, compiled_block_1_1553 );
  twobit_branchf( 1558, compiled_block_1_1558 );
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1560, compiled_block_1_1560 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1562, compiled_block_1_1562 ); /* internal:branchf-null? */
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1564, compiled_block_1_1564 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_movereg( 2, 1 );
  twobit_global( 7 ); /* list? */
  twobit_setrtn( 1565, compiled_block_1_1565 );
  twobit_invoke( 1 );
  twobit_label( 1565, compiled_block_1_1565 );
  twobit_load( 0, 0 );
  twobit_branchf( 1567, compiled_block_1_1567 );
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1569, compiled_block_1_1569 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_const( 19 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 38 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1570, compiled_block_1_1570 );
  twobit_invoke( 5 );
  twobit_label( 1570, compiled_block_1_1570 );
  twobit_load( 0, 0 );
  twobit_load( 3, 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_global( 8 ); /* append */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_label( 1569, compiled_block_1_1569 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1148, compiled_block_1_1148 );
  twobit_label( 1567, compiled_block_1_1567 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1148, compiled_block_1_1148 );
  twobit_label( 1564, compiled_block_1_1564 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1148, compiled_block_1_1148 );
  twobit_label( 1562, compiled_block_1_1562 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1148, compiled_block_1_1148 );
  twobit_label( 1560, compiled_block_1_1560 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1148, compiled_block_1_1148 );
  twobit_label( 1558, compiled_block_1_1558 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1148, compiled_block_1_1148 );
  twobit_label( 1551, compiled_block_1_1551 );
  twobit_branch( 1148, compiled_block_1_1148 );
  twobit_label( 1549, compiled_block_1_1549 );
  twobit_branch( 1148, compiled_block_1_1148 );
  twobit_label( 1547, compiled_block_1_1547 );
  twobit_branch( 1148, compiled_block_1_1148 );
  twobit_label( 1545, compiled_block_1_1545 );
  twobit_branch( 1148, compiled_block_1_1148 );
  twobit_label( 1150, compiled_block_1_1150 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1583, compiled_block_1_1583 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1585, compiled_block_1_1585 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1587, compiled_block_1_1587 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1589, compiled_block_1_1589 ); /* internal:branchf-pair? */
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 5 );
  twobit_store( 2, 2 );
  twobit_store( 3, 4 );
  twobit_store( 4, 3 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* ex:identifier? */
  twobit_setrtn( 1590, compiled_block_1_1590 );
  twobit_invoke( 1 );
  twobit_label( 1590, compiled_block_1_1590 );
  twobit_load( 0, 0 );
  twobit_branchf( 1592, compiled_block_1_1592 );
  twobit_const( 22 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 39 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1593, compiled_block_1_1593 );
  twobit_invoke( 5 );
  twobit_label( 1593, compiled_block_1_1593 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* ex:free-identifier=? */
  twobit_setrtn( 1594, compiled_block_1_1594 );
  twobit_invoke( 2 );
  twobit_label( 1594, compiled_block_1_1594 );
  twobit_load( 0, 0 );
  twobit_skip( 1591, compiled_block_1_1591 );
  twobit_label( 1592, compiled_block_1_1592 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1591, compiled_block_1_1591 );
  twobit_branchf( 1596, compiled_block_1_1596 );
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1598, compiled_block_1_1598 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1600, compiled_block_1_1600 ); /* internal:branchf-null? */
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1602, compiled_block_1_1602 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_movereg( 2, 1 );
  twobit_global( 7 ); /* list? */
  twobit_setrtn( 1603, compiled_block_1_1603 );
  twobit_invoke( 1 );
  twobit_label( 1603, compiled_block_1_1603 );
  twobit_load( 0, 0 );
  twobit_branchf( 1605, compiled_block_1_1605 );
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1607, compiled_block_1_1607 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_const( 22 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 39 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1608, compiled_block_1_1608 );
  twobit_invoke( 5 );
  twobit_label( 1608, compiled_block_1_1608 );
  twobit_load( 0, 0 );
  twobit_load( 3, 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_global( 8 ); /* append */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_label( 1607, compiled_block_1_1607 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1149, compiled_block_1_1149 );
  twobit_label( 1605, compiled_block_1_1605 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1149, compiled_block_1_1149 );
  twobit_label( 1602, compiled_block_1_1602 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1149, compiled_block_1_1149 );
  twobit_label( 1600, compiled_block_1_1600 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1149, compiled_block_1_1149 );
  twobit_label( 1598, compiled_block_1_1598 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1149, compiled_block_1_1149 );
  twobit_label( 1596, compiled_block_1_1596 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1149, compiled_block_1_1149 );
  twobit_label( 1589, compiled_block_1_1589 );
  twobit_branch( 1149, compiled_block_1_1149 );
  twobit_label( 1587, compiled_block_1_1587 );
  twobit_branch( 1149, compiled_block_1_1149 );
  twobit_label( 1585, compiled_block_1_1585 );
  twobit_branch( 1149, compiled_block_1_1149 );
  twobit_label( 1583, compiled_block_1_1583 );
  twobit_branch( 1149, compiled_block_1_1149 );
  twobit_label( 1382, compiled_block_1_1382 );
  twobit_trap( 1, 0, 0, 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_142( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1622, compiled_block_1_1622 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1624, compiled_block_1_1624 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1626, compiled_block_1_1626 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1628, compiled_block_1_1628 ); /* internal:branchf-pair? */
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 5 );
  twobit_store( 2, 3 );
  twobit_store( 3, 2 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 4 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1629, compiled_block_1_1629 );
  twobit_invoke( 1 );
  twobit_label( 1629, compiled_block_1_1629 );
  twobit_load( 0, 0 );
  twobit_branchf( 1631, compiled_block_1_1631 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1633, compiled_block_1_1633 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1635, compiled_block_1_1635 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 2 ); /* () */
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 4 );
  twobit_global( 2 ); /* append */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_label( 1635, compiled_block_1_1635 );
  twobit_load( 1, 5 );
  twobit_global( 3 ); /* ex:invalid-form */
  twobit_pop( 5 );
  twobit_invoke( 1 );
  twobit_label( 1633, compiled_block_1_1633 );
  twobit_load( 1, 5 );
  twobit_global( 3 ); /* ex:invalid-form */
  twobit_pop( 5 );
  twobit_invoke( 1 );
  twobit_label( 1631, compiled_block_1_1631 );
  twobit_load( 1, 5 );
  twobit_global( 3 ); /* ex:invalid-form */
  twobit_pop( 5 );
  twobit_invoke( 1 );
  twobit_label( 1628, compiled_block_1_1628 );
  twobit_global( 3 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1626, compiled_block_1_1626 );
  twobit_global( 3 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1624, compiled_block_1_1624 );
  twobit_global( 3 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1622, compiled_block_1_1622 );
  twobit_global( 3 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_143( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1646, compiled_block_1_1646 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1648, compiled_block_1_1648 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1650, compiled_block_1_1650 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1652, compiled_block_1_1652 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1654, compiled_block_1_1654 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1656, compiled_block_1_1656 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 29 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1658, compiled_block_1_1658 ); /* internal:branchf-pair? */
  twobit_save( 10 );
  twobit_store( 0, 0 );
  twobit_store( 1, 10 );
  twobit_store( 2, 3 );
  twobit_store( 3, 2 );
  twobit_store( 4, 1 );
  twobit_store( 29, 6 );
  twobit_store( 30, 5 );
  twobit_store( 31, 4 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 28 );
  twobit_store( 28, 9 );
  twobit_movereg( 28, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1659, compiled_block_1_1659 );
  twobit_invoke( 1 );
  twobit_label( 1659, compiled_block_1_1659 );
  twobit_load( 0, 0 );
  twobit_branchf( 1661, compiled_block_1_1661 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1663, compiled_block_1_1663 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 7 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1665, compiled_block_1_1665 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1666, compiled_block_1_1666 );
  twobit_invoke( 5 );
  twobit_label( 1666, compiled_block_1_1666 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1667, compiled_block_1_1667 );
  twobit_invoke( 5 );
  twobit_label( 1667, compiled_block_1_1667 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1668, compiled_block_1_1668 );
  twobit_invoke( 5 );
  twobit_label( 1668, compiled_block_1_1668 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1669, compiled_block_1_1669 );
  twobit_invoke( 5 );
  twobit_label( 1669, compiled_block_1_1669 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1670, compiled_block_1_1670 );
  twobit_invoke( 5 );
  twobit_label( 1670, compiled_block_1_1670 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_load( 3, 7 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 9 );
  twobit_global( 9 ); /* append */
  twobit_pop( 10 );
  twobit_invoke( 2 );
  twobit_label( 1665, compiled_block_1_1665 );
  twobit_load( 1, 10 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_pop( 10 );
  twobit_invoke( 1 );
  twobit_label( 1663, compiled_block_1_1663 );
  twobit_load( 1, 10 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_pop( 10 );
  twobit_invoke( 1 );
  twobit_label( 1661, compiled_block_1_1661 );
  twobit_load( 1, 10 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_pop( 10 );
  twobit_invoke( 1 );
  twobit_label( 1658, compiled_block_1_1658 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1656, compiled_block_1_1656 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1654, compiled_block_1_1654 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1652, compiled_block_1_1652 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1650, compiled_block_1_1650 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1648, compiled_block_1_1648 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1646, compiled_block_1_1646 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_144( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1684, compiled_block_1_1684 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1686, compiled_block_1_1686 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1688, compiled_block_1_1688 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1690, compiled_block_1_1690 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1692, compiled_block_1_1692 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1694, compiled_block_1_1694 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 29 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1696, compiled_block_1_1696 ); /* internal:branchf-pair? */
  twobit_save( 10 );
  twobit_store( 0, 0 );
  twobit_store( 1, 10 );
  twobit_store( 2, 2 );
  twobit_store( 3, 3 );
  twobit_store( 4, 1 );
  twobit_store( 29, 6 );
  twobit_store( 30, 5 );
  twobit_store( 31, 4 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 28 );
  twobit_store( 28, 9 );
  twobit_movereg( 28, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1697, compiled_block_1_1697 );
  twobit_invoke( 1 );
  twobit_label( 1697, compiled_block_1_1697 );
  twobit_load( 0, 0 );
  twobit_branchf( 1699, compiled_block_1_1699 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1701, compiled_block_1_1701 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 7 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1703, compiled_block_1_1703 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1704, compiled_block_1_1704 );
  twobit_invoke( 5 );
  twobit_label( 1704, compiled_block_1_1704 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 2 ); /* () */
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_stack( 2 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_store( 2, 3 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1705, compiled_block_1_1705 );
  twobit_invoke( 5 );
  twobit_label( 1705, compiled_block_1_1705 );
  twobit_load( 0, 0 );
  twobit_load( 3, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1706, compiled_block_1_1706 );
  twobit_invoke( 5 );
  twobit_label( 1706, compiled_block_1_1706 );
  twobit_load( 0, 0 );
  twobit_load( 3, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1707, compiled_block_1_1707 );
  twobit_invoke( 5 );
  twobit_label( 1707, compiled_block_1_1707 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_load( 3, 7 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 9 );
  twobit_global( 8 ); /* append */
  twobit_pop( 10 );
  twobit_invoke( 2 );
  twobit_label( 1703, compiled_block_1_1703 );
  twobit_load( 1, 10 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_pop( 10 );
  twobit_invoke( 1 );
  twobit_label( 1701, compiled_block_1_1701 );
  twobit_load( 1, 10 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_pop( 10 );
  twobit_invoke( 1 );
  twobit_label( 1699, compiled_block_1_1699 );
  twobit_load( 1, 10 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_pop( 10 );
  twobit_invoke( 1 );
  twobit_label( 1696, compiled_block_1_1696 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1694, compiled_block_1_1694 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1692, compiled_block_1_1692 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1690, compiled_block_1_1690 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1688, compiled_block_1_1688 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1686, compiled_block_1_1686 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1684, compiled_block_1_1684 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_145( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1723, compiled_block_1_1723 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1725, compiled_block_1_1725 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1727, compiled_block_1_1727 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_op1_branchf_610( 1729, compiled_block_1_1729 ); /* internal:branchf-null? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1731, compiled_block_1_1731 ); /* internal:branchf-pair? */
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 4 );
  twobit_store( 3, 2 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 3 );
  twobit_movereg( 2, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1732, compiled_block_1_1732 );
  twobit_invoke( 1 );
  twobit_label( 1732, compiled_block_1_1732 );
  twobit_load( 0, 0 );
  twobit_branchf( 1734, compiled_block_1_1734 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1736, compiled_block_1_1736 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 3 );
  twobit_global( 2 ); /* append */
  twobit_pop( 4 );
  twobit_invoke( 2 );
  twobit_label( 1736, compiled_block_1_1736 );
  twobit_load( 1, 4 );
  twobit_pop( 4 );
  twobit_branch( 1720, compiled_block_1_1720 );
  twobit_label( 1734, compiled_block_1_1734 );
  twobit_load( 1, 4 );
  twobit_pop( 4 );
  twobit_branch( 1720, compiled_block_1_1720 );
  twobit_label( 1731, compiled_block_1_1731 );
  twobit_branch( 1720, compiled_block_1_1720 );
  twobit_label( 1729, compiled_block_1_1729 );
  twobit_branch( 1720, compiled_block_1_1720 );
  twobit_label( 1727, compiled_block_1_1727 );
  twobit_branch( 1720, compiled_block_1_1720 );
  twobit_label( 1725, compiled_block_1_1725 );
  twobit_branch( 1720, compiled_block_1_1720 );
  twobit_label( 1723, compiled_block_1_1723 );
  twobit_label( 1720, compiled_block_1_1720 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1746, compiled_block_1_1746 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1748, compiled_block_1_1748 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1750, compiled_block_1_1750 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1752, compiled_block_1_1752 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_op1_branchf_611( 1754, compiled_block_1_1754 ); /* internal:branchf-pair? */
  twobit_reg( 31 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_reg( 31 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_op1_branchf_611( 1756, compiled_block_1_1756 ); /* internal:branchf-pair? */
  twobit_reg( 31 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 29 );
  twobit_reg( 31 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1758, compiled_block_1_1758 ); /* internal:branchf-null? */
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1760, compiled_block_1_1760 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1762, compiled_block_1_1762 ); /* internal:branchf-null? */
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 2, 2 );
  twobit_store( 3, 3 );
  twobit_store( 29, 4 );
  twobit_store( 30, 5 );
  twobit_store( 31, 1 );
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 4 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1763, compiled_block_1_1763 );
  twobit_invoke( 5 );
  twobit_label( 1763, compiled_block_1_1763 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 4 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1764, compiled_block_1_1764 );
  twobit_invoke( 5 );
  twobit_label( 1764, compiled_block_1_1764 );
  twobit_load( 0, 0 );
  twobit_load( 3, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 1762, compiled_block_1_1762 );
  twobit_global( 8 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1760, compiled_block_1_1760 );
  twobit_global( 8 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1758, compiled_block_1_1758 );
  twobit_global( 8 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1756, compiled_block_1_1756 );
  twobit_global( 8 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1754, compiled_block_1_1754 );
  twobit_global( 8 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1752, compiled_block_1_1752 );
  twobit_global( 8 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1750, compiled_block_1_1750 );
  twobit_global( 8 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1748, compiled_block_1_1748 );
  twobit_global( 8 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1746, compiled_block_1_1746 );
  twobit_global( 8 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_146( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1776, compiled_block_1_1776 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1778, compiled_block_1_1778 ); /* internal:branchf-pair? */
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 6 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_movereg( 3, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1779, compiled_block_1_1779 );
  twobit_invoke( 1 );
  twobit_label( 1779, compiled_block_1_1779 );
  twobit_load( 0, 0 );
  twobit_branchf( 1781, compiled_block_1_1781 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1783, compiled_block_1_1783 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1785, compiled_block_1_1785 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1787, compiled_block_1_1787 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_store( 1, 1 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1789, compiled_block_1_1789 ); /* internal:branchf-null? */
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1790, compiled_block_1_1790 );
  twobit_invoke( 5 );
  twobit_label( 1790, compiled_block_1_1790 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_load( 2, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_load( 1, 4 );
  twobit_global( 6 ); /* append */
  twobit_setrtn( 1791, compiled_block_1_1791 );
  twobit_invoke( 2 );
  twobit_label( 1791, compiled_block_1_1791 );
  twobit_load( 0, 0 );
  twobit_load( 3, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 1789, compiled_block_1_1789 );
  twobit_load( 1, 6 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_pop( 6 );
  twobit_invoke( 1 );
  twobit_label( 1787, compiled_block_1_1787 );
  twobit_load( 1, 6 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_pop( 6 );
  twobit_invoke( 1 );
  twobit_label( 1785, compiled_block_1_1785 );
  twobit_load( 1, 6 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_pop( 6 );
  twobit_invoke( 1 );
  twobit_label( 1783, compiled_block_1_1783 );
  twobit_load( 1, 6 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_pop( 6 );
  twobit_invoke( 1 );
  twobit_label( 1781, compiled_block_1_1781 );
  twobit_load( 1, 6 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_pop( 6 );
  twobit_invoke( 1 );
  twobit_label( 1778, compiled_block_1_1778 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1776, compiled_block_1_1776 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_3( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 29 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  rotate~1pxGHH~31947 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  balance~1pxGHH~31946 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 4 ); /*  min+delete~1pxGHH~31945 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 5 ); /*  right-tree~1pxGHH~31944 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 6 ); /*  left-tree~1pxGHH~31943 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 7 ); /*  black-height~1pxGHH~31942 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 8 ); /*  catenate-right~1pxGHH~31941 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 9 ); /*  catenate-left~1pxGHH~31940 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 10 ); /*  tree-split~1pxGHH~31939 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 11 ); /*  tree-catenate~1pxGHH~31938 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 12 ); /*  tree-map~1pxGHH~31937 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 13 ); /*  tree-key-predecessor~1pxGHH~31936 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 14 ); /*  tree-key-successor~1pxGHH~31935 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 15 ); /*  tree-search~1pxGHH~31934 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 16 ); /*  identity~1pxGHH~31933 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 17 ); /*  tree-generator~1pxGHH~31932 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 18 ); /*  tree-for-each~1pxGHH~31931 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 19 ); /*  tree-fold/reverse~1pxGHH~31930 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 20 ); /*  tree-fold~1pxGHH~31929 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 21 ); /*  make-tree~1pxGHH~31928 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 22 ); /*  white->black~1pxGHH~31927 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 23 ); /*  redden~1pxGHH~31926 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 24 ); /*  blacken~1pxGHH~31925 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 25 ); /*  white?~1pxGHH~31434 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 26 ); /*  black?~1pxGHH~31433 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 27 ); /*  red?~1pxGHH~31432 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 28 ); /*  white~1pxGHH~31431 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 29 ); /*  black~1pxGHH~31430 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 30 ); /*  red~1pxGHH~31429 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 31 ); /*  value~1pxGHH~31428 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 32 ); /*  key~1pxGHH~31427 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 33 ); /*  right~1pxGHH~31426 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 34 ); /*  item~1pxGHH~31425 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 35 ); /*  left~1pxGHH~31424 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 36 ); /*  color~1pxGHH~31423 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 37 ); /*  node~1pxGHH~31422 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 38 ); /*  item-value~1pxGHH~31421 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 39 ); /*  item-key~1pxGHH~31420 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 40 ); /*  make-item~1pxGHH~31419 */
  twobit_lambda( compiled_start_1_4, 42, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 29 );
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_setreg( 3 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 2 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 1 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 31 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 30 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 29 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 28 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 27 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 26 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 25 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 24 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 23 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 22 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 21 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 20 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 19 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 18 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 17 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 16 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 15 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 14 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 13 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 12 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 11 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 10 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 9 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 8 );
  twobit_op1_4(); /* undefined */
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 7 );
  twobit_store( 7, 17 );
  twobit_reg( 8 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 8 );
  twobit_store( 8, 15 );
  twobit_reg( 9 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 9 );
  twobit_store( 9, 16 );
  twobit_reg( 10 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 10 );
  twobit_store( 10, 28 );
  twobit_reg( 11 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 11 );
  twobit_store( 11, 27 );
  twobit_reg( 12 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 12 );
  twobit_store( 12, 22 );
  twobit_reg( 13 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 13 );
  twobit_store( 13, 24 );
  twobit_reg( 14 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 14 );
  twobit_store( 14, 25 );
  twobit_reg( 15 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 15 );
  twobit_store( 15, 26 );
  twobit_reg( 16 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 16 );
  twobit_store( 16, 23 );
  twobit_reg( 17 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 17 );
  twobit_store( 17, 21 );
  twobit_reg( 18 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 18 );
  twobit_store( 18, 20 );
  twobit_reg( 19 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 19 );
  twobit_store( 19, 19 );
  twobit_reg( 20 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 20 );
  twobit_store( 20, 18 );
  twobit_reg( 21 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 21 );
  twobit_store( 21, 14 );
  twobit_reg( 22 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 22 );
  twobit_store( 22, 13 );
  twobit_reg( 23 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 23 );
  twobit_store( 23, 12 );
  twobit_reg( 24 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 24 );
  twobit_store( 24, 11 );
  twobit_reg( 25 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 25 );
  twobit_store( 25, 10 );
  twobit_reg( 26 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 26 );
  twobit_store( 26, 9 );
  twobit_reg( 27 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 27 );
  twobit_store( 27, 8 );
  twobit_reg( 28 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 28 );
  twobit_store( 28, 7 );
  twobit_reg( 29 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 29 );
  twobit_store( 29, 6 );
  twobit_reg( 30 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 30 );
  twobit_store( 30, 5 );
  twobit_reg( 31 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 31 );
  twobit_store( 31, 4 );
  twobit_reg( 1 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 1 );
  twobit_store( 1, 3 );
  twobit_reg( 2 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_reg( 3 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_movereg( 3, 1 );
  twobit_lambda( compiled_start_1_5, 44, 1 );
  twobit_setreg( 1 );
  twobit_global( 45 ); /* make-case-lambda */
  twobit_setrtn( 1817, compiled_block_1_1817 );
  twobit_invoke( 1 );
  twobit_label( 1817, compiled_block_1_1817 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_lambda( compiled_start_1_6, 47, 1 );
  twobit_setreg( 1 );
  twobit_global( 45 ); /* make-case-lambda */
  twobit_setrtn( 1825, compiled_block_1_1825 );
  twobit_invoke( 1 );
  twobit_label( 1825, compiled_block_1_1825 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_1_7, 49, 0 );
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_1_8, 51, 0 );
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_1_9, 53, 0 );
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 2, 1 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_1_10, 55, 2 );
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 4 );
  twobit_lambda( compiled_start_1_11, 57, 1 );
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 5 );
  twobit_lambda( compiled_start_1_12, 59, 2 );
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_movereg( 2, 1 );
  twobit_lambda( compiled_start_1_13, 61, 1 );
  twobit_setreg( 4 );
  twobit_stack( 9 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 4 );
  twobit_lambda( compiled_start_1_14, 63, 1 );
  twobit_setreg( 4 );
  twobit_stack( 10 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_1_15, 65, 1 );
  twobit_setreg( 4 );
  twobit_stack( 11 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 10 );
  twobit_lambda( compiled_start_1_16, 67, 1 );
  twobit_setreg( 4 );
  twobit_stack( 12 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 12 );
  twobit_lambda( compiled_start_1_17, 69, 1 );
  twobit_setreg( 4 );
  twobit_stack( 13 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_1_18, 71, 0 );
  twobit_setreg( 4 );
  twobit_stack( 14 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 10, 7 );
  twobit_load( 9, 15 );
  twobit_load( 8, 16 );
  twobit_load( 7, 17 );
  twobit_load( 6, 4 );
  twobit_load( 5, 2 );
  twobit_load( 4, 3 );
  twobit_load( 3, 14 );
  twobit_load( 1, 6 );
  twobit_lambda( compiled_start_1_19, 73, 10 );
  twobit_setreg( 3 );
  twobit_stack( 18 );
  twobit_op2_84( 3 ); /* cell-set! */
  twobit_movereg( 6, 1 );
  twobit_lambda( compiled_start_1_20, 75, 1 );
  twobit_setreg( 3 );
  twobit_stack( 19 );
  twobit_op2_84( 3 ); /* cell-set! */
  twobit_movereg( 6, 1 );
  twobit_lambda( compiled_start_1_21, 77, 1 );
  twobit_setreg( 3 );
  twobit_stack( 20 );
  twobit_op2_84( 3 ); /* cell-set! */
  twobit_movereg( 6, 1 );
  twobit_lambda( compiled_start_1_22, 79, 2 );
  twobit_setreg( 3 );
  twobit_stack( 21 );
  twobit_op2_84( 3 ); /* cell-set! */
  twobit_movereg( 9, 4 );
  twobit_load( 3, 22 );
  twobit_load( 1, 6 );
  twobit_lambda( compiled_start_1_23, 81, 4 );
  twobit_setreg( 4 );
  twobit_stack( 23 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 5, 24 );
  twobit_load( 4, 25 );
  twobit_movereg( 6, 3 );
  twobit_lambda( compiled_start_1_24, 83, 5 );
  twobit_setreg( 1 );
  twobit_stack( 26 );
  twobit_op2_84( 1 ); /* cell-set! */
  twobit_load( 1, 23 );
  twobit_lambda( compiled_start_1_25, 85, 1 );
  twobit_setreg( 4 );
  twobit_stack( 25 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_1_26, 87, 1 );
  twobit_setreg( 4 );
  twobit_reg( 5 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_movereg( 6, 1 );
  twobit_lambda( compiled_start_1_27, 89, 1 );
  twobit_setreg( 4 );
  twobit_stack( 22 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_1_28, 91, 0 );
  twobit_setreg( 4 );
  twobit_stack( 27 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_1_29, 93, 0 );
  twobit_setreg( 4 );
  twobit_stack( 28 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_movereg( 8, 5 );
  twobit_movereg( 7, 4 );
  twobit_load( 3, 3 );
  twobit_load( 1, 2 );
  twobit_lambda( compiled_start_1_30, 95, 6 );
  twobit_setreg( 4 );
  twobit_reg( 8 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 4, 5 );
  twobit_movereg( 6, 1 );
  twobit_lambda( compiled_start_1_31, 97, 4 );
  twobit_setreg( 4 );
  twobit_reg( 9 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_movereg( 9, 7 );
  twobit_load( 5, 8 );
  twobit_load( 4, 5 );
  twobit_load( 1, 2 );
  twobit_lambda( compiled_start_1_32, 99, 7 );
  twobit_setreg( 4 );
  twobit_stack( 17 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_global( 100 ); /* values */
  twobit_setrtn( 3206, compiled_block_1_3206 );
  twobit_invoke( 0 );
  twobit_label( 3206, compiled_block_1_3206 );
  twobit_load( 0, 0 );
  twobit_load( 1, 29 );
  twobit_store( 1, 17 );
  twobit_load( 1, 9 );
  twobit_lambda( compiled_start_1_33, 102, 1 );
  twobit_setreg( 4 );
  twobit_load( 1, 10 );
  twobit_lambda( compiled_start_1_34, 104, 1 );
  twobit_setreg( 3 );
  twobit_load( 1, 11 );
  twobit_lambda( compiled_start_1_35, 106, 1 );
  twobit_setreg( 2 );
  twobit_load( 1, 12 );
  twobit_lambda( compiled_start_1_36, 108, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 12 );
  twobit_load( 1, 13 );
  twobit_lambda( compiled_start_1_37, 110, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 13 );
  twobit_load( 1, 18 );
  twobit_lambda( compiled_start_1_38, 112, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 18 );
  twobit_load( 1, 19 );
  twobit_lambda( compiled_start_1_39, 114, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 19 );
  twobit_load( 1, 20 );
  twobit_lambda( compiled_start_1_40, 116, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 20 );
  twobit_load( 1, 21 );
  twobit_lambda( compiled_start_1_41, 118, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 21 );
  twobit_load( 1, 23 );
  twobit_lambda( compiled_start_1_42, 120, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 23 );
  twobit_load( 1, 26 );
  twobit_lambda( compiled_start_1_43, 122, 1 );
  twobit_imm_const_setreg( NIL_CONST, 1 ); /* () */
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_stack( 23 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_stack( 21 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_stack( 20 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_stack( 19 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_stack( 18 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_stack( 13 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_stack( 12 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 2 );
  twobit_reg( 3 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 17 );
  twobit_global( 123 ); /* apply */
  twobit_pop( 29 );
  twobit_invoke( 2 );
  twobit_label( 1801, compiled_block_1_1801 );
  twobit_reg_op2_check_662(reg(1),reg(4),3219,compiled_block_1_3219); /* internal:check-vector?/vector-length:vec with (0 1 0) */
  twobit_imm_const( fixnum(3) ); /* 3 */
  twobit_reg_op2_check_655(RESULT,reg(4),3219,compiled_block_1_3219); /* internal:check-<:fix:fix with (0 1 0) */
  twobit_reg( 1 );
  twobit_op2imm_450( fixnum(3) ); /* vector-ref:trusted */
  twobit_return();
  twobit_label( 1802, compiled_block_1_1802 );
  twobit_reg_op2_check_662(reg(1),reg(4),3220,compiled_block_1_3220); /* internal:check-vector?/vector-length:vec with (0 1 0) */
  twobit_imm_const( fixnum(2) ); /* 2 */
  twobit_reg_op2_check_655(RESULT,reg(4),3220,compiled_block_1_3220); /* internal:check-<:fix:fix with (0 1 0) */
  twobit_reg( 1 );
  twobit_op2imm_450( fixnum(2) ); /* vector-ref:trusted */
  twobit_return();
  twobit_label( 1803, compiled_block_1_1803 );
  twobit_reg_op2_check_662(reg(1),reg(4),3221,compiled_block_1_3221); /* internal:check-vector?/vector-length:vec with (0 1 0) */
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_reg_op2_check_655(RESULT,reg(4),3221,compiled_block_1_3221); /* internal:check-<:fix:fix with (0 1 0) */
  twobit_reg( 1 );
  twobit_op2imm_450( fixnum(1) ); /* vector-ref:trusted */
  twobit_return();
  twobit_label( 1804, compiled_block_1_1804 );
  twobit_reg_op2_check_662(reg(1),reg(4),3222,compiled_block_1_3222); /* internal:check-vector?/vector-length:vec with (0 1 0) */
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_reg_op2_check_655(RESULT,reg(4),3222,compiled_block_1_3222); /* internal:check-<:fix:fix with (0 1 0) */
  twobit_reg( 1 );
  twobit_op2imm_450( fixnum(0) ); /* vector-ref:trusted */
  twobit_return();
  twobit_label( 1805, compiled_block_1_1805 );
  twobit_op2_604( 4 ); /* make-vector:4 */
  twobit_setreg( 4 );
  twobit_imm_const( fixnum(2) ); /* 2 */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op3_403( 31, 3 ); /* vector-set!:trusted:nwb */
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op3_403( 3, 2 ); /* vector-set!:trusted:nwb */
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op3_403( 3, 1 ); /* vector-set!:trusted:nwb */
  twobit_reg( 4 );
  twobit_return();
  twobit_label( 1806, compiled_block_1_1806 );
  twobit_reg_op2_check_662(reg(1),reg(4),3221,compiled_block_1_3221); /* internal:check-vector?/vector-length:vec with (0 1 0) */
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_reg_op2_check_655(RESULT,reg(4),3221,compiled_block_1_3221); /* internal:check-<:fix:fix with (0 1 0) */
  twobit_reg( 1 );
  twobit_op2imm_450( fixnum(1) ); /* vector-ref:trusted */
  twobit_return();
  twobit_label( 1807, compiled_block_1_1807 );
  twobit_reg_op2_check_662(reg(1),reg(4),3222,compiled_block_1_3222); /* internal:check-vector?/vector-length:vec with (0 1 0) */
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_reg_op2_check_655(RESULT,reg(4),3222,compiled_block_1_3222); /* internal:check-<:fix:fix with (0 1 0) */
  twobit_reg( 1 );
  twobit_op2imm_450( fixnum(0) ); /* vector-ref:trusted */
  twobit_return();
  twobit_label( 3219, compiled_block_1_3219 );
  twobit_imm_const( fixnum(3) ); /* 3 */
  twobit_setreg( 2 );
  twobit_trap( 1, 2, 0, 160 );
  twobit_label( 3221, compiled_block_1_3221 );
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_setreg( 2 );
  twobit_trap( 1, 2, 0, 160 );
  twobit_label( 3220, compiled_block_1_3220 );
  twobit_imm_const( fixnum(2) ); /* 2 */
  twobit_setreg( 2 );
  twobit_trap( 1, 2, 0, 160 );
  twobit_label( 3222, compiled_block_1_3222 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 2 );
  twobit_trap( 1, 2, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 11 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  make-tree~1pxGHH~31928 */
  twobit_reg( 2 );
  twobit_setglbl( 2 ); /*  tree-fold~1pxGHH~31929 */
  twobit_reg( 3 );
  twobit_setglbl( 3 ); /*  tree-fold/reverse~1pxGHH~31930 */
  twobit_reg( 4 );
  twobit_setglbl( 4 ); /*  tree-for-each~1pxGHH~31931 */
  twobit_reg( 5 );
  twobit_setglbl( 5 ); /*  tree-generator~1pxGHH~31932 */
  twobit_reg( 6 );
  twobit_setglbl( 6 ); /*  tree-search~1pxGHH~31934 */
  twobit_reg( 7 );
  twobit_setglbl( 7 ); /*  tree-key-successor~1pxGHH~31935 */
  twobit_reg( 8 );
  twobit_setglbl( 8 ); /*  tree-key-predecessor~1pxGHH~31936 */
  twobit_reg( 9 );
  twobit_setglbl( 9 ); /*  tree-map~1pxGHH~31937 */
  twobit_reg( 10 );
  twobit_setglbl( 10 ); /*  tree-catenate~1pxGHH~31938 */
  twobit_reg( 11 );
  twobit_setglbl( 11 ); /*  tree-split~1pxGHH~31939 */
  twobit_global( 12 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_reg( 4 );
  twobit_op2imm_branchf_640( fixnum(0), 1811, compiled_block_1_1811 ); /* internal:branchf-eq?/imm */
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_invoke( 3 );
  twobit_label( 1811, compiled_block_1_1811 );
  twobit_reg( 4 );
  twobit_op2imm_branchf_640( fixnum(3), 1814, compiled_block_1_1814 ); /* internal:branchf-eq?/imm */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_store( 3, 2 );
  twobit_movereg( 1, 2 );
  twobit_load( 3, 1 );
  twobit_load( 4, 2 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_pop( 2 );
  twobit_jump( 1, 1805, compiled_block_1_1805 );
  twobit_label( 1814, compiled_block_1_1814 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 1 );
  twobit_const( 2 );
  twobit_setreg( 2 );
  twobit_global( 3 ); /* assertion-violation */
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_reg( 4 );
  twobit_op2imm_branchf_640( fixnum(0), 1819, compiled_block_1_1819 ); /* internal:branchf-eq?/imm */
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_invoke( 3 );
  twobit_label( 1819, compiled_block_1_1819 );
  twobit_reg( 4 );
  twobit_op2imm_branchf_640( fixnum(3), 1822, compiled_block_1_1822 ); /* internal:branchf-eq?/imm */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_store( 3, 2 );
  twobit_movereg( 1, 2 );
  twobit_load( 3, 1 );
  twobit_load( 4, 2 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_pop( 2 );
  twobit_jump( 1, 1805, compiled_block_1_1805 );
  twobit_label( 1822, compiled_block_1_1822 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 1 );
  twobit_const( 2 );
  twobit_setreg( 2 );
  twobit_global( 3 ); /* assertion-violation */
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_7( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_setrtn( 1826, compiled_block_1_1826 );
  twobit_jump( 1, 1804, compiled_block_1_1804 );
  twobit_label( 1826, compiled_block_1_1826 );
  twobit_load( 0, 0 );
  twobit_const_setreg( 1, 3 );
  twobit_op2_56( 3 ); /* eq? */
  twobit_pop( 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_8( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_setrtn( 1827, compiled_block_1_1827 );
  twobit_jump( 1, 1804, compiled_block_1_1804 );
  twobit_label( 1827, compiled_block_1_1827 );
  twobit_load( 0, 0 );
  twobit_const_setreg( 1, 3 );
  twobit_op2_56( 3 ); /* eq? */
  twobit_pop( 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_9( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_setrtn( 1828, compiled_block_1_1828 );
  twobit_jump( 1, 1804, compiled_block_1_1804 );
  twobit_label( 1828, compiled_block_1_1828 );
  twobit_load( 0, 0 );
  twobit_const_setreg( 1, 3 );
  twobit_op2_56( 3 ); /* eq? */
  twobit_pop( 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_10( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lambda( compiled_start_1_135, 2, 1 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-current-continuation */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_135( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 1829, compiled_block_1_1829 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 1829, compiled_block_1_1829 );
  twobit_load( 0, 0 );
  twobit_branchf( 1831, compiled_block_1_1831 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 1832, compiled_block_1_1832 );
  twobit_invoke( 1 );
  twobit_label( 1832, compiled_block_1_1832 );
  twobit_load( 0, 0 );
  twobit_branchf( 1834, compiled_block_1_1834 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 1835, compiled_block_1_1835 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 1835, compiled_block_1_1835 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_branchf( 1837, compiled_block_1_1837 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 1838, compiled_block_1_1838 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 1838, compiled_block_1_1838 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 1840, compiled_block_1_1840 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 1841, compiled_block_1_1841 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 1841, compiled_block_1_1841 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1843, compiled_block_1_1843 );
  twobit_load( 2, 1 );
  twobit_store( 2, 4 );
  twobit_movereg( 4, 3 );
  twobit_load( 2, 2 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_1_136, 2, 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 4 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 1845, compiled_block_1_1845 );
  twobit_invoke( 2 );
  twobit_label( 1845, compiled_block_1_1845 );
  twobit_load( 0, 0 );
  twobit_skip( 1830, compiled_block_1_1830 );
  twobit_label( 1843, compiled_block_1_1843 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1830, compiled_block_1_1830 );
  twobit_label( 1840, compiled_block_1_1840 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1830, compiled_block_1_1830 );
  twobit_label( 1837, compiled_block_1_1837 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1830, compiled_block_1_1830 );
  twobit_label( 1834, compiled_block_1_1834 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1830, compiled_block_1_1830 );
  twobit_label( 1831, compiled_block_1_1831 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1830, compiled_block_1_1830 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1847, compiled_block_1_1847 );
  twobit_reg( 4 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1847, compiled_block_1_1847 );
  twobit_lexical( 0, 1 );
  twobit_branchf( 1849, compiled_block_1_1849 );
  twobit_load( 2, 1 );
  twobit_lambda( compiled_start_1_137, 5, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 1850, compiled_block_1_1850 );
  twobit_invoke( 2 );
  twobit_label( 1850, compiled_block_1_1850 );
  twobit_load( 0, 0 );
  twobit_skip( 1848, compiled_block_1_1848 );
  twobit_label( 1849, compiled_block_1_1849 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1848, compiled_block_1_1848 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1852, compiled_block_1_1852 );
  twobit_reg( 4 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1852, compiled_block_1_1852 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_global( 7 ); /* error */
  twobit_pop( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_136( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_137( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_11( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lambda( compiled_start_1_132, 2, 1 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-current-continuation */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_132( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 1855, compiled_block_1_1855 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 1855, compiled_block_1_1855 );
  twobit_load( 0, 0 );
  twobit_branchf( 1857, compiled_block_1_1857 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 1858, compiled_block_1_1858 );
  twobit_invoke( 1 );
  twobit_label( 1858, compiled_block_1_1858 );
  twobit_load( 0, 0 );
  twobit_branchf( 1860, compiled_block_1_1860 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 1861, compiled_block_1_1861 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 1861, compiled_block_1_1861 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 1863, compiled_block_1_1863 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 1864, compiled_block_1_1864 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 1864, compiled_block_1_1864 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 1866, compiled_block_1_1866 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 1867, compiled_block_1_1867 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 1867, compiled_block_1_1867 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 1869, compiled_block_1_1869 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_reg( 3 );
  twobit_setrtn( 1870, compiled_block_1_1870 );
  twobit_invoke( 1 );
  twobit_label( 1870, compiled_block_1_1870 );
  twobit_load( 0, 0 );
  twobit_branchf( 1872, compiled_block_1_1872 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_reg( 4 );
  twobit_setrtn( 1873, compiled_block_1_1873 );
  twobit_invoke( 1 );
  twobit_label( 1873, compiled_block_1_1873 );
  twobit_load( 0, 0 );
  twobit_branchf( 1875, compiled_block_1_1875 );
  twobit_load( 2, 3 );
  twobit_store( 2, 5 );
  twobit_load( 3, 2 );
  twobit_load( 2, 4 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_1_133, 2, 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 5 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 1877, compiled_block_1_1877 );
  twobit_invoke( 2 );
  twobit_label( 1877, compiled_block_1_1877 );
  twobit_load( 0, 0 );
  twobit_skip( 1856, compiled_block_1_1856 );
  twobit_label( 1875, compiled_block_1_1875 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1856, compiled_block_1_1856 );
  twobit_label( 1872, compiled_block_1_1872 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1856, compiled_block_1_1856 );
  twobit_label( 1869, compiled_block_1_1869 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1856, compiled_block_1_1856 );
  twobit_label( 1866, compiled_block_1_1866 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1856, compiled_block_1_1856 );
  twobit_label( 1863, compiled_block_1_1863 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1856, compiled_block_1_1856 );
  twobit_label( 1860, compiled_block_1_1860 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1856, compiled_block_1_1856 );
  twobit_label( 1857, compiled_block_1_1857 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1856, compiled_block_1_1856 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1879, compiled_block_1_1879 );
  twobit_reg( 4 );
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1879, compiled_block_1_1879 );
  twobit_lexical( 0, 1 );
  twobit_branchf( 1881, compiled_block_1_1881 );
  twobit_load( 2, 3 );
  twobit_lambda( compiled_start_1_134, 5, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 1882, compiled_block_1_1882 );
  twobit_invoke( 2 );
  twobit_label( 1882, compiled_block_1_1882 );
  twobit_load( 0, 0 );
  twobit_skip( 1880, compiled_block_1_1880 );
  twobit_label( 1881, compiled_block_1_1881 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1880, compiled_block_1_1880 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1884, compiled_block_1_1884 );
  twobit_reg( 4 );
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1884, compiled_block_1_1884 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_global( 7 ); /* error */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_133( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 4 );
  twobit_jump( 3, 1805, compiled_block_1_1805 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_134( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_12( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lambda( compiled_start_1_129, 2, 1 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-current-continuation */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_129( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 1887, compiled_block_1_1887 );
  twobit_invoke( 1 );
  twobit_label( 1887, compiled_block_1_1887 );
  twobit_load( 0, 0 );
  twobit_branchf( 1889, compiled_block_1_1889 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 1890, compiled_block_1_1890 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 1890, compiled_block_1_1890 );
  twobit_load( 0, 0 );
  twobit_branchf( 1892, compiled_block_1_1892 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1888, compiled_block_1_1888 );
  twobit_label( 1892, compiled_block_1_1892 );
  twobit_load( 2, 1 );
  twobit_lambda( compiled_start_1_130, 2, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 1894, compiled_block_1_1894 );
  twobit_invoke( 2 );
  twobit_label( 1894, compiled_block_1_1894 );
  twobit_load( 0, 0 );
  twobit_skip( 1888, compiled_block_1_1888 );
  twobit_label( 1889, compiled_block_1_1889 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1888, compiled_block_1_1888 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1896, compiled_block_1_1896 );
  twobit_reg( 4 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1896, compiled_block_1_1896 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 1897, compiled_block_1_1897 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 1897, compiled_block_1_1897 );
  twobit_load( 0, 0 );
  twobit_branchf( 1899, compiled_block_1_1899 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 1900, compiled_block_1_1900 );
  twobit_invoke( 1 );
  twobit_label( 1900, compiled_block_1_1900 );
  twobit_load( 0, 0 );
  twobit_branchf( 1902, compiled_block_1_1902 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 1903, compiled_block_1_1903 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 1903, compiled_block_1_1903 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_branchf( 1905, compiled_block_1_1905 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 1906, compiled_block_1_1906 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 1906, compiled_block_1_1906 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 1908, compiled_block_1_1908 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 1909, compiled_block_1_1909 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 1909, compiled_block_1_1909 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1911, compiled_block_1_1911 );
  twobit_load( 2, 1 );
  twobit_store( 2, 4 );
  twobit_movereg( 4, 3 );
  twobit_load( 2, 2 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_1_131, 5, 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 4 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 1913, compiled_block_1_1913 );
  twobit_invoke( 2 );
  twobit_label( 1913, compiled_block_1_1913 );
  twobit_load( 0, 0 );
  twobit_skip( 1898, compiled_block_1_1898 );
  twobit_label( 1911, compiled_block_1_1911 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1898, compiled_block_1_1898 );
  twobit_label( 1908, compiled_block_1_1908 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1898, compiled_block_1_1898 );
  twobit_label( 1905, compiled_block_1_1905 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1898, compiled_block_1_1898 );
  twobit_label( 1902, compiled_block_1_1902 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1898, compiled_block_1_1898 );
  twobit_label( 1899, compiled_block_1_1899 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1898, compiled_block_1_1898 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1915, compiled_block_1_1915 );
  twobit_reg( 4 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1915, compiled_block_1_1915 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_global( 7 ); /* error */
  twobit_pop( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_130( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_131( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_13( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_14( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_label( 1919, compiled_block_1_1919 );
  twobit_lambda( compiled_start_1_126, 2, 3 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-current-continuation */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_126( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 1922, compiled_block_1_1922 );
  twobit_invoke( 1 );
  twobit_label( 1922, compiled_block_1_1922 );
  twobit_load( 0, 0 );
  twobit_branchf( 1924, compiled_block_1_1924 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1925, compiled_block_1_1925 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 1925, compiled_block_1_1925 );
  twobit_load( 0, 0 );
  twobit_branchf( 1927, compiled_block_1_1927 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1923, compiled_block_1_1923 );
  twobit_label( 1927, compiled_block_1_1927 );
  twobit_load( 2, 1 );
  twobit_lambda( compiled_start_1_127, 2, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 1928, compiled_block_1_1928 );
  twobit_invoke( 2 );
  twobit_label( 1928, compiled_block_1_1928 );
  twobit_load( 0, 0 );
  twobit_skip( 1923, compiled_block_1_1923 );
  twobit_label( 1924, compiled_block_1_1924 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1923, compiled_block_1_1923 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1930, compiled_block_1_1930 );
  twobit_reg( 4 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1930, compiled_block_1_1930 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1931, compiled_block_1_1931 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 1931, compiled_block_1_1931 );
  twobit_load( 0, 0 );
  twobit_branchf( 1933, compiled_block_1_1933 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1934, compiled_block_1_1934 );
  twobit_jump( 2, 1804, compiled_block_1_1804 );
  twobit_label( 1934, compiled_block_1_1934 );
  twobit_load( 0, 0 );
  twobit_branchf( 1936, compiled_block_1_1936 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1937, compiled_block_1_1937 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 1937, compiled_block_1_1937 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 1939, compiled_block_1_1939 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1940, compiled_block_1_1940 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 1940, compiled_block_1_1940 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_branchf( 1942, compiled_block_1_1942 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1943, compiled_block_1_1943 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 1943, compiled_block_1_1943 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1945, compiled_block_1_1945 );
  twobit_load( 2, 1 );
  twobit_store( 2, 4 );
  twobit_load( 3, 2 );
  twobit_load( 2, 3 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_1_128, 5, 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 4 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 1951, compiled_block_1_1951 );
  twobit_invoke( 2 );
  twobit_label( 1951, compiled_block_1_1951 );
  twobit_load( 0, 0 );
  twobit_skip( 1932, compiled_block_1_1932 );
  twobit_label( 1945, compiled_block_1_1945 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1932, compiled_block_1_1932 );
  twobit_label( 1942, compiled_block_1_1942 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1932, compiled_block_1_1932 );
  twobit_label( 1939, compiled_block_1_1939 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1932, compiled_block_1_1932 );
  twobit_label( 1936, compiled_block_1_1936 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1932, compiled_block_1_1932 );
  twobit_label( 1933, compiled_block_1_1933 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1932, compiled_block_1_1932 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1953, compiled_block_1_1953 );
  twobit_reg( 4 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1953, compiled_block_1_1953 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 2 );
  twobit_global( 7 ); /* error */
  twobit_pop( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_127( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 2 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_128( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 3 );
  twobit_setrtn( 1946, compiled_block_1_1946 );
  twobit_jump( 2, 1919, compiled_block_1_1919 );
  twobit_label( 1946, compiled_block_1_1946 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_setrtn( 1947, compiled_block_1_1947 );
  twobit_jump( 3, 1807, compiled_block_1_1807 );
  twobit_label( 1947, compiled_block_1_1947 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_setrtn( 1948, compiled_block_1_1948 );
  twobit_jump( 3, 1806, compiled_block_1_1806 );
  twobit_label( 1948, compiled_block_1_1948 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 3, 1 );
  twobit_load( 1, 2 );
  twobit_lexical( 1, 1 );
  twobit_setrtn( 1949, compiled_block_1_1949 );
  twobit_invoke( 3 );
  twobit_label( 1949, compiled_block_1_1949 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 3 );
  twobit_pop( 2 );
  twobit_jump( 2, 1919, compiled_block_1_1919 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_15( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_label( 1956, compiled_block_1_1956 );
  twobit_lambda( compiled_start_1_123, 2, 3 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-current-continuation */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_123( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 1959, compiled_block_1_1959 );
  twobit_invoke( 1 );
  twobit_label( 1959, compiled_block_1_1959 );
  twobit_load( 0, 0 );
  twobit_branchf( 1961, compiled_block_1_1961 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1962, compiled_block_1_1962 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 1962, compiled_block_1_1962 );
  twobit_load( 0, 0 );
  twobit_branchf( 1964, compiled_block_1_1964 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1960, compiled_block_1_1960 );
  twobit_label( 1964, compiled_block_1_1964 );
  twobit_load( 2, 1 );
  twobit_lambda( compiled_start_1_124, 2, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 1965, compiled_block_1_1965 );
  twobit_invoke( 2 );
  twobit_label( 1965, compiled_block_1_1965 );
  twobit_load( 0, 0 );
  twobit_skip( 1960, compiled_block_1_1960 );
  twobit_label( 1961, compiled_block_1_1961 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1960, compiled_block_1_1960 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1967, compiled_block_1_1967 );
  twobit_reg( 4 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1967, compiled_block_1_1967 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1968, compiled_block_1_1968 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 1968, compiled_block_1_1968 );
  twobit_load( 0, 0 );
  twobit_branchf( 1970, compiled_block_1_1970 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1971, compiled_block_1_1971 );
  twobit_jump( 2, 1804, compiled_block_1_1804 );
  twobit_label( 1971, compiled_block_1_1971 );
  twobit_load( 0, 0 );
  twobit_branchf( 1973, compiled_block_1_1973 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1974, compiled_block_1_1974 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 1974, compiled_block_1_1974 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_branchf( 1976, compiled_block_1_1976 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1977, compiled_block_1_1977 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 1977, compiled_block_1_1977 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 1979, compiled_block_1_1979 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1980, compiled_block_1_1980 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 1980, compiled_block_1_1980 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1982, compiled_block_1_1982 );
  twobit_load( 2, 1 );
  twobit_store( 2, 4 );
  twobit_movereg( 4, 3 );
  twobit_load( 2, 2 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_1_125, 5, 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 4 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 1988, compiled_block_1_1988 );
  twobit_invoke( 2 );
  twobit_label( 1988, compiled_block_1_1988 );
  twobit_load( 0, 0 );
  twobit_skip( 1969, compiled_block_1_1969 );
  twobit_label( 1982, compiled_block_1_1982 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1969, compiled_block_1_1969 );
  twobit_label( 1979, compiled_block_1_1979 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1969, compiled_block_1_1969 );
  twobit_label( 1976, compiled_block_1_1976 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1969, compiled_block_1_1969 );
  twobit_label( 1973, compiled_block_1_1973 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1969, compiled_block_1_1969 );
  twobit_label( 1970, compiled_block_1_1970 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1969, compiled_block_1_1969 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1990, compiled_block_1_1990 );
  twobit_reg( 4 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1990, compiled_block_1_1990 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 2 );
  twobit_global( 7 ); /* error */
  twobit_pop( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_124( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 2 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_125( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 3 );
  twobit_setrtn( 1983, compiled_block_1_1983 );
  twobit_jump( 2, 1956, compiled_block_1_1956 );
  twobit_label( 1983, compiled_block_1_1983 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_setrtn( 1984, compiled_block_1_1984 );
  twobit_jump( 3, 1807, compiled_block_1_1807 );
  twobit_label( 1984, compiled_block_1_1984 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_setrtn( 1985, compiled_block_1_1985 );
  twobit_jump( 3, 1806, compiled_block_1_1806 );
  twobit_label( 1985, compiled_block_1_1985 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 3, 1 );
  twobit_load( 1, 2 );
  twobit_lexical( 1, 1 );
  twobit_setrtn( 1986, compiled_block_1_1986 );
  twobit_invoke( 3 );
  twobit_label( 1986, compiled_block_1_1986 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 3 );
  twobit_pop( 2 );
  twobit_jump( 2, 1956, compiled_block_1_1956 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_16( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_movereg( 2, 3 );
  twobit_lambda( compiled_start_1_122, 2, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_122( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_lexical( 0, 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_17( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lambda( compiled_start_1_120, 2, 1 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /*  make-coroutine-generator~1pxGHH~20251 */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_120( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lambda( compiled_start_1_121, 2, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_121( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 0 );
  twobit_lexical( 0, 1 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_18( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_19( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 5 );
  twobit_lambda( compiled_start_1_100, 2, 5 );
  twobit_setreg( 1 );
  twobit_lambda( compiled_start_1_101, 4, 0 );
  twobit_setreg( 2 );
  twobit_global( 5 ); /* call-with-values */
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_100( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lexical( 1, 10 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2000, compiled_block_1_2000 );
  twobit_invoke( 1 );
  twobit_label( 2000, compiled_block_1_2000 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_pop( 0 );
  twobit_label( 1998, compiled_block_1_1998 );
  twobit_lambda( compiled_start_1_102, 2, 1 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-current-continuation */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_102( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 2, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2002, compiled_block_1_2002 );
  twobit_invoke( 1 );
  twobit_label( 2002, compiled_block_1_2002 );
  twobit_load( 0, 0 );
  twobit_branchf( 2004, compiled_block_1_2004 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2005, compiled_block_1_2005 );
  twobit_jump( 3, 1802, compiled_block_1_1802 );
  twobit_label( 2005, compiled_block_1_2005 );
  twobit_load( 0, 0 );
  twobit_branchf( 2007, compiled_block_1_2007 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2003, compiled_block_1_2003 );
  twobit_label( 2007, compiled_block_1_2007 );
  twobit_load( 2, 1 );
  twobit_lambda( compiled_start_1_103, 2, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2015, compiled_block_1_2015 );
  twobit_invoke( 2 );
  twobit_label( 2015, compiled_block_1_2015 );
  twobit_load( 0, 0 );
  twobit_skip( 2003, compiled_block_1_2003 );
  twobit_label( 2004, compiled_block_1_2004 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2003, compiled_block_1_2003 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2017, compiled_block_1_2017 );
  twobit_reg( 4 );
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 2017, compiled_block_1_2017 );
  twobit_lexical( 0, 1 );
  twobit_branchf( 2019, compiled_block_1_2019 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2020, compiled_block_1_2020 );
  twobit_jump( 3, 1802, compiled_block_1_1802 );
  twobit_label( 2020, compiled_block_1_2020 );
  twobit_load( 0, 0 );
  twobit_branchf( 2022, compiled_block_1_2022 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2023, compiled_block_1_2023 );
  twobit_jump( 3, 1804, compiled_block_1_1804 );
  twobit_label( 2023, compiled_block_1_2023 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 2025, compiled_block_1_2025 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2026, compiled_block_1_2026 );
  twobit_jump( 3, 1803, compiled_block_1_1803 );
  twobit_label( 2026, compiled_block_1_2026 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_branchf( 2028, compiled_block_1_2028 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2029, compiled_block_1_2029 );
  twobit_jump( 3, 1802, compiled_block_1_1802 );
  twobit_label( 2029, compiled_block_1_2029 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2031, compiled_block_1_2031 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2032, compiled_block_1_2032 );
  twobit_jump( 3, 1801, compiled_block_1_1801 );
  twobit_label( 2032, compiled_block_1_2032 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2034, compiled_block_1_2034 );
  twobit_load( 2, 1 );
  twobit_store( 2, 5 );
  twobit_load( 3, 2 );
  twobit_load( 2, 3 );
  twobit_load( 1, 4 );
  twobit_lambda( compiled_start_1_104, 5, 4 );
  twobit_setreg( 1 );
  twobit_load( 2, 5 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2168, compiled_block_1_2168 );
  twobit_invoke( 2 );
  twobit_label( 2168, compiled_block_1_2168 );
  twobit_load( 0, 0 );
  twobit_skip( 2018, compiled_block_1_2018 );
  twobit_label( 2034, compiled_block_1_2034 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2018, compiled_block_1_2018 );
  twobit_label( 2031, compiled_block_1_2031 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2018, compiled_block_1_2018 );
  twobit_label( 2028, compiled_block_1_2028 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2018, compiled_block_1_2018 );
  twobit_label( 2025, compiled_block_1_2025 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2018, compiled_block_1_2018 );
  twobit_label( 2022, compiled_block_1_2022 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2018, compiled_block_1_2018 );
  twobit_label( 2019, compiled_block_1_2019 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2018, compiled_block_1_2018 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2170, compiled_block_1_2170 );
  twobit_reg( 4 );
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 2170, compiled_block_1_2170 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_global( 7 ); /* error */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_103( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_1_118, 2, 0 );
  twobit_setreg( 1 );
  twobit_lambda( compiled_start_1_119, 4, 0 );
  twobit_setreg( 2 );
  twobit_lexical( 2, 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_118( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_save( 7 );
  twobit_store( 0, 0 );
  twobit_store( 1, 4 );
  twobit_store( 2, 2 );
  twobit_store( 3, 7 );
  twobit_lexical( 4, 9 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_lexical( 4, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_setrtn( 2008, compiled_block_1_2008 );
  twobit_invoke( 0 );
  twobit_label( 2008, compiled_block_1_2008 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 4, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_setrtn( 2009, compiled_block_1_2009 );
  twobit_invoke( 0 );
  twobit_label( 2009, compiled_block_1_2009 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 4, 1 );
  twobit_store( 4, 5 );
  twobit_load( 3, 2 );
  twobit_op2_602( 3 ); /* make-vector:2 */
  twobit_setreg( 3 );
  twobit_load( 2, 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 1 );
  twobit_load( 4, 4 );
  twobit_reg( 3 );
  twobit_op3_403( 1, 4 ); /* vector-set!:trusted:nwb */
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_load( 4, 5 );
  twobit_setrtn( 2010, compiled_block_1_2010 );
  twobit_jump( 5, 1805, compiled_block_1_1805 );
  twobit_label( 2010, compiled_block_1_2010 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 3, 6 );
  twobit_load( 2, 7 );
  twobit_global( 2 ); /* values */
  twobit_pop( 7 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_119( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_lexical( 4, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 4, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_setrtn( 2012, compiled_block_1_2012 );
  twobit_invoke( 0 );
  twobit_label( 2012, compiled_block_1_2012 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 3, 1 );
  twobit_load( 2, 2 );
  twobit_global( 1 ); /* values */
  twobit_pop( 2 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_104( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 2035, compiled_block_1_2035 );
  twobit_jump( 4, 1807, compiled_block_1_1807 );
  twobit_label( 2035, compiled_block_1_2035 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_movereg( 4, 3 );
  twobit_lexical( 2, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 4 );
  twobit_lexical( 2, 3 );
  twobit_setreg( 2 );
  twobit_store( 2, 5 );
  twobit_global( 1 ); /*  =?~1pxGHH~11721 */
  twobit_setrtn( 2036, compiled_block_1_2036 );
  twobit_invoke( 3 );
  twobit_label( 2036, compiled_block_1_2036 );
  twobit_load( 0, 0 );
  twobit_branchf( 2038, compiled_block_1_2038 );
  twobit_lambda( compiled_start_1_105, 3, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_lambda( compiled_start_1_106, 5, 0 );
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 2153, compiled_block_1_2153 );
  twobit_jump( 4, 1806, compiled_block_1_1806 );
  twobit_label( 2153, compiled_block_1_2153 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 4, 1 );
  twobit_load( 3, 2 );
  twobit_load( 1, 3 );
  twobit_lexical( 2, 5 );
  twobit_pop( 5 );
  twobit_invoke( 4 );
  twobit_label( 2038, compiled_block_1_2038 );
  twobit_load( 1, 4 );
  twobit_load( 2, 5 );
  twobit_load( 3, 3 );
  twobit_global( 6 ); /*  <?~1pxGHH~11722 */
  twobit_setrtn( 2155, compiled_block_1_2155 );
  twobit_invoke( 3 );
  twobit_label( 2155, compiled_block_1_2155 );
  twobit_load( 0, 0 );
  twobit_branchf( 2157, compiled_block_1_2157 );
  twobit_lambda( compiled_start_1_107, 8, 0 );
  twobit_setreg( 1 );
  twobit_lambda( compiled_start_1_108, 10, 0 );
  twobit_setreg( 2 );
  twobit_global( 11 ); /* call-with-values */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_label( 2157, compiled_block_1_2157 );
  twobit_lambda( compiled_start_1_109, 13, 0 );
  twobit_setreg( 1 );
  twobit_lambda( compiled_start_1_110, 15, 0 );
  twobit_setreg( 2 );
  twobit_global( 11 ); /* call-with-values */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_105( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 3, 2 );
  twobit_lexical( 4, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_op2_602( 2 ); /* make-vector:2 */
  twobit_setreg( 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 31 );
  twobit_reg( 2 );
  twobit_op3_403( 31, 1 ); /* vector-set!:trusted:nwb */
  twobit_movereg( 2, 3 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 1, 4 );
  twobit_setreg( 4 );
  twobit_setrtn( 2039, compiled_block_1_2039 );
  twobit_jump( 5, 1805, compiled_block_1_1805 );
  twobit_label( 2039, compiled_block_1_2039 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 3, 1 );
  twobit_load( 2, 2 );
  twobit_global( 1 ); /* values */
  twobit_pop( 2 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_106( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_lexical( 4, 7 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lambda( compiled_start_1_111, 2, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-current-continuation */
  twobit_setrtn( 2151, compiled_block_1_2151 );
  twobit_invoke( 1 );
  twobit_label( 2151, compiled_block_1_2151 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 3, 1 );
  twobit_load( 2, 2 );
  twobit_global( 4 ); /* values */
  twobit_pop( 2 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_111( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 4 );
  twobit_lexical( 3, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2041, compiled_block_1_2041 );
  twobit_jump( 6, 1802, compiled_block_1_1802 );
  twobit_label( 2041, compiled_block_1_2041 );
  twobit_load( 0, 0 );
  twobit_branchf( 2043, compiled_block_1_2043 );
  twobit_lexical( 5, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 3, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2044, compiled_block_1_2044 );
  twobit_invoke( 1 );
  twobit_label( 2044, compiled_block_1_2044 );
  twobit_load( 0, 0 );
  twobit_branchf( 2046, compiled_block_1_2046 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2047, compiled_block_1_2047 );
  twobit_jump( 6, 1803, compiled_block_1_1803 );
  twobit_label( 2047, compiled_block_1_2047 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2049, compiled_block_1_2049 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2050, compiled_block_1_2050 );
  twobit_jump( 6, 1802, compiled_block_1_1802 );
  twobit_label( 2050, compiled_block_1_2050 );
  twobit_load( 0, 0 );
  twobit_branchf( 2052, compiled_block_1_2052 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2053, compiled_block_1_2053 );
  twobit_jump( 6, 1801, compiled_block_1_1801 );
  twobit_label( 2053, compiled_block_1_2053 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_branchf( 2055, compiled_block_1_2055 );
  twobit_lexical( 5, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_load( 1, 2 );
  twobit_reg( 3 );
  twobit_setrtn( 2056, compiled_block_1_2056 );
  twobit_invoke( 1 );
  twobit_label( 2056, compiled_block_1_2056 );
  twobit_load( 0, 0 );
  twobit_branchf( 2058, compiled_block_1_2058 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2059, compiled_block_1_2059 );
  twobit_jump( 6, 1802, compiled_block_1_1802 );
  twobit_label( 2059, compiled_block_1_2059 );
  twobit_load( 0, 0 );
  twobit_branchf( 2061, compiled_block_1_2061 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2042, compiled_block_1_2042 );
  twobit_label( 2061, compiled_block_1_2061 );
  twobit_lexical( 5, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2062, compiled_block_1_2062 );
  twobit_invoke( 1 );
  twobit_label( 2062, compiled_block_1_2062 );
  twobit_load( 0, 0 );
  twobit_branchf( 2064, compiled_block_1_2064 );
  twobit_load( 1, 3 );
  twobit_setrtn( 2065, compiled_block_1_2065 );
  twobit_jump( 6, 1802, compiled_block_1_1802 );
  twobit_label( 2065, compiled_block_1_2065 );
  twobit_load( 0, 0 );
  twobit_branchf( 2067, compiled_block_1_2067 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2042, compiled_block_1_2042 );
  twobit_label( 2067, compiled_block_1_2067 );
  twobit_load( 2, 4 );
  twobit_lambda( compiled_start_1_112, 2, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2069, compiled_block_1_2069 );
  twobit_invoke( 2 );
  twobit_label( 2069, compiled_block_1_2069 );
  twobit_load( 0, 0 );
  twobit_skip( 2042, compiled_block_1_2042 );
  twobit_label( 2064, compiled_block_1_2064 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2042, compiled_block_1_2042 );
  twobit_label( 2058, compiled_block_1_2058 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2042, compiled_block_1_2042 );
  twobit_label( 2055, compiled_block_1_2055 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2042, compiled_block_1_2042 );
  twobit_label( 2052, compiled_block_1_2052 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2042, compiled_block_1_2042 );
  twobit_label( 2049, compiled_block_1_2049 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2042, compiled_block_1_2042 );
  twobit_label( 2046, compiled_block_1_2046 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2042, compiled_block_1_2042 );
  twobit_label( 2043, compiled_block_1_2043 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2042, compiled_block_1_2042 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2071, compiled_block_1_2071 );
  twobit_reg( 4 );
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 2071, compiled_block_1_2071 );
  twobit_lexical( 3, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 1 );
  twobit_setrtn( 2072, compiled_block_1_2072 );
  twobit_jump( 6, 1802, compiled_block_1_1802 );
  twobit_label( 2072, compiled_block_1_2072 );
  twobit_load( 0, 0 );
  twobit_branchf( 2074, compiled_block_1_2074 );
  twobit_lexical( 5, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2075, compiled_block_1_2075 );
  twobit_invoke( 1 );
  twobit_label( 2075, compiled_block_1_2075 );
  twobit_load( 0, 0 );
  twobit_branchf( 2077, compiled_block_1_2077 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2078, compiled_block_1_2078 );
  twobit_jump( 6, 1803, compiled_block_1_1803 );
  twobit_label( 2078, compiled_block_1_2078 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2080, compiled_block_1_2080 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2081, compiled_block_1_2081 );
  twobit_jump( 6, 1802, compiled_block_1_1802 );
  twobit_label( 2081, compiled_block_1_2081 );
  twobit_load( 0, 0 );
  twobit_branchf( 2083, compiled_block_1_2083 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2084, compiled_block_1_2084 );
  twobit_jump( 6, 1801, compiled_block_1_1801 );
  twobit_label( 2084, compiled_block_1_2084 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_branchf( 2086, compiled_block_1_2086 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2087, compiled_block_1_2087 );
  twobit_jump( 6, 1802, compiled_block_1_1802 );
  twobit_label( 2087, compiled_block_1_2087 );
  twobit_load( 0, 0 );
  twobit_branchf( 2089, compiled_block_1_2089 );
  twobit_lexical( 5, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_reg( 4 );
  twobit_setrtn( 2090, compiled_block_1_2090 );
  twobit_invoke( 1 );
  twobit_label( 2090, compiled_block_1_2090 );
  twobit_load( 0, 0 );
  twobit_branchf( 2092, compiled_block_1_2092 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2093, compiled_block_1_2093 );
  twobit_jump( 6, 1803, compiled_block_1_1803 );
  twobit_label( 2093, compiled_block_1_2093 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_reg( 4 );
  twobit_branchf( 2095, compiled_block_1_2095 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2096, compiled_block_1_2096 );
  twobit_jump( 6, 1802, compiled_block_1_1802 );
  twobit_label( 2096, compiled_block_1_2096 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_branchf( 2098, compiled_block_1_2098 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2099, compiled_block_1_2099 );
  twobit_jump( 6, 1801, compiled_block_1_1801 );
  twobit_label( 2099, compiled_block_1_2099 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2101, compiled_block_1_2101 );
  twobit_lexical( 5, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_load( 1, 3 );
  twobit_reg( 3 );
  twobit_setrtn( 2102, compiled_block_1_2102 );
  twobit_invoke( 1 );
  twobit_label( 2102, compiled_block_1_2102 );
  twobit_load( 0, 0 );
  twobit_branchf( 2104, compiled_block_1_2104 );
  twobit_load( 1, 3 );
  twobit_setrtn( 2105, compiled_block_1_2105 );
  twobit_jump( 6, 1802, compiled_block_1_1802 );
  twobit_label( 2105, compiled_block_1_2105 );
  twobit_load( 0, 0 );
  twobit_branchf( 2107, compiled_block_1_2107 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2073, compiled_block_1_2073 );
  twobit_label( 2107, compiled_block_1_2107 );
  twobit_load( 2, 4 );
  twobit_store( 2, 3 );
  twobit_load( 3, 2 );
  twobit_load( 2, 5 );
  twobit_load( 1, 6 );
  twobit_lambda( compiled_start_1_113, 5, 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 3 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2109, compiled_block_1_2109 );
  twobit_invoke( 2 );
  twobit_label( 2109, compiled_block_1_2109 );
  twobit_load( 0, 0 );
  twobit_skip( 2073, compiled_block_1_2073 );
  twobit_label( 2104, compiled_block_1_2104 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2073, compiled_block_1_2073 );
  twobit_label( 2101, compiled_block_1_2101 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2073, compiled_block_1_2073 );
  twobit_label( 2098, compiled_block_1_2098 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2073, compiled_block_1_2073 );
  twobit_label( 2095, compiled_block_1_2095 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2073, compiled_block_1_2073 );
  twobit_label( 2092, compiled_block_1_2092 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2073, compiled_block_1_2073 );
  twobit_label( 2089, compiled_block_1_2089 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2073, compiled_block_1_2073 );
  twobit_label( 2086, compiled_block_1_2086 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2073, compiled_block_1_2073 );
  twobit_label( 2083, compiled_block_1_2083 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2073, compiled_block_1_2073 );
  twobit_label( 2080, compiled_block_1_2080 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2073, compiled_block_1_2073 );
  twobit_label( 2077, compiled_block_1_2077 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2073, compiled_block_1_2073 );
  twobit_label( 2074, compiled_block_1_2074 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2073, compiled_block_1_2073 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2111, compiled_block_1_2111 );
  twobit_reg( 4 );
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 2111, compiled_block_1_2111 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2112, compiled_block_1_2112 );
  twobit_jump( 6, 1802, compiled_block_1_1802 );
  twobit_label( 2112, compiled_block_1_2112 );
  twobit_load( 0, 0 );
  twobit_branchf( 2114, compiled_block_1_2114 );
  twobit_lexical( 5, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2115, compiled_block_1_2115 );
  twobit_invoke( 1 );
  twobit_label( 2115, compiled_block_1_2115 );
  twobit_load( 0, 0 );
  twobit_branchf( 2117, compiled_block_1_2117 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2118, compiled_block_1_2118 );
  twobit_jump( 6, 1803, compiled_block_1_1803 );
  twobit_label( 2118, compiled_block_1_2118 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2120, compiled_block_1_2120 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2121, compiled_block_1_2121 );
  twobit_jump( 6, 1802, compiled_block_1_1802 );
  twobit_label( 2121, compiled_block_1_2121 );
  twobit_load( 0, 0 );
  twobit_branchf( 2123, compiled_block_1_2123 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2124, compiled_block_1_2124 );
  twobit_jump( 6, 1801, compiled_block_1_1801 );
  twobit_label( 2124, compiled_block_1_2124 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_branchf( 2126, compiled_block_1_2126 );
  twobit_lexical( 5, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_load( 1, 2 );
  twobit_reg( 3 );
  twobit_setrtn( 2127, compiled_block_1_2127 );
  twobit_invoke( 1 );
  twobit_label( 2127, compiled_block_1_2127 );
  twobit_load( 0, 0 );
  twobit_branchf( 2129, compiled_block_1_2129 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2130, compiled_block_1_2130 );
  twobit_jump( 6, 1802, compiled_block_1_1802 );
  twobit_label( 2130, compiled_block_1_2130 );
  twobit_load( 0, 0 );
  twobit_branchf( 2132, compiled_block_1_2132 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2113, compiled_block_1_2113 );
  twobit_label( 2132, compiled_block_1_2132 );
  twobit_lexical( 5, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2133, compiled_block_1_2133 );
  twobit_invoke( 1 );
  twobit_label( 2133, compiled_block_1_2133 );
  twobit_load( 0, 0 );
  twobit_branchf( 2135, compiled_block_1_2135 );
  twobit_load( 1, 3 );
  twobit_setrtn( 2136, compiled_block_1_2136 );
  twobit_jump( 6, 1802, compiled_block_1_1802 );
  twobit_label( 2136, compiled_block_1_2136 );
  twobit_load( 0, 0 );
  twobit_branchf( 2138, compiled_block_1_2138 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2113, compiled_block_1_2113 );
  twobit_label( 2138, compiled_block_1_2138 );
  twobit_load( 2, 4 );
  twobit_lambda( compiled_start_1_114, 7, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2140, compiled_block_1_2140 );
  twobit_invoke( 2 );
  twobit_label( 2140, compiled_block_1_2140 );
  twobit_load( 0, 0 );
  twobit_skip( 2113, compiled_block_1_2113 );
  twobit_label( 2135, compiled_block_1_2135 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2113, compiled_block_1_2113 );
  twobit_label( 2129, compiled_block_1_2129 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2113, compiled_block_1_2113 );
  twobit_label( 2126, compiled_block_1_2126 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2113, compiled_block_1_2113 );
  twobit_label( 2123, compiled_block_1_2123 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2113, compiled_block_1_2113 );
  twobit_label( 2120, compiled_block_1_2120 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2113, compiled_block_1_2113 );
  twobit_label( 2117, compiled_block_1_2117 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2113, compiled_block_1_2113 );
  twobit_label( 2114, compiled_block_1_2114 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2113, compiled_block_1_2113 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2142, compiled_block_1_2142 );
  twobit_reg( 4 );
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 2142, compiled_block_1_2142 );
  twobit_load( 2, 4 );
  twobit_lambda( compiled_start_1_115, 9, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2147, compiled_block_1_2147 );
  twobit_invoke( 2 );
  twobit_label( 2147, compiled_block_1_2147 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2149, compiled_block_1_2149 );
  twobit_reg( 4 );
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 2149, compiled_block_1_2149 );
  twobit_const( 10 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 11 ); /* error */
  twobit_pop( 6 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_112( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 6, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_113( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 6, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_114( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 6, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_115( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_1_116, 2, 0 );
  twobit_setreg( 1 );
  twobit_lambda( compiled_start_1_117, 4, 0 );
  twobit_setreg( 2 );
  twobit_global( 5 ); /* call-with-values */
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_116( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 7, 8 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 4, 4 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_117( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_movereg( 1, 3 );
  twobit_movereg( 2, 4 );
  twobit_lexical( 4, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 4, 2 );
  twobit_setreg( 2 );
  twobit_setrtn( 2144, compiled_block_1_2144 );
  twobit_jump( 8, 1805, compiled_block_1_1805 );
  twobit_label( 2144, compiled_block_1_2144 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 7, 7 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 0 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_107( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 2 );
  twobit_setreg( 1 );
  twobit_jump( 3, 1998, compiled_block_1_1998 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_108( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 2, 2 );
  twobit_store( 3, 1 );
  twobit_movereg( 1, 2 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 3 );
  twobit_setreg( 3 );
  twobit_lexical( 1, 4 );
  twobit_setreg( 4 );
  twobit_setrtn( 2159, compiled_block_1_2159 );
  twobit_jump( 5, 1805, compiled_block_1_1805 );
  twobit_label( 2159, compiled_block_1_2159 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_stack( 1 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 2160, compiled_block_1_2160 );
  twobit_invoke( 1 );
  twobit_label( 2160, compiled_block_1_2160 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_load( 3, 1 );
  twobit_global( 1 ); /* values */
  twobit_pop( 2 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_109( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 4 );
  twobit_setreg( 1 );
  twobit_jump( 3, 1998, compiled_block_1_1998 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_110( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 2, 2 );
  twobit_store( 3, 1 );
  twobit_movereg( 1, 4 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 1, 3 );
  twobit_setreg( 3 );
  twobit_setrtn( 2164, compiled_block_1_2164 );
  twobit_jump( 5, 1805, compiled_block_1_1805 );
  twobit_label( 2164, compiled_block_1_2164 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_stack( 1 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 2165, compiled_block_1_2165 );
  twobit_invoke( 1 );
  twobit_label( 2165, compiled_block_1_2165 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_load( 3, 1 );
  twobit_global( 1 ); /* values */
  twobit_pop( 2 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_101( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 2173, compiled_block_1_2173 );
  twobit_invoke( 1 );
  twobit_label( 2173, compiled_block_1_2173 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 1 ); /* values */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_20( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 3, 2 );
  twobit_movereg( 4, 3 );
  twobit_load( 4, 1 );
  twobit_pop( 1 );
  twobit_label( 2176, compiled_block_1_2176 );
  twobit_lambda( compiled_start_1_96, 2, 4 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-current-continuation */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_96( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2179, compiled_block_1_2179 );
  twobit_invoke( 1 );
  twobit_label( 2179, compiled_block_1_2179 );
  twobit_load( 0, 0 );
  twobit_branchf( 2181, compiled_block_1_2181 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_setrtn( 2182, compiled_block_1_2182 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2182, compiled_block_1_2182 );
  twobit_load( 0, 0 );
  twobit_branchf( 2184, compiled_block_1_2184 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2180, compiled_block_1_2180 );
  twobit_label( 2184, compiled_block_1_2184 );
  twobit_load( 2, 1 );
  twobit_lambda( compiled_start_1_97, 2, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2186, compiled_block_1_2186 );
  twobit_invoke( 2 );
  twobit_label( 2186, compiled_block_1_2186 );
  twobit_load( 0, 0 );
  twobit_skip( 2180, compiled_block_1_2180 );
  twobit_label( 2181, compiled_block_1_2181 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2180, compiled_block_1_2180 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2188, compiled_block_1_2188 );
  twobit_reg( 4 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 2188, compiled_block_1_2188 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_setrtn( 2189, compiled_block_1_2189 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2189, compiled_block_1_2189 );
  twobit_load( 0, 0 );
  twobit_branchf( 2191, compiled_block_1_2191 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_setrtn( 2192, compiled_block_1_2192 );
  twobit_jump( 2, 1804, compiled_block_1_1804 );
  twobit_label( 2192, compiled_block_1_2192 );
  twobit_load( 0, 0 );
  twobit_branchf( 2194, compiled_block_1_2194 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_setrtn( 2195, compiled_block_1_2195 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2195, compiled_block_1_2195 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_branchf( 2197, compiled_block_1_2197 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_setrtn( 2198, compiled_block_1_2198 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2198, compiled_block_1_2198 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2200, compiled_block_1_2200 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_setrtn( 2201, compiled_block_1_2201 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2201, compiled_block_1_2201 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2203, compiled_block_1_2203 );
  twobit_load( 2, 1 );
  twobit_store( 2, 4 );
  twobit_load( 3, 2 );
  twobit_movereg( 4, 2 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_1_98, 5, 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 4 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2214, compiled_block_1_2214 );
  twobit_invoke( 2 );
  twobit_label( 2214, compiled_block_1_2214 );
  twobit_load( 0, 0 );
  twobit_skip( 2190, compiled_block_1_2190 );
  twobit_label( 2203, compiled_block_1_2203 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2190, compiled_block_1_2190 );
  twobit_label( 2200, compiled_block_1_2200 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2190, compiled_block_1_2190 );
  twobit_label( 2197, compiled_block_1_2197 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2190, compiled_block_1_2190 );
  twobit_label( 2194, compiled_block_1_2194 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2190, compiled_block_1_2190 );
  twobit_label( 2191, compiled_block_1_2191 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2190, compiled_block_1_2190 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2216, compiled_block_1_2216 );
  twobit_reg( 4 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 2216, compiled_block_1_2216 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 2 );
  twobit_global( 7 ); /* error */
  twobit_pop( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_97( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 3 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_98( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 2204, compiled_block_1_2204 );
  twobit_jump( 3, 1807, compiled_block_1_1807 );
  twobit_label( 2204, compiled_block_1_2204 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_movereg( 4, 2 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 1 );
  twobit_lexical( 1, 2 );
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_global( 1 ); /*  =?~1pxGHH~11721 */
  twobit_setrtn( 2205, compiled_block_1_2205 );
  twobit_invoke( 3 );
  twobit_label( 2205, compiled_block_1_2205 );
  twobit_load( 0, 0 );
  twobit_branchf( 2207, compiled_block_1_2207 );
  twobit_load( 1, 1 );
  twobit_load( 2, 2 );
  twobit_lexical( 1, 3 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 4 );
  twobit_pop( 3 );
  twobit_jump( 2, 2176, compiled_block_1_2176 );
  twobit_label( 2207, compiled_block_1_2207 );
  twobit_load( 1, 1 );
  twobit_load( 2, 3 );
  twobit_load( 3, 2 );
  twobit_global( 2 ); /*  <?~1pxGHH~11722 */
  twobit_setrtn( 2209, compiled_block_1_2209 );
  twobit_invoke( 3 );
  twobit_label( 2209, compiled_block_1_2209 );
  twobit_load( 0, 0 );
  twobit_branchf( 2211, compiled_block_1_2211 );
  twobit_load( 1, 1 );
  twobit_load( 2, 2 );
  twobit_lexical( 1, 3 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 4 );
  twobit_pop( 3 );
  twobit_jump( 2, 2176, compiled_block_1_2176 );
  twobit_label( 2211, compiled_block_1_2211 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_1_99, 4, 1 );
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_load( 2, 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 4 );
  twobit_pop( 3 );
  twobit_jump( 2, 2176, compiled_block_1_2176 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_99( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_21( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 3, 2 );
  twobit_movereg( 4, 3 );
  twobit_load( 4, 1 );
  twobit_pop( 1 );
  twobit_label( 2219, compiled_block_1_2219 );
  twobit_lambda( compiled_start_1_92, 2, 4 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-current-continuation */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_92( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2222, compiled_block_1_2222 );
  twobit_invoke( 1 );
  twobit_label( 2222, compiled_block_1_2222 );
  twobit_load( 0, 0 );
  twobit_branchf( 2224, compiled_block_1_2224 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_setrtn( 2225, compiled_block_1_2225 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2225, compiled_block_1_2225 );
  twobit_load( 0, 0 );
  twobit_branchf( 2227, compiled_block_1_2227 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2223, compiled_block_1_2223 );
  twobit_label( 2227, compiled_block_1_2227 );
  twobit_load( 2, 1 );
  twobit_lambda( compiled_start_1_93, 2, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2229, compiled_block_1_2229 );
  twobit_invoke( 2 );
  twobit_label( 2229, compiled_block_1_2229 );
  twobit_load( 0, 0 );
  twobit_skip( 2223, compiled_block_1_2223 );
  twobit_label( 2224, compiled_block_1_2224 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2223, compiled_block_1_2223 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2231, compiled_block_1_2231 );
  twobit_reg( 4 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 2231, compiled_block_1_2231 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_setrtn( 2232, compiled_block_1_2232 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2232, compiled_block_1_2232 );
  twobit_load( 0, 0 );
  twobit_branchf( 2234, compiled_block_1_2234 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_setrtn( 2235, compiled_block_1_2235 );
  twobit_jump( 2, 1804, compiled_block_1_1804 );
  twobit_label( 2235, compiled_block_1_2235 );
  twobit_load( 0, 0 );
  twobit_branchf( 2237, compiled_block_1_2237 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_setrtn( 2238, compiled_block_1_2238 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2238, compiled_block_1_2238 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_branchf( 2240, compiled_block_1_2240 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_setrtn( 2241, compiled_block_1_2241 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2241, compiled_block_1_2241 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2243, compiled_block_1_2243 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_setrtn( 2244, compiled_block_1_2244 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2244, compiled_block_1_2244 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2246, compiled_block_1_2246 );
  twobit_load( 2, 1 );
  twobit_store( 2, 4 );
  twobit_load( 3, 2 );
  twobit_movereg( 4, 2 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_1_94, 5, 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 4 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2257, compiled_block_1_2257 );
  twobit_invoke( 2 );
  twobit_label( 2257, compiled_block_1_2257 );
  twobit_load( 0, 0 );
  twobit_skip( 2233, compiled_block_1_2233 );
  twobit_label( 2246, compiled_block_1_2246 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2233, compiled_block_1_2233 );
  twobit_label( 2243, compiled_block_1_2243 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2233, compiled_block_1_2233 );
  twobit_label( 2240, compiled_block_1_2240 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2233, compiled_block_1_2233 );
  twobit_label( 2237, compiled_block_1_2237 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2233, compiled_block_1_2233 );
  twobit_label( 2234, compiled_block_1_2234 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2233, compiled_block_1_2233 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2259, compiled_block_1_2259 );
  twobit_reg( 4 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 2259, compiled_block_1_2259 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 2 );
  twobit_global( 7 ); /* error */
  twobit_pop( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_93( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 3 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_94( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 2247, compiled_block_1_2247 );
  twobit_jump( 3, 1807, compiled_block_1_1807 );
  twobit_label( 2247, compiled_block_1_2247 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_movereg( 4, 2 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 1 );
  twobit_lexical( 1, 2 );
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_global( 1 ); /*  =?~1pxGHH~11721 */
  twobit_setrtn( 2248, compiled_block_1_2248 );
  twobit_invoke( 3 );
  twobit_label( 2248, compiled_block_1_2248 );
  twobit_load( 0, 0 );
  twobit_branchf( 2250, compiled_block_1_2250 );
  twobit_load( 1, 1 );
  twobit_load( 2, 2 );
  twobit_lexical( 1, 3 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 4 );
  twobit_pop( 3 );
  twobit_jump( 2, 2219, compiled_block_1_2219 );
  twobit_label( 2250, compiled_block_1_2250 );
  twobit_load( 1, 1 );
  twobit_load( 2, 3 );
  twobit_load( 3, 2 );
  twobit_global( 2 ); /*  <?~1pxGHH~11722 */
  twobit_setrtn( 2252, compiled_block_1_2252 );
  twobit_invoke( 3 );
  twobit_label( 2252, compiled_block_1_2252 );
  twobit_load( 0, 0 );
  twobit_branchf( 2254, compiled_block_1_2254 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_1_95, 4, 1 );
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_load( 2, 2 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 4 );
  twobit_pop( 3 );
  twobit_jump( 2, 2219, compiled_block_1_2219 );
  twobit_label( 2254, compiled_block_1_2254 );
  twobit_load( 1, 1 );
  twobit_load( 2, 2 );
  twobit_lexical( 1, 3 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 4 );
  twobit_pop( 3 );
  twobit_jump( 2, 2219, compiled_block_1_2219 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_95( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_22( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_label( 2262, compiled_block_1_2262 );
  twobit_lambda( compiled_start_1_87, 2, 2 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-current-continuation */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_87( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2265, compiled_block_1_2265 );
  twobit_invoke( 1 );
  twobit_label( 2265, compiled_block_1_2265 );
  twobit_load( 0, 0 );
  twobit_branchf( 2267, compiled_block_1_2267 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_setrtn( 2268, compiled_block_1_2268 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2268, compiled_block_1_2268 );
  twobit_load( 0, 0 );
  twobit_branchf( 2270, compiled_block_1_2270 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2266, compiled_block_1_2266 );
  twobit_label( 2270, compiled_block_1_2270 );
  twobit_load( 2, 1 );
  twobit_lambda( compiled_start_1_88, 2, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2272, compiled_block_1_2272 );
  twobit_invoke( 2 );
  twobit_label( 2272, compiled_block_1_2272 );
  twobit_load( 0, 0 );
  twobit_skip( 2266, compiled_block_1_2266 );
  twobit_label( 2267, compiled_block_1_2267 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2266, compiled_block_1_2266 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2274, compiled_block_1_2274 );
  twobit_reg( 4 );
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 2274, compiled_block_1_2274 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_setrtn( 2275, compiled_block_1_2275 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2275, compiled_block_1_2275 );
  twobit_load( 0, 0 );
  twobit_branchf( 2277, compiled_block_1_2277 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_setrtn( 2278, compiled_block_1_2278 );
  twobit_jump( 2, 1804, compiled_block_1_1804 );
  twobit_label( 2278, compiled_block_1_2278 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_branchf( 2280, compiled_block_1_2280 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_setrtn( 2281, compiled_block_1_2281 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2281, compiled_block_1_2281 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 2283, compiled_block_1_2283 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_setrtn( 2284, compiled_block_1_2284 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2284, compiled_block_1_2284 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2286, compiled_block_1_2286 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_setrtn( 2287, compiled_block_1_2287 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2287, compiled_block_1_2287 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2289, compiled_block_1_2289 );
  twobit_load( 2, 1 );
  twobit_store( 2, 5 );
  twobit_load( 3, 2 );
  twobit_load( 2, 3 );
  twobit_load( 1, 4 );
  twobit_lambda( compiled_start_1_89, 5, 4 );
  twobit_setreg( 1 );
  twobit_load( 2, 5 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2297, compiled_block_1_2297 );
  twobit_invoke( 2 );
  twobit_label( 2297, compiled_block_1_2297 );
  twobit_load( 0, 0 );
  twobit_skip( 2276, compiled_block_1_2276 );
  twobit_label( 2289, compiled_block_1_2289 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2276, compiled_block_1_2276 );
  twobit_label( 2286, compiled_block_1_2286 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2276, compiled_block_1_2276 );
  twobit_label( 2283, compiled_block_1_2283 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2276, compiled_block_1_2276 );
  twobit_label( 2280, compiled_block_1_2280 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2276, compiled_block_1_2276 );
  twobit_label( 2277, compiled_block_1_2277 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2276, compiled_block_1_2276 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2299, compiled_block_1_2299 );
  twobit_reg( 4 );
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 2299, compiled_block_1_2299 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_global( 7 ); /* error */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_88( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_89( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_1_90, 2, 0 );
  twobit_setreg( 1 );
  twobit_lambda( compiled_start_1_91, 4, 0 );
  twobit_setreg( 2 );
  twobit_global( 5 ); /* call-with-values */
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_90( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lexical( 1, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 2290, compiled_block_1_2290 );
  twobit_jump( 4, 1807, compiled_block_1_1807 );
  twobit_label( 2290, compiled_block_1_2290 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 1, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 2291, compiled_block_1_2291 );
  twobit_jump( 4, 1806, compiled_block_1_1806 );
  twobit_label( 2291, compiled_block_1_2291 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_lexical( 2, 1 );
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_91( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_op2_602( 2 ); /* make-vector:2 */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op3_403( 3, 1 ); /* vector-set!:trusted:nwb */
  twobit_lexical( 2, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 2 );
  twobit_setrtn( 2293, compiled_block_1_2293 );
  twobit_jump( 3, 2262, compiled_block_1_2262 );
  twobit_label( 2293, compiled_block_1_2293 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 2, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 4 );
  twobit_setreg( 2 );
  twobit_setrtn( 2294, compiled_block_1_2294 );
  twobit_jump( 3, 2262, compiled_block_1_2262 );
  twobit_label( 2294, compiled_block_1_2294 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 1 );
  twobit_lexical( 1, 2 );
  twobit_setreg( 1 );
  twobit_load( 3, 2 );
  twobit_pop( 2 );
  twobit_jump( 4, 1805, compiled_block_1_1805 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_23( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 2, 3 );
  twobit_store( 3, 2 );
  twobit_store( 4, 5 );
  twobit_movereg( 4, 1 );
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_setrtn( 2305, compiled_block_1_2305 );
  twobit_invoke( 1 );
  twobit_label( 2305, compiled_block_1_2305 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_reg( 3 );
  twobit_setrtn( 2306, compiled_block_1_2306 );
  twobit_invoke( 1 );
  twobit_label( 2306, compiled_block_1_2306 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 3, 2 );
  twobit_op2_602( 3 ); /* make-vector:2 */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 2 );
  twobit_load( 1, 3 );
  twobit_reg( 3 );
  twobit_op3_403( 2, 1 ); /* vector-set!:trusted:nwb */
  twobit_load( 2, 4 );
  twobit_reg( 4 );
  twobit_op2_branchf_623( 2, 79, compiled_temp_1_79, 2308, compiled_block_1_2308 ); /* internal:branchf-= */
  twobit_load( 3, 5 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_load( 2, 2 );
  twobit_reg( 4 );
  twobit_pop( 5 );
  twobit_invoke( 3 );
  twobit_label( 2308, compiled_block_1_2308 );
  twobit_reg( 4 );
  twobit_op2_branchf_619( 2, 80, compiled_temp_1_80, 2311, compiled_block_1_2311 ); /* internal:branchf-< */
  twobit_load( 3, 5 );
  twobit_reg( 2 );
  twobit_op2_62( 4, 81, compiled_temp_1_81 ); /* - */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_load( 2, 2 );
  twobit_setrtn( 2312, compiled_block_1_2312 );
  twobit_branch( 2303, compiled_block_1_2303 );
  twobit_label( 2312, compiled_block_1_2312 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 5 );
  twobit_invoke( 1 );
  twobit_label( 2311, compiled_block_1_2311 );
  twobit_load( 3, 1 );
  twobit_load( 1, 5 );
  twobit_reg( 4 );
  twobit_op2_62( 2, 82, compiled_temp_1_82 ); /* - */
  twobit_setreg( 4 );
  twobit_load( 2, 2 );
  twobit_setrtn( 2314, compiled_block_1_2314 );
  twobit_branch( 2302, compiled_block_1_2302 );
  twobit_label( 2314, compiled_block_1_2314 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 5 );
  twobit_invoke( 1 );
  twobit_label( 2302, compiled_block_1_2302 );
  twobit_reg( 4 );
  twobit_op1_branchf_612( 83, compiled_temp_1_83, 2317, compiled_block_1_2317 ); /* internal:branchf-zero? */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 3, 2 );
  twobit_load( 3, 1 );
  twobit_movereg( 1, 4 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2318, compiled_block_1_2318 );
  twobit_jump( 1, 1805, compiled_block_1_1805 );
  twobit_label( 2318, compiled_block_1_2318 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 1 );
  twobit_invoke( 1 );
  twobit_label( 2317, compiled_block_1_2317 );
  twobit_save( 7 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 4 );
  twobit_store( 3, 1 );
  twobit_store( 4, 2 );
  twobit_movereg( 3, 1 );
  twobit_setrtn( 2320, compiled_block_1_2320 );
  twobit_jump( 1, 1804, compiled_block_1_1804 );
  twobit_label( 2320, compiled_block_1_2320 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2321, compiled_block_1_2321 );
  twobit_jump( 1, 1803, compiled_block_1_1803 );
  twobit_label( 2321, compiled_block_1_2321 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2322, compiled_block_1_2322 );
  twobit_jump( 1, 1802, compiled_block_1_1802 );
  twobit_label( 2322, compiled_block_1_2322 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_load( 1, 1 );
  twobit_stack( 2 );
  twobit_op2imm_131( fixnum(1), 84, compiled_temp_1_84 ); /* - */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_setrtn( 2323, compiled_block_1_2323 );
  twobit_jump( 1, 1801, compiled_block_1_1801 );
  twobit_label( 2323, compiled_block_1_2323 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 4, 2 );
  twobit_load( 1, 3 );
  twobit_load( 2, 4 );
  twobit_setrtn( 2324, compiled_block_1_2324 );
  twobit_branch( 2302, compiled_block_1_2302 );
  twobit_label( 2324, compiled_block_1_2324 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 3, 5 );
  twobit_load( 2, 6 );
  twobit_load( 1, 7 );
  twobit_setrtn( 2325, compiled_block_1_2325 );
  twobit_jump( 1, 1805, compiled_block_1_1805 );
  twobit_label( 2325, compiled_block_1_2325 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 7 );
  twobit_invoke( 1 );
  twobit_label( 2303, compiled_block_1_2303 );
  twobit_reg( 4 );
  twobit_op1_branchf_612( 85, compiled_temp_1_85, 2328, compiled_block_1_2328 ); /* internal:branchf-zero? */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_store( 3, 2 );
  twobit_movereg( 1, 2 );
  twobit_load( 3, 1 );
  twobit_load( 4, 2 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2329, compiled_block_1_2329 );
  twobit_jump( 1, 1805, compiled_block_1_1805 );
  twobit_label( 2329, compiled_block_1_2329 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 2 );
  twobit_invoke( 1 );
  twobit_label( 2328, compiled_block_1_2328 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 4 );
  twobit_store( 3, 1 );
  twobit_store( 4, 2 );
  twobit_movereg( 3, 1 );
  twobit_setrtn( 2331, compiled_block_1_2331 );
  twobit_jump( 1, 1804, compiled_block_1_1804 );
  twobit_label( 2331, compiled_block_1_2331 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_load( 1, 1 );
  twobit_stack( 2 );
  twobit_op2imm_131( fixnum(1), 86, compiled_temp_1_86 ); /* - */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_setrtn( 2332, compiled_block_1_2332 );
  twobit_jump( 1, 1803, compiled_block_1_1803 );
  twobit_label( 2332, compiled_block_1_2332 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 4, 2 );
  twobit_load( 1, 3 );
  twobit_load( 2, 4 );
  twobit_setrtn( 2333, compiled_block_1_2333 );
  twobit_branch( 2303, compiled_block_1_2303 );
  twobit_label( 2333, compiled_block_1_2333 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2334, compiled_block_1_2334 );
  twobit_jump( 1, 1802, compiled_block_1_1802 );
  twobit_label( 2334, compiled_block_1_2334 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2335, compiled_block_1_2335 );
  twobit_jump( 1, 1801, compiled_block_1_1801 );
  twobit_label( 2335, compiled_block_1_2335 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 3, 4 );
  twobit_load( 2, 3 );
  twobit_load( 1, 5 );
  twobit_setrtn( 2336, compiled_block_1_2336 );
  twobit_jump( 1, 1805, compiled_block_1_1805 );
  twobit_label( 2336, compiled_block_1_2336 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 5 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_24( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 4 );
  twobit_store( 2, 1 );
  twobit_store( 3, 3 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 2340, compiled_block_1_2340 );
  twobit_invoke( 0 );
  twobit_label( 2340, compiled_block_1_2340 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_setrtn( 2341, compiled_block_1_2341 );
  twobit_invoke( 0 );
  twobit_label( 2341, compiled_block_1_2341 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_load( 4, 2 );
  twobit_load( 2, 3 );
  twobit_load( 1, 4 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 5 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 6 );
  twobit_load( 7, 1 );
  twobit_pop( 4 );
  twobit_label( 2338, compiled_block_1_2338 );
  twobit_lambda( compiled_start_1_76, 2, 7 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-current-continuation */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_76( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 7 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2343, compiled_block_1_2343 );
  twobit_invoke( 1 );
  twobit_label( 2343, compiled_block_1_2343 );
  twobit_load( 0, 0 );
  twobit_branchf( 2345, compiled_block_1_2345 );
  twobit_lexical( 0, 7 );
  twobit_setreg( 1 );
  twobit_setrtn( 2346, compiled_block_1_2346 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2346, compiled_block_1_2346 );
  twobit_load( 0, 0 );
  twobit_branchf( 2348, compiled_block_1_2348 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2344, compiled_block_1_2344 );
  twobit_label( 2348, compiled_block_1_2348 );
  twobit_load( 2, 1 );
  twobit_lambda( compiled_start_1_77, 2, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2355, compiled_block_1_2355 );
  twobit_invoke( 2 );
  twobit_label( 2355, compiled_block_1_2355 );
  twobit_load( 0, 0 );
  twobit_skip( 2344, compiled_block_1_2344 );
  twobit_label( 2345, compiled_block_1_2345 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2344, compiled_block_1_2344 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2357, compiled_block_1_2357 );
  twobit_reg( 4 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 2357, compiled_block_1_2357 );
  twobit_lexical( 0, 7 );
  twobit_setreg( 1 );
  twobit_setrtn( 2358, compiled_block_1_2358 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2358, compiled_block_1_2358 );
  twobit_load( 0, 0 );
  twobit_branchf( 2360, compiled_block_1_2360 );
  twobit_lexical( 0, 7 );
  twobit_setreg( 1 );
  twobit_setrtn( 2361, compiled_block_1_2361 );
  twobit_jump( 2, 1804, compiled_block_1_1804 );
  twobit_label( 2361, compiled_block_1_2361 );
  twobit_load( 0, 0 );
  twobit_branchf( 2363, compiled_block_1_2363 );
  twobit_lexical( 0, 7 );
  twobit_setreg( 1 );
  twobit_setrtn( 2364, compiled_block_1_2364 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2364, compiled_block_1_2364 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2366, compiled_block_1_2366 );
  twobit_lexical( 0, 7 );
  twobit_setreg( 1 );
  twobit_setrtn( 2367, compiled_block_1_2367 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2367, compiled_block_1_2367 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_branchf( 2369, compiled_block_1_2369 );
  twobit_lexical( 0, 7 );
  twobit_setreg( 1 );
  twobit_setrtn( 2370, compiled_block_1_2370 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2370, compiled_block_1_2370 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2372, compiled_block_1_2372 );
  twobit_load( 2, 1 );
  twobit_store( 2, 4 );
  twobit_load( 3, 2 );
  twobit_movereg( 4, 2 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_1_78, 5, 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 4 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2401, compiled_block_1_2401 );
  twobit_invoke( 2 );
  twobit_label( 2401, compiled_block_1_2401 );
  twobit_load( 0, 0 );
  twobit_skip( 2359, compiled_block_1_2359 );
  twobit_label( 2372, compiled_block_1_2372 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2359, compiled_block_1_2359 );
  twobit_label( 2369, compiled_block_1_2369 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2359, compiled_block_1_2359 );
  twobit_label( 2366, compiled_block_1_2366 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2359, compiled_block_1_2359 );
  twobit_label( 2363, compiled_block_1_2363 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2359, compiled_block_1_2359 );
  twobit_label( 2360, compiled_block_1_2360 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2359, compiled_block_1_2359 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2403, compiled_block_1_2403 );
  twobit_reg( 4 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 2403, compiled_block_1_2403 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 7 );
  twobit_setreg( 2 );
  twobit_global( 7 ); /* error */
  twobit_pop( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_77( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 2349, compiled_block_1_2349 );
  twobit_invoke( 0 );
  twobit_label( 2349, compiled_block_1_2349 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 2, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 1, 6 );
  twobit_setreg( 2 );
  twobit_lexical( 1, 4 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2350, compiled_block_1_2350 );
  twobit_invoke( 3 );
  twobit_label( 2350, compiled_block_1_2350 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_setrtn( 2351, compiled_block_1_2351 );
  twobit_invoke( 0 );
  twobit_label( 2351, compiled_block_1_2351 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_lexical( 2, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 1, 3 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 5 );
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_setrtn( 2352, compiled_block_1_2352 );
  twobit_invoke( 3 );
  twobit_label( 2352, compiled_block_1_2352 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_setrtn( 2353, compiled_block_1_2353 );
  twobit_invoke( 0 );
  twobit_label( 2353, compiled_block_1_2353 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 4, 1 );
  twobit_load( 1, 2 );
  twobit_load( 2, 2 );
  twobit_load( 5, 1 );
  twobit_global( 1 ); /* values */
  twobit_pop( 2 );
  twobit_invoke( 5 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_78( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 7 );
  twobit_store( 0, 0 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2373, compiled_block_1_2373 );
  twobit_jump( 3, 1807, compiled_block_1_1807 );
  twobit_label( 2373, compiled_block_1_2373 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 6 );
  twobit_lexical( 1, 2 );
  twobit_setreg( 2 );
  twobit_store( 2, 7 );
  twobit_global( 1 ); /*  =?~1pxGHH~11721 */
  twobit_setrtn( 2374, compiled_block_1_2374 );
  twobit_invoke( 3 );
  twobit_label( 2374, compiled_block_1_2374 );
  twobit_load( 0, 0 );
  twobit_branchf( 2376, compiled_block_1_2376 );
  twobit_lexical( 2, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2377, compiled_block_1_2377 );
  twobit_invoke( 1 );
  twobit_label( 2377, compiled_block_1_2377 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_lexical( 2, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 1, 3 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 5 );
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_setrtn( 2378, compiled_block_1_2378 );
  twobit_invoke( 3 );
  twobit_label( 2378, compiled_block_1_2378 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_setrtn( 2379, compiled_block_1_2379 );
  twobit_invoke( 0 );
  twobit_label( 2379, compiled_block_1_2379 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_lexical( 2, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_setrtn( 2380, compiled_block_1_2380 );
  twobit_invoke( 3 );
  twobit_label( 2380, compiled_block_1_2380 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_lexical( 2, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_reg( 3 );
  twobit_setrtn( 2381, compiled_block_1_2381 );
  twobit_invoke( 1 );
  twobit_label( 2381, compiled_block_1_2381 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 2, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 1, 6 );
  twobit_setreg( 2 );
  twobit_lexical( 1, 4 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2382, compiled_block_1_2382 );
  twobit_invoke( 3 );
  twobit_label( 2382, compiled_block_1_2382 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_setrtn( 2383, compiled_block_1_2383 );
  twobit_invoke( 0 );
  twobit_label( 2383, compiled_block_1_2383 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 3, 2 );
  twobit_lexical( 2, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_setrtn( 2384, compiled_block_1_2384 );
  twobit_invoke( 3 );
  twobit_label( 2384, compiled_block_1_2384 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_setrtn( 2385, compiled_block_1_2385 );
  twobit_invoke( 0 );
  twobit_label( 2385, compiled_block_1_2385 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_setrtn( 2386, compiled_block_1_2386 );
  twobit_invoke( 0 );
  twobit_label( 2386, compiled_block_1_2386 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 1, 3 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_setrtn( 2387, compiled_block_1_2387 );
  twobit_invoke( 3 );
  twobit_label( 2387, compiled_block_1_2387 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 4, 4 );
  twobit_load( 2, 5 );
  twobit_load( 1, 1 );
  twobit_load( 5, 2 );
  twobit_global( 2 ); /* values */
  twobit_pop( 7 );
  twobit_invoke( 5 );
  twobit_label( 2376, compiled_block_1_2376 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2389, compiled_block_1_2389 );
  twobit_jump( 3, 1807, compiled_block_1_1807 );
  twobit_label( 2389, compiled_block_1_2389 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 1, 6 );
  twobit_load( 2, 7 );
  twobit_global( 3 ); /*  <?~1pxGHH~11722 */
  twobit_setrtn( 2390, compiled_block_1_2390 );
  twobit_invoke( 3 );
  twobit_label( 2390, compiled_block_1_2390 );
  twobit_load( 0, 0 );
  twobit_branchf( 2392, compiled_block_1_2392 );
  twobit_lexical( 2, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2393, compiled_block_1_2393 );
  twobit_invoke( 1 );
  twobit_label( 2393, compiled_block_1_2393 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 2, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 1, 6 );
  twobit_setreg( 2 );
  twobit_lexical( 1, 4 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2394, compiled_block_1_2394 );
  twobit_invoke( 3 );
  twobit_label( 2394, compiled_block_1_2394 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 2, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_reg( 3 );
  twobit_setrtn( 2395, compiled_block_1_2395 );
  twobit_invoke( 1 );
  twobit_label( 2395, compiled_block_1_2395 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 4, 1 );
  twobit_load( 1, 6 );
  twobit_load( 2, 7 );
  twobit_lexical( 1, 3 );
  twobit_setreg( 3 );
  twobit_lexical( 1, 5 );
  twobit_setreg( 5 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 6 );
  twobit_load( 7, 2 );
  twobit_pop( 7 );
  twobit_jump( 2, 2338, compiled_block_1_2338 );
  twobit_label( 2392, compiled_block_1_2392 );
  twobit_lexical( 2, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2397, compiled_block_1_2397 );
  twobit_invoke( 1 );
  twobit_label( 2397, compiled_block_1_2397 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_lexical( 2, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 1, 3 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 5 );
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_setrtn( 2398, compiled_block_1_2398 );
  twobit_invoke( 3 );
  twobit_label( 2398, compiled_block_1_2398 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 2, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_reg( 3 );
  twobit_setrtn( 2399, compiled_block_1_2399 );
  twobit_invoke( 1 );
  twobit_label( 2399, compiled_block_1_2399 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 3, 1 );
  twobit_movereg( 4, 7 );
  twobit_load( 1, 6 );
  twobit_load( 2, 7 );
  twobit_lexical( 1, 4 );
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 5 );
  twobit_lexical( 1, 6 );
  twobit_setreg( 6 );
  twobit_pop( 7 );
  twobit_jump( 2, 2338, compiled_block_1_2338 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_25( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_reg( 2 );
  twobit_branchf( 2407, compiled_block_1_2407 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 4 );
  twobit_store( 2, 1 );
  twobit_store( 3, 3 );
  twobit_movereg( 2, 1 );
  twobit_setrtn( 2408, compiled_block_1_2408 );
  twobit_jump( 1, 1807, compiled_block_1_1807 );
  twobit_label( 2408, compiled_block_1_2408 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2409, compiled_block_1_2409 );
  twobit_jump( 1, 1806, compiled_block_1_1806 );
  twobit_label( 2409, compiled_block_1_2409 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 2, 2 );
  twobit_load( 4, 3 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 1 );
  twobit_movereg( 1, 5 );
  twobit_load( 1, 4 );
  twobit_reg( 5 );
  twobit_pop( 4 );
  twobit_invoke( 4 );
  twobit_label( 2407, compiled_block_1_2407 );
  twobit_reg( 3 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_26( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_reg( 2 );
  twobit_branchf( 2412, compiled_block_1_2412 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 4 );
  twobit_store( 2, 1 );
  twobit_store( 3, 3 );
  twobit_movereg( 2, 1 );
  twobit_setrtn( 2413, compiled_block_1_2413 );
  twobit_jump( 1, 1807, compiled_block_1_1807 );
  twobit_label( 2413, compiled_block_1_2413 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2414, compiled_block_1_2414 );
  twobit_jump( 1, 1806, compiled_block_1_1806 );
  twobit_label( 2414, compiled_block_1_2414 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 2, 2 );
  twobit_load( 4, 3 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 1 );
  twobit_movereg( 1, 5 );
  twobit_load( 1, 4 );
  twobit_reg( 5 );
  twobit_pop( 4 );
  twobit_invoke( 4 );
  twobit_label( 2412, compiled_block_1_2412 );
  twobit_reg( 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_27( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_label( 2416, compiled_block_1_2416 );
  twobit_lambda( compiled_start_1_71, 2, 1 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-current-continuation */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_71( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2419, compiled_block_1_2419 );
  twobit_invoke( 1 );
  twobit_label( 2419, compiled_block_1_2419 );
  twobit_load( 0, 0 );
  twobit_branchf( 2421, compiled_block_1_2421 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2422, compiled_block_1_2422 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2422, compiled_block_1_2422 );
  twobit_load( 0, 0 );
  twobit_branchf( 2424, compiled_block_1_2424 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2420, compiled_block_1_2420 );
  twobit_label( 2424, compiled_block_1_2424 );
  twobit_load( 2, 1 );
  twobit_lambda( compiled_start_1_72, 2, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2425, compiled_block_1_2425 );
  twobit_invoke( 2 );
  twobit_label( 2425, compiled_block_1_2425 );
  twobit_load( 0, 0 );
  twobit_skip( 2420, compiled_block_1_2420 );
  twobit_label( 2421, compiled_block_1_2421 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2420, compiled_block_1_2420 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2427, compiled_block_1_2427 );
  twobit_reg( 4 );
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 2427, compiled_block_1_2427 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2428, compiled_block_1_2428 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2428, compiled_block_1_2428 );
  twobit_load( 0, 0 );
  twobit_branchf( 2430, compiled_block_1_2430 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2431, compiled_block_1_2431 );
  twobit_jump( 2, 1804, compiled_block_1_1804 );
  twobit_label( 2431, compiled_block_1_2431 );
  twobit_load( 0, 0 );
  twobit_branchf( 2433, compiled_block_1_2433 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2434, compiled_block_1_2434 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2434, compiled_block_1_2434 );
  twobit_load( 0, 0 );
  twobit_branchf( 2436, compiled_block_1_2436 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2437, compiled_block_1_2437 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2437, compiled_block_1_2437 );
  twobit_load( 0, 0 );
  twobit_branchf( 2439, compiled_block_1_2439 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2440, compiled_block_1_2440 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2440, compiled_block_1_2440 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2442, compiled_block_1_2442 );
  twobit_load( 2, 1 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_1_73, 5, 1 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2444, compiled_block_1_2444 );
  twobit_invoke( 2 );
  twobit_label( 2444, compiled_block_1_2444 );
  twobit_load( 0, 0 );
  twobit_skip( 2429, compiled_block_1_2429 );
  twobit_label( 2442, compiled_block_1_2442 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2429, compiled_block_1_2429 );
  twobit_label( 2439, compiled_block_1_2439 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2429, compiled_block_1_2429 );
  twobit_label( 2436, compiled_block_1_2436 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2429, compiled_block_1_2429 );
  twobit_label( 2433, compiled_block_1_2433 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2429, compiled_block_1_2429 );
  twobit_label( 2430, compiled_block_1_2430 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2429, compiled_block_1_2429 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2446, compiled_block_1_2446 );
  twobit_reg( 4 );
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 2446, compiled_block_1_2446 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2447, compiled_block_1_2447 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2447, compiled_block_1_2447 );
  twobit_load( 0, 0 );
  twobit_branchf( 2449, compiled_block_1_2449 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2450, compiled_block_1_2450 );
  twobit_jump( 2, 1804, compiled_block_1_1804 );
  twobit_label( 2450, compiled_block_1_2450 );
  twobit_load( 0, 0 );
  twobit_branchf( 2452, compiled_block_1_2452 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2453, compiled_block_1_2453 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2453, compiled_block_1_2453 );
  twobit_load( 0, 0 );
  twobit_branchf( 2455, compiled_block_1_2455 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2456, compiled_block_1_2456 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2456, compiled_block_1_2456 );
  twobit_load( 0, 0 );
  twobit_branchf( 2458, compiled_block_1_2458 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2459, compiled_block_1_2459 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2459, compiled_block_1_2459 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2461, compiled_block_1_2461 );
  twobit_load( 2, 1 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_1_74, 7, 1 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2463, compiled_block_1_2463 );
  twobit_invoke( 2 );
  twobit_label( 2463, compiled_block_1_2463 );
  twobit_load( 0, 0 );
  twobit_skip( 2448, compiled_block_1_2448 );
  twobit_label( 2461, compiled_block_1_2461 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2448, compiled_block_1_2448 );
  twobit_label( 2458, compiled_block_1_2458 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2448, compiled_block_1_2448 );
  twobit_label( 2455, compiled_block_1_2455 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2448, compiled_block_1_2448 );
  twobit_label( 2452, compiled_block_1_2452 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2448, compiled_block_1_2448 );
  twobit_label( 2449, compiled_block_1_2449 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2448, compiled_block_1_2448 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2465, compiled_block_1_2465 );
  twobit_reg( 4 );
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 2465, compiled_block_1_2465 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_global( 9 ); /* error */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_72( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_73( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_jump( 2, 2416, compiled_block_1_2416 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_74( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2462, compiled_block_1_2462 );
  twobit_jump( 2, 2416, compiled_block_1_2416 );
  twobit_label( 2462, compiled_block_1_2462 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_op2_61( 4, 75, compiled_temp_1_75 ); /* + */
  twobit_pop( 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_28( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 1, 2 );
  twobit_load( 3, 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 1 );
  twobit_pop( 1 );
  twobit_label( 2468, compiled_block_1_2468 );
  twobit_reg( 3 );
  twobit_op1_branchf_612( 69, compiled_temp_1_69, 2472, compiled_block_1_2472 ); /* internal:branchf-zero? */
  twobit_global( 1 ); /* values */
  twobit_invoke( 2 );
  twobit_label( 2472, compiled_block_1_2472 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 2, 2 );
  twobit_movereg( 2, 1 );
  twobit_reg( 3 );
  twobit_op2imm_131( fixnum(1), 70, compiled_temp_1_70 ); /* - */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_setrtn( 2474, compiled_block_1_2474 );
  twobit_jump( 1, 1803, compiled_block_1_1803 );
  twobit_label( 2474, compiled_block_1_2474 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 3, 1 );
  twobit_load( 1, 2 );
  twobit_pop( 2 );
  twobit_branch( 2468, compiled_block_1_2468 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_29( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 1, 2 );
  twobit_load( 3, 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 1 );
  twobit_pop( 1 );
  twobit_label( 2476, compiled_block_1_2476 );
  twobit_reg( 3 );
  twobit_op1_branchf_612( 67, compiled_temp_1_67, 2480, compiled_block_1_2480 ); /* internal:branchf-zero? */
  twobit_global( 1 ); /* values */
  twobit_invoke( 2 );
  twobit_label( 2480, compiled_block_1_2480 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 2, 2 );
  twobit_movereg( 2, 1 );
  twobit_reg( 3 );
  twobit_op2imm_131( fixnum(1), 68, compiled_temp_1_68 ); /* - */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_setrtn( 2482, compiled_block_1_2482 );
  twobit_jump( 1, 1801, compiled_block_1_1801 );
  twobit_label( 2482, compiled_block_1_2482 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 3, 1 );
  twobit_load( 1, 2 );
  twobit_pop( 2 );
  twobit_branch( 2476, compiled_block_1_2476 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_30( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lambda( compiled_start_1_60, 2, 1 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-current-continuation */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_60( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2484, compiled_block_1_2484 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2484, compiled_block_1_2484 );
  twobit_load( 0, 0 );
  twobit_branchf( 2486, compiled_block_1_2486 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2487, compiled_block_1_2487 );
  twobit_invoke( 1 );
  twobit_label( 2487, compiled_block_1_2487 );
  twobit_load( 0, 0 );
  twobit_branchf( 2489, compiled_block_1_2489 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2490, compiled_block_1_2490 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2490, compiled_block_1_2490 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 2492, compiled_block_1_2492 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2493, compiled_block_1_2493 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2493, compiled_block_1_2493 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 2495, compiled_block_1_2495 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2496, compiled_block_1_2496 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2496, compiled_block_1_2496 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2498, compiled_block_1_2498 );
  twobit_lexical( 1, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_reg( 3 );
  twobit_setrtn( 2499, compiled_block_1_2499 );
  twobit_invoke( 1 );
  twobit_label( 2499, compiled_block_1_2499 );
  twobit_load( 0, 0 );
  twobit_branchf( 2501, compiled_block_1_2501 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2502, compiled_block_1_2502 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2502, compiled_block_1_2502 );
  twobit_load( 0, 0 );
  twobit_branchf( 2504, compiled_block_1_2504 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2485, compiled_block_1_2485 );
  twobit_label( 2504, compiled_block_1_2504 );
  twobit_lexical( 1, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_reg( 4 );
  twobit_setrtn( 2505, compiled_block_1_2505 );
  twobit_invoke( 1 );
  twobit_label( 2505, compiled_block_1_2505 );
  twobit_load( 0, 0 );
  twobit_branchf( 2507, compiled_block_1_2507 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2508, compiled_block_1_2508 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2508, compiled_block_1_2508 );
  twobit_load( 0, 0 );
  twobit_branchf( 2510, compiled_block_1_2510 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2485, compiled_block_1_2485 );
  twobit_label( 2510, compiled_block_1_2510 );
  twobit_load( 2, 3 );
  twobit_load( 1, 4 );
  twobit_lambda( compiled_start_1_61, 2, 1 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2513, compiled_block_1_2513 );
  twobit_invoke( 2 );
  twobit_label( 2513, compiled_block_1_2513 );
  twobit_load( 0, 0 );
  twobit_skip( 2485, compiled_block_1_2485 );
  twobit_label( 2507, compiled_block_1_2507 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2485, compiled_block_1_2485 );
  twobit_label( 2501, compiled_block_1_2501 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2485, compiled_block_1_2485 );
  twobit_label( 2498, compiled_block_1_2498 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2485, compiled_block_1_2485 );
  twobit_label( 2495, compiled_block_1_2495 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2485, compiled_block_1_2485 );
  twobit_label( 2492, compiled_block_1_2492 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2485, compiled_block_1_2485 );
  twobit_label( 2489, compiled_block_1_2489 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2485, compiled_block_1_2485 );
  twobit_label( 2486, compiled_block_1_2486 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2485, compiled_block_1_2485 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2515, compiled_block_1_2515 );
  twobit_reg( 4 );
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 2515, compiled_block_1_2515 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2516, compiled_block_1_2516 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2516, compiled_block_1_2516 );
  twobit_load( 0, 0 );
  twobit_branchf( 2518, compiled_block_1_2518 );
  twobit_lexical( 1, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2519, compiled_block_1_2519 );
  twobit_invoke( 1 );
  twobit_label( 2519, compiled_block_1_2519 );
  twobit_load( 0, 0 );
  twobit_branchf( 2521, compiled_block_1_2521 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2522, compiled_block_1_2522 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2522, compiled_block_1_2522 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 2524, compiled_block_1_2524 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2525, compiled_block_1_2525 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2525, compiled_block_1_2525 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2527, compiled_block_1_2527 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2528, compiled_block_1_2528 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2528, compiled_block_1_2528 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 2530, compiled_block_1_2530 );
  twobit_lexical( 1, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_reg( 3 );
  twobit_setrtn( 2531, compiled_block_1_2531 );
  twobit_invoke( 1 );
  twobit_label( 2531, compiled_block_1_2531 );
  twobit_load( 0, 0 );
  twobit_branchf( 2533, compiled_block_1_2533 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2534, compiled_block_1_2534 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2534, compiled_block_1_2534 );
  twobit_load( 0, 0 );
  twobit_branchf( 2536, compiled_block_1_2536 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2517, compiled_block_1_2517 );
  twobit_label( 2536, compiled_block_1_2536 );
  twobit_lexical( 1, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 4 );
  twobit_reg( 4 );
  twobit_setrtn( 2537, compiled_block_1_2537 );
  twobit_invoke( 1 );
  twobit_label( 2537, compiled_block_1_2537 );
  twobit_load( 0, 0 );
  twobit_branchf( 2539, compiled_block_1_2539 );
  twobit_load( 1, 4 );
  twobit_setrtn( 2540, compiled_block_1_2540 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2540, compiled_block_1_2540 );
  twobit_load( 0, 0 );
  twobit_branchf( 2542, compiled_block_1_2542 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2517, compiled_block_1_2517 );
  twobit_label( 2542, compiled_block_1_2542 );
  twobit_load( 2, 3 );
  twobit_load( 1, 2 );
  twobit_lambda( compiled_start_1_62, 5, 1 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2545, compiled_block_1_2545 );
  twobit_invoke( 2 );
  twobit_label( 2545, compiled_block_1_2545 );
  twobit_load( 0, 0 );
  twobit_skip( 2517, compiled_block_1_2517 );
  twobit_label( 2539, compiled_block_1_2539 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2517, compiled_block_1_2517 );
  twobit_label( 2533, compiled_block_1_2533 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2517, compiled_block_1_2517 );
  twobit_label( 2530, compiled_block_1_2530 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2517, compiled_block_1_2517 );
  twobit_label( 2527, compiled_block_1_2527 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2517, compiled_block_1_2517 );
  twobit_label( 2524, compiled_block_1_2524 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2517, compiled_block_1_2517 );
  twobit_label( 2521, compiled_block_1_2521 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2517, compiled_block_1_2517 );
  twobit_label( 2518, compiled_block_1_2518 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2517, compiled_block_1_2517 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2547, compiled_block_1_2547 );
  twobit_reg( 4 );
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 2547, compiled_block_1_2547 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2548, compiled_block_1_2548 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2548, compiled_block_1_2548 );
  twobit_load( 0, 0 );
  twobit_branchf( 2550, compiled_block_1_2550 );
  twobit_lexical( 1, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2551, compiled_block_1_2551 );
  twobit_invoke( 1 );
  twobit_label( 2551, compiled_block_1_2551 );
  twobit_load( 0, 0 );
  twobit_branchf( 2553, compiled_block_1_2553 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2554, compiled_block_1_2554 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2554, compiled_block_1_2554 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 2556, compiled_block_1_2556 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2557, compiled_block_1_2557 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2557, compiled_block_1_2557 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_branchf( 2559, compiled_block_1_2559 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2560, compiled_block_1_2560 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2560, compiled_block_1_2560 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2562, compiled_block_1_2562 );
  twobit_lexical( 1, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_reg( 3 );
  twobit_setrtn( 2563, compiled_block_1_2563 );
  twobit_invoke( 1 );
  twobit_label( 2563, compiled_block_1_2563 );
  twobit_load( 0, 0 );
  twobit_branchf( 2565, compiled_block_1_2565 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2566, compiled_block_1_2566 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2566, compiled_block_1_2566 );
  twobit_load( 0, 0 );
  twobit_branchf( 2568, compiled_block_1_2568 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2549, compiled_block_1_2549 );
  twobit_label( 2568, compiled_block_1_2568 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2569, compiled_block_1_2569 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2569, compiled_block_1_2569 );
  twobit_load( 0, 0 );
  twobit_branchf( 2571, compiled_block_1_2571 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_reg( 4 );
  twobit_setrtn( 2572, compiled_block_1_2572 );
  twobit_invoke( 1 );
  twobit_label( 2572, compiled_block_1_2572 );
  twobit_load( 0, 0 );
  twobit_branchf( 2574, compiled_block_1_2574 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2575, compiled_block_1_2575 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2575, compiled_block_1_2575 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 2577, compiled_block_1_2577 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2578, compiled_block_1_2578 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2578, compiled_block_1_2578 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 2580, compiled_block_1_2580 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2581, compiled_block_1_2581 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2581, compiled_block_1_2581 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2583, compiled_block_1_2583 );
  twobit_load( 2, 3 );
  twobit_store( 2, 2 );
  twobit_load( 3, 1 );
  twobit_load( 2, 4 );
  twobit_load( 1, 5 );
  twobit_lambda( compiled_start_1_63, 7, 4 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2586, compiled_block_1_2586 );
  twobit_invoke( 2 );
  twobit_label( 2586, compiled_block_1_2586 );
  twobit_load( 0, 0 );
  twobit_skip( 2549, compiled_block_1_2549 );
  twobit_label( 2583, compiled_block_1_2583 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2549, compiled_block_1_2549 );
  twobit_label( 2580, compiled_block_1_2580 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2549, compiled_block_1_2549 );
  twobit_label( 2577, compiled_block_1_2577 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2549, compiled_block_1_2549 );
  twobit_label( 2574, compiled_block_1_2574 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2549, compiled_block_1_2549 );
  twobit_label( 2571, compiled_block_1_2571 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2549, compiled_block_1_2549 );
  twobit_label( 2565, compiled_block_1_2565 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2549, compiled_block_1_2549 );
  twobit_label( 2562, compiled_block_1_2562 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2549, compiled_block_1_2549 );
  twobit_label( 2559, compiled_block_1_2559 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2549, compiled_block_1_2549 );
  twobit_label( 2556, compiled_block_1_2556 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2549, compiled_block_1_2549 );
  twobit_label( 2553, compiled_block_1_2553 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2549, compiled_block_1_2549 );
  twobit_label( 2550, compiled_block_1_2550 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2549, compiled_block_1_2549 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2588, compiled_block_1_2588 );
  twobit_reg( 4 );
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 2588, compiled_block_1_2588 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2589, compiled_block_1_2589 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2589, compiled_block_1_2589 );
  twobit_load( 0, 0 );
  twobit_branchf( 2591, compiled_block_1_2591 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2592, compiled_block_1_2592 );
  twobit_jump( 2, 1804, compiled_block_1_1804 );
  twobit_label( 2592, compiled_block_1_2592 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_branchf( 2594, compiled_block_1_2594 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2595, compiled_block_1_2595 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2595, compiled_block_1_2595 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 2597, compiled_block_1_2597 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2598, compiled_block_1_2598 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2598, compiled_block_1_2598 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 2600, compiled_block_1_2600 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2601, compiled_block_1_2601 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2601, compiled_block_1_2601 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2603, compiled_block_1_2603 );
  twobit_load( 2, 3 );
  twobit_store( 2, 2 );
  twobit_load( 3, 4 );
  twobit_load( 2, 1 );
  twobit_load( 1, 5 );
  twobit_lambda( compiled_start_1_64, 9, 4 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2609, compiled_block_1_2609 );
  twobit_invoke( 2 );
  twobit_label( 2609, compiled_block_1_2609 );
  twobit_load( 0, 0 );
  twobit_skip( 2590, compiled_block_1_2590 );
  twobit_label( 2603, compiled_block_1_2603 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2590, compiled_block_1_2590 );
  twobit_label( 2600, compiled_block_1_2600 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2590, compiled_block_1_2590 );
  twobit_label( 2597, compiled_block_1_2597 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2590, compiled_block_1_2590 );
  twobit_label( 2594, compiled_block_1_2594 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2590, compiled_block_1_2590 );
  twobit_label( 2591, compiled_block_1_2591 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2590, compiled_block_1_2590 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2611, compiled_block_1_2611 );
  twobit_reg( 4 );
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 2611, compiled_block_1_2611 );
  twobit_const( 10 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_global( 11 ); /* error */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_61( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 2511, compiled_block_1_2511 );
  twobit_invoke( 0 );
  twobit_label( 2511, compiled_block_1_2511 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_62( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lexical( 2, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 2543, compiled_block_1_2543 );
  twobit_invoke( 0 );
  twobit_label( 2543, compiled_block_1_2543 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_63( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2584, compiled_block_1_2584 );
  twobit_invoke( 3 );
  twobit_label( 2584, compiled_block_1_2584 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_64( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_1_65, 2, 0 );
  twobit_setreg( 1 );
  twobit_lambda( compiled_start_1_66, 4, 0 );
  twobit_setreg( 2 );
  twobit_global( 5 ); /* call-with-values */
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_65( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 3, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 1, 3 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_66( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 2 );
  twobit_setreg( 3 );
  twobit_lexical( 1, 4 );
  twobit_setreg( 4 );
  twobit_setrtn( 2605, compiled_block_1_2605 );
  twobit_jump( 4, 1805, compiled_block_1_1805 );
  twobit_label( 2605, compiled_block_1_2605 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 3, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 2606, compiled_block_1_2606 );
  twobit_invoke( 1 );
  twobit_label( 2606, compiled_block_1_2606 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 1 ); /* values */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_31( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lambda( compiled_start_1_52, 2, 1 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-current-continuation */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_52( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 8 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2614, compiled_block_1_2614 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2614, compiled_block_1_2614 );
  twobit_load( 0, 0 );
  twobit_branchf( 2616, compiled_block_1_2616 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2617, compiled_block_1_2617 );
  twobit_invoke( 1 );
  twobit_label( 2617, compiled_block_1_2617 );
  twobit_load( 0, 0 );
  twobit_branchf( 2619, compiled_block_1_2619 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2620, compiled_block_1_2620 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2620, compiled_block_1_2620 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 2622, compiled_block_1_2622 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2623, compiled_block_1_2623 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2623, compiled_block_1_2623 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 2625, compiled_block_1_2625 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2626, compiled_block_1_2626 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2626, compiled_block_1_2626 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_branchf( 2628, compiled_block_1_2628 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2629, compiled_block_1_2629 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2629, compiled_block_1_2629 );
  twobit_load( 0, 0 );
  twobit_branchf( 2631, compiled_block_1_2631 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2632, compiled_block_1_2632 );
  twobit_invoke( 1 );
  twobit_label( 2632, compiled_block_1_2632 );
  twobit_load( 0, 0 );
  twobit_branchf( 2634, compiled_block_1_2634 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2635, compiled_block_1_2635 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2635, compiled_block_1_2635 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2637, compiled_block_1_2637 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2638, compiled_block_1_2638 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2638, compiled_block_1_2638 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_reg( 4 );
  twobit_branchf( 2640, compiled_block_1_2640 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2641, compiled_block_1_2641 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2641, compiled_block_1_2641 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 2643, compiled_block_1_2643 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2644, compiled_block_1_2644 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2644, compiled_block_1_2644 );
  twobit_load( 0, 0 );
  twobit_branchf( 2646, compiled_block_1_2646 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_reg( 4 );
  twobit_setrtn( 2647, compiled_block_1_2647 );
  twobit_invoke( 1 );
  twobit_label( 2647, compiled_block_1_2647 );
  twobit_load( 0, 0 );
  twobit_branchf( 2649, compiled_block_1_2649 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2650, compiled_block_1_2650 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2650, compiled_block_1_2650 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_reg( 4 );
  twobit_branchf( 2652, compiled_block_1_2652 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2653, compiled_block_1_2653 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2653, compiled_block_1_2653 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_reg( 4 );
  twobit_branchf( 2655, compiled_block_1_2655 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2656, compiled_block_1_2656 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2656, compiled_block_1_2656 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2658, compiled_block_1_2658 );
  twobit_load( 2, 3 );
  twobit_store( 2, 2 );
  twobit_load( 7, 1 );
  twobit_load( 6, 4 );
  twobit_load( 5, 5 );
  twobit_load( 3, 6 );
  twobit_load( 2, 7 );
  twobit_load( 1, 8 );
  twobit_lambda( compiled_start_1_53, 2, 7 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2662, compiled_block_1_2662 );
  twobit_invoke( 2 );
  twobit_label( 2662, compiled_block_1_2662 );
  twobit_load( 0, 0 );
  twobit_skip( 2615, compiled_block_1_2615 );
  twobit_label( 2658, compiled_block_1_2658 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2615, compiled_block_1_2615 );
  twobit_label( 2655, compiled_block_1_2655 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2615, compiled_block_1_2615 );
  twobit_label( 2652, compiled_block_1_2652 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2615, compiled_block_1_2615 );
  twobit_label( 2649, compiled_block_1_2649 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2615, compiled_block_1_2615 );
  twobit_label( 2646, compiled_block_1_2646 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2615, compiled_block_1_2615 );
  twobit_label( 2643, compiled_block_1_2643 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2615, compiled_block_1_2615 );
  twobit_label( 2640, compiled_block_1_2640 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2615, compiled_block_1_2615 );
  twobit_label( 2637, compiled_block_1_2637 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2615, compiled_block_1_2615 );
  twobit_label( 2634, compiled_block_1_2634 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2615, compiled_block_1_2615 );
  twobit_label( 2631, compiled_block_1_2631 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2615, compiled_block_1_2615 );
  twobit_label( 2628, compiled_block_1_2628 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2615, compiled_block_1_2615 );
  twobit_label( 2625, compiled_block_1_2625 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2615, compiled_block_1_2615 );
  twobit_label( 2622, compiled_block_1_2622 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2615, compiled_block_1_2615 );
  twobit_label( 2619, compiled_block_1_2619 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2615, compiled_block_1_2615 );
  twobit_label( 2616, compiled_block_1_2616 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2615, compiled_block_1_2615 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2664, compiled_block_1_2664 );
  twobit_reg( 4 );
  twobit_pop( 8 );
  twobit_return();
  twobit_label( 2664, compiled_block_1_2664 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2665, compiled_block_1_2665 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2665, compiled_block_1_2665 );
  twobit_load( 0, 0 );
  twobit_branchf( 2667, compiled_block_1_2667 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2668, compiled_block_1_2668 );
  twobit_invoke( 1 );
  twobit_label( 2668, compiled_block_1_2668 );
  twobit_load( 0, 0 );
  twobit_branchf( 2670, compiled_block_1_2670 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2671, compiled_block_1_2671 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2671, compiled_block_1_2671 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 2673, compiled_block_1_2673 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2674, compiled_block_1_2674 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2674, compiled_block_1_2674 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 2676, compiled_block_1_2676 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2677, compiled_block_1_2677 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2677, compiled_block_1_2677 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_branchf( 2679, compiled_block_1_2679 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2680, compiled_block_1_2680 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2680, compiled_block_1_2680 );
  twobit_load( 0, 0 );
  twobit_branchf( 2682, compiled_block_1_2682 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2683, compiled_block_1_2683 );
  twobit_invoke( 1 );
  twobit_label( 2683, compiled_block_1_2683 );
  twobit_load( 0, 0 );
  twobit_branchf( 2685, compiled_block_1_2685 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2686, compiled_block_1_2686 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2686, compiled_block_1_2686 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2688, compiled_block_1_2688 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2689, compiled_block_1_2689 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2689, compiled_block_1_2689 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_reg( 4 );
  twobit_branchf( 2691, compiled_block_1_2691 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2692, compiled_block_1_2692 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2692, compiled_block_1_2692 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 2694, compiled_block_1_2694 );
  twobit_movereg( 4, 1 );
  twobit_setrtn( 2695, compiled_block_1_2695 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2695, compiled_block_1_2695 );
  twobit_load( 0, 0 );
  twobit_branchf( 2697, compiled_block_1_2697 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2698, compiled_block_1_2698 );
  twobit_invoke( 1 );
  twobit_label( 2698, compiled_block_1_2698 );
  twobit_load( 0, 0 );
  twobit_branchf( 2700, compiled_block_1_2700 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2701, compiled_block_1_2701 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2701, compiled_block_1_2701 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_reg( 4 );
  twobit_branchf( 2703, compiled_block_1_2703 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2704, compiled_block_1_2704 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2704, compiled_block_1_2704 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_reg( 4 );
  twobit_branchf( 2706, compiled_block_1_2706 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2707, compiled_block_1_2707 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2707, compiled_block_1_2707 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2709, compiled_block_1_2709 );
  twobit_load( 2, 3 );
  twobit_store( 2, 1 );
  twobit_load( 7, 4 );
  twobit_load( 6, 5 );
  twobit_load( 5, 2 );
  twobit_load( 3, 8 );
  twobit_load( 2, 6 );
  twobit_load( 1, 7 );
  twobit_lambda( compiled_start_1_54, 5, 7 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2713, compiled_block_1_2713 );
  twobit_invoke( 2 );
  twobit_label( 2713, compiled_block_1_2713 );
  twobit_load( 0, 0 );
  twobit_skip( 2666, compiled_block_1_2666 );
  twobit_label( 2709, compiled_block_1_2709 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2666, compiled_block_1_2666 );
  twobit_label( 2706, compiled_block_1_2706 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2666, compiled_block_1_2666 );
  twobit_label( 2703, compiled_block_1_2703 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2666, compiled_block_1_2666 );
  twobit_label( 2700, compiled_block_1_2700 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2666, compiled_block_1_2666 );
  twobit_label( 2697, compiled_block_1_2697 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2666, compiled_block_1_2666 );
  twobit_label( 2694, compiled_block_1_2694 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2666, compiled_block_1_2666 );
  twobit_label( 2691, compiled_block_1_2691 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2666, compiled_block_1_2666 );
  twobit_label( 2688, compiled_block_1_2688 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2666, compiled_block_1_2666 );
  twobit_label( 2685, compiled_block_1_2685 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2666, compiled_block_1_2666 );
  twobit_label( 2682, compiled_block_1_2682 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2666, compiled_block_1_2666 );
  twobit_label( 2679, compiled_block_1_2679 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2666, compiled_block_1_2666 );
  twobit_label( 2676, compiled_block_1_2676 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2666, compiled_block_1_2666 );
  twobit_label( 2673, compiled_block_1_2673 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2666, compiled_block_1_2666 );
  twobit_label( 2670, compiled_block_1_2670 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2666, compiled_block_1_2666 );
  twobit_label( 2667, compiled_block_1_2667 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2666, compiled_block_1_2666 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2715, compiled_block_1_2715 );
  twobit_reg( 4 );
  twobit_pop( 8 );
  twobit_return();
  twobit_label( 2715, compiled_block_1_2715 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2716, compiled_block_1_2716 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2716, compiled_block_1_2716 );
  twobit_load( 0, 0 );
  twobit_branchf( 2718, compiled_block_1_2718 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2719, compiled_block_1_2719 );
  twobit_invoke( 1 );
  twobit_label( 2719, compiled_block_1_2719 );
  twobit_load( 0, 0 );
  twobit_branchf( 2721, compiled_block_1_2721 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2722, compiled_block_1_2722 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2722, compiled_block_1_2722 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2724, compiled_block_1_2724 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2725, compiled_block_1_2725 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2725, compiled_block_1_2725 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_reg( 4 );
  twobit_branchf( 2727, compiled_block_1_2727 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2728, compiled_block_1_2728 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2728, compiled_block_1_2728 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 2730, compiled_block_1_2730 );
  twobit_movereg( 4, 1 );
  twobit_setrtn( 2731, compiled_block_1_2731 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2731, compiled_block_1_2731 );
  twobit_load( 0, 0 );
  twobit_branchf( 2733, compiled_block_1_2733 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2734, compiled_block_1_2734 );
  twobit_invoke( 1 );
  twobit_label( 2734, compiled_block_1_2734 );
  twobit_load( 0, 0 );
  twobit_branchf( 2736, compiled_block_1_2736 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2737, compiled_block_1_2737 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2737, compiled_block_1_2737 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 2739, compiled_block_1_2739 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2740, compiled_block_1_2740 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2740, compiled_block_1_2740 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_branchf( 2742, compiled_block_1_2742 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2743, compiled_block_1_2743 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2743, compiled_block_1_2743 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 2745, compiled_block_1_2745 );
  twobit_load( 1, 4 );
  twobit_setrtn( 2746, compiled_block_1_2746 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2746, compiled_block_1_2746 );
  twobit_load( 0, 0 );
  twobit_branchf( 2748, compiled_block_1_2748 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 4 );
  twobit_reg( 4 );
  twobit_setrtn( 2749, compiled_block_1_2749 );
  twobit_invoke( 1 );
  twobit_label( 2749, compiled_block_1_2749 );
  twobit_load( 0, 0 );
  twobit_branchf( 2751, compiled_block_1_2751 );
  twobit_load( 1, 4 );
  twobit_setrtn( 2752, compiled_block_1_2752 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2752, compiled_block_1_2752 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_reg( 4 );
  twobit_branchf( 2754, compiled_block_1_2754 );
  twobit_load( 1, 4 );
  twobit_setrtn( 2755, compiled_block_1_2755 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2755, compiled_block_1_2755 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_reg( 4 );
  twobit_branchf( 2757, compiled_block_1_2757 );
  twobit_load( 1, 4 );
  twobit_setrtn( 2758, compiled_block_1_2758 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2758, compiled_block_1_2758 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2760, compiled_block_1_2760 );
  twobit_load( 2, 3 );
  twobit_store( 2, 4 );
  twobit_load( 7, 5 );
  twobit_load( 6, 1 );
  twobit_load( 5, 2 );
  twobit_load( 3, 8 );
  twobit_load( 2, 6 );
  twobit_load( 1, 7 );
  twobit_lambda( compiled_start_1_55, 7, 7 );
  twobit_setreg( 1 );
  twobit_load( 2, 4 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2764, compiled_block_1_2764 );
  twobit_invoke( 2 );
  twobit_label( 2764, compiled_block_1_2764 );
  twobit_load( 0, 0 );
  twobit_skip( 2717, compiled_block_1_2717 );
  twobit_label( 2760, compiled_block_1_2760 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2717, compiled_block_1_2717 );
  twobit_label( 2757, compiled_block_1_2757 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2717, compiled_block_1_2717 );
  twobit_label( 2754, compiled_block_1_2754 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2717, compiled_block_1_2717 );
  twobit_label( 2751, compiled_block_1_2751 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2717, compiled_block_1_2717 );
  twobit_label( 2748, compiled_block_1_2748 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2717, compiled_block_1_2717 );
  twobit_label( 2745, compiled_block_1_2745 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2717, compiled_block_1_2717 );
  twobit_label( 2742, compiled_block_1_2742 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2717, compiled_block_1_2717 );
  twobit_label( 2739, compiled_block_1_2739 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2717, compiled_block_1_2717 );
  twobit_label( 2736, compiled_block_1_2736 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2717, compiled_block_1_2717 );
  twobit_label( 2733, compiled_block_1_2733 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2717, compiled_block_1_2717 );
  twobit_label( 2730, compiled_block_1_2730 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2717, compiled_block_1_2717 );
  twobit_label( 2727, compiled_block_1_2727 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2717, compiled_block_1_2717 );
  twobit_label( 2724, compiled_block_1_2724 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2717, compiled_block_1_2717 );
  twobit_label( 2721, compiled_block_1_2721 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2717, compiled_block_1_2717 );
  twobit_label( 2718, compiled_block_1_2718 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2717, compiled_block_1_2717 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2766, compiled_block_1_2766 );
  twobit_reg( 4 );
  twobit_pop( 8 );
  twobit_return();
  twobit_label( 2766, compiled_block_1_2766 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2767, compiled_block_1_2767 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2767, compiled_block_1_2767 );
  twobit_load( 0, 0 );
  twobit_branchf( 2769, compiled_block_1_2769 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2770, compiled_block_1_2770 );
  twobit_invoke( 1 );
  twobit_label( 2770, compiled_block_1_2770 );
  twobit_load( 0, 0 );
  twobit_branchf( 2772, compiled_block_1_2772 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2773, compiled_block_1_2773 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2773, compiled_block_1_2773 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 2775, compiled_block_1_2775 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2776, compiled_block_1_2776 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2776, compiled_block_1_2776 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_branchf( 2778, compiled_block_1_2778 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2779, compiled_block_1_2779 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2779, compiled_block_1_2779 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2781, compiled_block_1_2781 );
  twobit_movereg( 4, 1 );
  twobit_setrtn( 2782, compiled_block_1_2782 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2782, compiled_block_1_2782 );
  twobit_load( 0, 0 );
  twobit_branchf( 2784, compiled_block_1_2784 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_reg( 4 );
  twobit_setrtn( 2785, compiled_block_1_2785 );
  twobit_invoke( 1 );
  twobit_label( 2785, compiled_block_1_2785 );
  twobit_load( 0, 0 );
  twobit_branchf( 2787, compiled_block_1_2787 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2788, compiled_block_1_2788 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2788, compiled_block_1_2788 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_reg( 4 );
  twobit_branchf( 2790, compiled_block_1_2790 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2791, compiled_block_1_2791 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2791, compiled_block_1_2791 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_reg( 4 );
  twobit_branchf( 2793, compiled_block_1_2793 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2794, compiled_block_1_2794 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2794, compiled_block_1_2794 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2796, compiled_block_1_2796 );
  twobit_movereg( 4, 1 );
  twobit_setrtn( 2797, compiled_block_1_2797 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2797, compiled_block_1_2797 );
  twobit_load( 0, 0 );
  twobit_branchf( 2799, compiled_block_1_2799 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_reg( 4 );
  twobit_setrtn( 2800, compiled_block_1_2800 );
  twobit_invoke( 1 );
  twobit_label( 2800, compiled_block_1_2800 );
  twobit_load( 0, 0 );
  twobit_branchf( 2802, compiled_block_1_2802 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2803, compiled_block_1_2803 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2803, compiled_block_1_2803 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_reg( 4 );
  twobit_branchf( 2805, compiled_block_1_2805 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2806, compiled_block_1_2806 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2806, compiled_block_1_2806 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 2808, compiled_block_1_2808 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2809, compiled_block_1_2809 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2809, compiled_block_1_2809 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2811, compiled_block_1_2811 );
  twobit_load( 2, 3 );
  twobit_store( 2, 2 );
  twobit_load( 7, 8 );
  twobit_load( 6, 1 );
  twobit_load( 5, 4 );
  twobit_load( 3, 5 );
  twobit_load( 2, 6 );
  twobit_load( 1, 7 );
  twobit_lambda( compiled_start_1_56, 9, 7 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2815, compiled_block_1_2815 );
  twobit_invoke( 2 );
  twobit_label( 2815, compiled_block_1_2815 );
  twobit_load( 0, 0 );
  twobit_skip( 2768, compiled_block_1_2768 );
  twobit_label( 2811, compiled_block_1_2811 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2768, compiled_block_1_2768 );
  twobit_label( 2808, compiled_block_1_2808 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2768, compiled_block_1_2768 );
  twobit_label( 2805, compiled_block_1_2805 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2768, compiled_block_1_2768 );
  twobit_label( 2802, compiled_block_1_2802 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2768, compiled_block_1_2768 );
  twobit_label( 2799, compiled_block_1_2799 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2768, compiled_block_1_2768 );
  twobit_label( 2796, compiled_block_1_2796 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2768, compiled_block_1_2768 );
  twobit_label( 2793, compiled_block_1_2793 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2768, compiled_block_1_2768 );
  twobit_label( 2790, compiled_block_1_2790 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2768, compiled_block_1_2768 );
  twobit_label( 2787, compiled_block_1_2787 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2768, compiled_block_1_2768 );
  twobit_label( 2784, compiled_block_1_2784 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2768, compiled_block_1_2768 );
  twobit_label( 2781, compiled_block_1_2781 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2768, compiled_block_1_2768 );
  twobit_label( 2778, compiled_block_1_2778 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2768, compiled_block_1_2768 );
  twobit_label( 2775, compiled_block_1_2775 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2768, compiled_block_1_2768 );
  twobit_label( 2772, compiled_block_1_2772 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2768, compiled_block_1_2768 );
  twobit_label( 2769, compiled_block_1_2769 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2768, compiled_block_1_2768 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2817, compiled_block_1_2817 );
  twobit_reg( 4 );
  twobit_pop( 8 );
  twobit_return();
  twobit_label( 2817, compiled_block_1_2817 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2818, compiled_block_1_2818 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2818, compiled_block_1_2818 );
  twobit_load( 0, 0 );
  twobit_branchf( 2820, compiled_block_1_2820 );
  twobit_lexical( 1, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2821, compiled_block_1_2821 );
  twobit_invoke( 1 );
  twobit_label( 2821, compiled_block_1_2821 );
  twobit_load( 0, 0 );
  twobit_branchf( 2823, compiled_block_1_2823 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2824, compiled_block_1_2824 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2824, compiled_block_1_2824 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 2826, compiled_block_1_2826 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2827, compiled_block_1_2827 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2827, compiled_block_1_2827 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_reg( 4 );
  twobit_branchf( 2829, compiled_block_1_2829 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2830, compiled_block_1_2830 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2830, compiled_block_1_2830 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_reg( 4 );
  twobit_branchf( 2832, compiled_block_1_2832 );
  twobit_load( 1, 4 );
  twobit_setrtn( 2833, compiled_block_1_2833 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2833, compiled_block_1_2833 );
  twobit_load( 0, 0 );
  twobit_branchf( 2835, compiled_block_1_2835 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 4 );
  twobit_reg( 4 );
  twobit_setrtn( 2836, compiled_block_1_2836 );
  twobit_invoke( 1 );
  twobit_label( 2836, compiled_block_1_2836 );
  twobit_load( 0, 0 );
  twobit_branchf( 2838, compiled_block_1_2838 );
  twobit_load( 1, 4 );
  twobit_setrtn( 2839, compiled_block_1_2839 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2839, compiled_block_1_2839 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_branchf( 2841, compiled_block_1_2841 );
  twobit_load( 1, 4 );
  twobit_setrtn( 2842, compiled_block_1_2842 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2842, compiled_block_1_2842 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2844, compiled_block_1_2844 );
  twobit_load( 1, 4 );
  twobit_setrtn( 2845, compiled_block_1_2845 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2845, compiled_block_1_2845 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 2847, compiled_block_1_2847 );
  twobit_movereg( 4, 1 );
  twobit_setrtn( 2848, compiled_block_1_2848 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2848, compiled_block_1_2848 );
  twobit_load( 0, 0 );
  twobit_branchf( 2850, compiled_block_1_2850 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 4 );
  twobit_reg( 4 );
  twobit_setrtn( 2851, compiled_block_1_2851 );
  twobit_invoke( 1 );
  twobit_label( 2851, compiled_block_1_2851 );
  twobit_load( 0, 0 );
  twobit_branchf( 2853, compiled_block_1_2853 );
  twobit_load( 1, 4 );
  twobit_setrtn( 2854, compiled_block_1_2854 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2854, compiled_block_1_2854 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_reg( 4 );
  twobit_branchf( 2856, compiled_block_1_2856 );
  twobit_load( 1, 4 );
  twobit_setrtn( 2857, compiled_block_1_2857 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2857, compiled_block_1_2857 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 2859, compiled_block_1_2859 );
  twobit_load( 1, 4 );
  twobit_setrtn( 2860, compiled_block_1_2860 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2860, compiled_block_1_2860 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2862, compiled_block_1_2862 );
  twobit_load( 2, 3 );
  twobit_store( 2, 4 );
  twobit_load( 7, 5 );
  twobit_load( 6, 2 );
  twobit_load( 5, 6 );
  twobit_load( 3, 7 );
  twobit_load( 2, 8 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_1_57, 11, 7 );
  twobit_setreg( 1 );
  twobit_load( 2, 4 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2866, compiled_block_1_2866 );
  twobit_invoke( 2 );
  twobit_label( 2866, compiled_block_1_2866 );
  twobit_load( 0, 0 );
  twobit_skip( 2819, compiled_block_1_2819 );
  twobit_label( 2862, compiled_block_1_2862 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2819, compiled_block_1_2819 );
  twobit_label( 2859, compiled_block_1_2859 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2819, compiled_block_1_2819 );
  twobit_label( 2856, compiled_block_1_2856 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2819, compiled_block_1_2819 );
  twobit_label( 2853, compiled_block_1_2853 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2819, compiled_block_1_2819 );
  twobit_label( 2850, compiled_block_1_2850 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2819, compiled_block_1_2819 );
  twobit_label( 2847, compiled_block_1_2847 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2819, compiled_block_1_2819 );
  twobit_label( 2844, compiled_block_1_2844 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2819, compiled_block_1_2819 );
  twobit_label( 2841, compiled_block_1_2841 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2819, compiled_block_1_2819 );
  twobit_label( 2838, compiled_block_1_2838 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2819, compiled_block_1_2819 );
  twobit_label( 2835, compiled_block_1_2835 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2819, compiled_block_1_2819 );
  twobit_label( 2832, compiled_block_1_2832 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2819, compiled_block_1_2819 );
  twobit_label( 2829, compiled_block_1_2829 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2819, compiled_block_1_2819 );
  twobit_label( 2826, compiled_block_1_2826 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2819, compiled_block_1_2819 );
  twobit_label( 2823, compiled_block_1_2823 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2819, compiled_block_1_2819 );
  twobit_label( 2820, compiled_block_1_2820 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2819, compiled_block_1_2819 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2868, compiled_block_1_2868 );
  twobit_reg( 4 );
  twobit_pop( 8 );
  twobit_return();
  twobit_label( 2868, compiled_block_1_2868 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2869, compiled_block_1_2869 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2869, compiled_block_1_2869 );
  twobit_load( 0, 0 );
  twobit_branchf( 2871, compiled_block_1_2871 );
  twobit_lexical( 1, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2872, compiled_block_1_2872 );
  twobit_invoke( 1 );
  twobit_label( 2872, compiled_block_1_2872 );
  twobit_load( 0, 0 );
  twobit_branchf( 2874, compiled_block_1_2874 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2875, compiled_block_1_2875 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2875, compiled_block_1_2875 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_reg( 4 );
  twobit_branchf( 2877, compiled_block_1_2877 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2878, compiled_block_1_2878 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2878, compiled_block_1_2878 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_branchf( 2880, compiled_block_1_2880 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2881, compiled_block_1_2881 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2881, compiled_block_1_2881 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 2883, compiled_block_1_2883 );
  twobit_movereg( 4, 1 );
  twobit_setrtn( 2884, compiled_block_1_2884 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2884, compiled_block_1_2884 );
  twobit_load( 0, 0 );
  twobit_branchf( 2886, compiled_block_1_2886 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 4 );
  twobit_reg( 4 );
  twobit_setrtn( 2887, compiled_block_1_2887 );
  twobit_invoke( 1 );
  twobit_label( 2887, compiled_block_1_2887 );
  twobit_load( 0, 0 );
  twobit_branchf( 2889, compiled_block_1_2889 );
  twobit_load( 1, 4 );
  twobit_setrtn( 2890, compiled_block_1_2890 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2890, compiled_block_1_2890 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_reg( 4 );
  twobit_branchf( 2892, compiled_block_1_2892 );
  twobit_load( 1, 4 );
  twobit_setrtn( 2893, compiled_block_1_2893 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2893, compiled_block_1_2893 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2895, compiled_block_1_2895 );
  twobit_load( 1, 4 );
  twobit_setrtn( 2896, compiled_block_1_2896 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2896, compiled_block_1_2896 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_reg( 4 );
  twobit_branchf( 2898, compiled_block_1_2898 );
  twobit_load( 1, 7 );
  twobit_setrtn( 2899, compiled_block_1_2899 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2899, compiled_block_1_2899 );
  twobit_load( 0, 0 );
  twobit_branchf( 2901, compiled_block_1_2901 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 7 );
  twobit_reg( 4 );
  twobit_setrtn( 2902, compiled_block_1_2902 );
  twobit_invoke( 1 );
  twobit_label( 2902, compiled_block_1_2902 );
  twobit_load( 0, 0 );
  twobit_branchf( 2904, compiled_block_1_2904 );
  twobit_load( 1, 7 );
  twobit_setrtn( 2905, compiled_block_1_2905 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2905, compiled_block_1_2905 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 2907, compiled_block_1_2907 );
  twobit_load( 1, 7 );
  twobit_setrtn( 2908, compiled_block_1_2908 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2908, compiled_block_1_2908 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 2910, compiled_block_1_2910 );
  twobit_load( 1, 7 );
  twobit_setrtn( 2911, compiled_block_1_2911 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2911, compiled_block_1_2911 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2913, compiled_block_1_2913 );
  twobit_load( 2, 3 );
  twobit_store( 2, 7 );
  twobit_load( 7, 8 );
  twobit_load( 6, 5 );
  twobit_load( 5, 4 );
  twobit_load( 3, 2 );
  twobit_load( 2, 6 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_1_58, 13, 7 );
  twobit_setreg( 1 );
  twobit_load( 2, 7 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2917, compiled_block_1_2917 );
  twobit_invoke( 2 );
  twobit_label( 2917, compiled_block_1_2917 );
  twobit_load( 0, 0 );
  twobit_skip( 2870, compiled_block_1_2870 );
  twobit_label( 2913, compiled_block_1_2913 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2870, compiled_block_1_2870 );
  twobit_label( 2910, compiled_block_1_2910 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2870, compiled_block_1_2870 );
  twobit_label( 2907, compiled_block_1_2907 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2870, compiled_block_1_2870 );
  twobit_label( 2904, compiled_block_1_2904 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2870, compiled_block_1_2870 );
  twobit_label( 2901, compiled_block_1_2901 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2870, compiled_block_1_2870 );
  twobit_label( 2898, compiled_block_1_2898 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2870, compiled_block_1_2870 );
  twobit_label( 2895, compiled_block_1_2895 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2870, compiled_block_1_2870 );
  twobit_label( 2892, compiled_block_1_2892 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2870, compiled_block_1_2870 );
  twobit_label( 2889, compiled_block_1_2889 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2870, compiled_block_1_2870 );
  twobit_label( 2886, compiled_block_1_2886 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2870, compiled_block_1_2870 );
  twobit_label( 2883, compiled_block_1_2883 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2870, compiled_block_1_2870 );
  twobit_label( 2880, compiled_block_1_2880 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2870, compiled_block_1_2870 );
  twobit_label( 2877, compiled_block_1_2877 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2870, compiled_block_1_2870 );
  twobit_label( 2874, compiled_block_1_2874 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2870, compiled_block_1_2870 );
  twobit_label( 2871, compiled_block_1_2871 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2870, compiled_block_1_2870 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2919, compiled_block_1_2919 );
  twobit_reg( 4 );
  twobit_pop( 8 );
  twobit_return();
  twobit_label( 2919, compiled_block_1_2919 );
  twobit_lexical( 0, 1 );
  twobit_branchf( 2921, compiled_block_1_2921 );
  twobit_load( 2, 3 );
  twobit_lambda( compiled_start_1_59, 15, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2922, compiled_block_1_2922 );
  twobit_invoke( 2 );
  twobit_label( 2922, compiled_block_1_2922 );
  twobit_load( 0, 0 );
  twobit_skip( 2920, compiled_block_1_2920 );
  twobit_label( 2921, compiled_block_1_2921 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2920, compiled_block_1_2920 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2924, compiled_block_1_2924 );
  twobit_reg( 4 );
  twobit_pop( 8 );
  twobit_return();
  twobit_label( 2924, compiled_block_1_2924 );
  twobit_const( 16 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_global( 17 ); /* error */
  twobit_pop( 8 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_53( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 7 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 6 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2659, compiled_block_1_2659 );
  twobit_invoke( 3 );
  twobit_label( 2659, compiled_block_1_2659 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_movereg( 3, 4 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2660, compiled_block_1_2660 );
  twobit_invoke( 3 );
  twobit_label( 2660, compiled_block_1_2660 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 4, 1 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 3 );
  twobit_pop( 1 );
  twobit_jump( 3, 1805, compiled_block_1_1805 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_54( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 7 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 6 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2710, compiled_block_1_2710 );
  twobit_invoke( 3 );
  twobit_label( 2710, compiled_block_1_2710 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_movereg( 3, 4 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2711, compiled_block_1_2711 );
  twobit_invoke( 3 );
  twobit_label( 2711, compiled_block_1_2711 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 4, 1 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 3 );
  twobit_pop( 1 );
  twobit_jump( 3, 1805, compiled_block_1_1805 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_55( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 7 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 6 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2761, compiled_block_1_2761 );
  twobit_invoke( 3 );
  twobit_label( 2761, compiled_block_1_2761 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_movereg( 3, 4 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2762, compiled_block_1_2762 );
  twobit_invoke( 3 );
  twobit_label( 2762, compiled_block_1_2762 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 4, 1 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 3 );
  twobit_pop( 1 );
  twobit_jump( 3, 1805, compiled_block_1_1805 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_56( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 7 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 6 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2812, compiled_block_1_2812 );
  twobit_invoke( 3 );
  twobit_label( 2812, compiled_block_1_2812 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_movereg( 3, 4 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2813, compiled_block_1_2813 );
  twobit_invoke( 3 );
  twobit_label( 2813, compiled_block_1_2813 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 4, 1 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 3 );
  twobit_pop( 1 );
  twobit_jump( 3, 1805, compiled_block_1_1805 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_57( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 7 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 6 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2863, compiled_block_1_2863 );
  twobit_invoke( 3 );
  twobit_label( 2863, compiled_block_1_2863 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_movereg( 3, 4 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2864, compiled_block_1_2864 );
  twobit_invoke( 3 );
  twobit_label( 2864, compiled_block_1_2864 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_pop( 1 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_58( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 7 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 6 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2914, compiled_block_1_2914 );
  twobit_invoke( 3 );
  twobit_label( 2914, compiled_block_1_2914 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_movereg( 3, 4 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2915, compiled_block_1_2915 );
  twobit_invoke( 3 );
  twobit_label( 2915, compiled_block_1_2915 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_pop( 1 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_59( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_32( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lambda( compiled_start_1_44, 2, 1 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-current-continuation */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_44( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 9 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2927, compiled_block_1_2927 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2927, compiled_block_1_2927 );
  twobit_load( 0, 0 );
  twobit_branchf( 2929, compiled_block_1_2929 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2930, compiled_block_1_2930 );
  twobit_invoke( 1 );
  twobit_label( 2930, compiled_block_1_2930 );
  twobit_load( 0, 0 );
  twobit_branchf( 2932, compiled_block_1_2932 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2933, compiled_block_1_2933 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2933, compiled_block_1_2933 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 2935, compiled_block_1_2935 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2936, compiled_block_1_2936 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2936, compiled_block_1_2936 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 2938, compiled_block_1_2938 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2939, compiled_block_1_2939 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2939, compiled_block_1_2939 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2941, compiled_block_1_2941 );
  twobit_lexical( 1, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_reg( 3 );
  twobit_setrtn( 2942, compiled_block_1_2942 );
  twobit_invoke( 1 );
  twobit_label( 2942, compiled_block_1_2942 );
  twobit_load( 0, 0 );
  twobit_branchf( 2944, compiled_block_1_2944 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2945, compiled_block_1_2945 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2945, compiled_block_1_2945 );
  twobit_load( 0, 0 );
  twobit_branchf( 2947, compiled_block_1_2947 );
  twobit_lexical( 1, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_reg( 4 );
  twobit_setrtn( 2948, compiled_block_1_2948 );
  twobit_invoke( 1 );
  twobit_label( 2948, compiled_block_1_2948 );
  twobit_load( 0, 0 );
  twobit_branchf( 2950, compiled_block_1_2950 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2951, compiled_block_1_2951 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2951, compiled_block_1_2951 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_branchf( 2953, compiled_block_1_2953 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2954, compiled_block_1_2954 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2954, compiled_block_1_2954 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_reg( 4 );
  twobit_branchf( 2956, compiled_block_1_2956 );
  twobit_load( 1, 2 );
  twobit_setrtn( 2957, compiled_block_1_2957 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2957, compiled_block_1_2957 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2959, compiled_block_1_2959 );
  twobit_load( 2, 3 );
  twobit_store( 2, 2 );
  twobit_load( 5, 1 );
  twobit_load( 3, 4 );
  twobit_load( 2, 5 );
  twobit_load( 1, 6 );
  twobit_lambda( compiled_start_1_45, 2, 5 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 2964, compiled_block_1_2964 );
  twobit_invoke( 2 );
  twobit_label( 2964, compiled_block_1_2964 );
  twobit_load( 0, 0 );
  twobit_skip( 2928, compiled_block_1_2928 );
  twobit_label( 2959, compiled_block_1_2959 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2928, compiled_block_1_2928 );
  twobit_label( 2956, compiled_block_1_2956 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2928, compiled_block_1_2928 );
  twobit_label( 2953, compiled_block_1_2953 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2928, compiled_block_1_2928 );
  twobit_label( 2950, compiled_block_1_2950 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2928, compiled_block_1_2928 );
  twobit_label( 2947, compiled_block_1_2947 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2928, compiled_block_1_2928 );
  twobit_label( 2944, compiled_block_1_2944 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2928, compiled_block_1_2928 );
  twobit_label( 2941, compiled_block_1_2941 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2928, compiled_block_1_2928 );
  twobit_label( 2938, compiled_block_1_2938 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2928, compiled_block_1_2928 );
  twobit_label( 2935, compiled_block_1_2935 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2928, compiled_block_1_2928 );
  twobit_label( 2932, compiled_block_1_2932 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2928, compiled_block_1_2928 );
  twobit_label( 2929, compiled_block_1_2929 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2928, compiled_block_1_2928 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 2966, compiled_block_1_2966 );
  twobit_reg( 4 );
  twobit_pop( 9 );
  twobit_return();
  twobit_label( 2966, compiled_block_1_2966 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2967, compiled_block_1_2967 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2967, compiled_block_1_2967 );
  twobit_load( 0, 0 );
  twobit_branchf( 2969, compiled_block_1_2969 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2970, compiled_block_1_2970 );
  twobit_invoke( 1 );
  twobit_label( 2970, compiled_block_1_2970 );
  twobit_load( 0, 0 );
  twobit_branchf( 2972, compiled_block_1_2972 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2973, compiled_block_1_2973 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2973, compiled_block_1_2973 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 2975, compiled_block_1_2975 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2976, compiled_block_1_2976 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2976, compiled_block_1_2976 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 2978, compiled_block_1_2978 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 2979, compiled_block_1_2979 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2979, compiled_block_1_2979 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 2981, compiled_block_1_2981 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2982, compiled_block_1_2982 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2982, compiled_block_1_2982 );
  twobit_load( 0, 0 );
  twobit_branchf( 2984, compiled_block_1_2984 );
  twobit_lexical( 1, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2985, compiled_block_1_2985 );
  twobit_invoke( 1 );
  twobit_label( 2985, compiled_block_1_2985 );
  twobit_load( 0, 0 );
  twobit_branchf( 2987, compiled_block_1_2987 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2988, compiled_block_1_2988 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 2988, compiled_block_1_2988 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_branchf( 2990, compiled_block_1_2990 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2991, compiled_block_1_2991 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 2991, compiled_block_1_2991 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_reg( 4 );
  twobit_branchf( 2993, compiled_block_1_2993 );
  twobit_load( 1, 1 );
  twobit_setrtn( 2994, compiled_block_1_2994 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 2994, compiled_block_1_2994 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 2996, compiled_block_1_2996 );
  twobit_lexical( 1, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_load( 1, 4 );
  twobit_reg( 3 );
  twobit_setrtn( 2997, compiled_block_1_2997 );
  twobit_invoke( 1 );
  twobit_label( 2997, compiled_block_1_2997 );
  twobit_load( 0, 0 );
  twobit_branchf( 2999, compiled_block_1_2999 );
  twobit_load( 2, 3 );
  twobit_store( 2, 7 );
  twobit_load( 5, 4 );
  twobit_load( 4, 1 );
  twobit_load( 3, 2 );
  twobit_load( 2, 5 );
  twobit_load( 1, 6 );
  twobit_lambda( compiled_start_1_46, 5, 5 );
  twobit_setreg( 1 );
  twobit_load( 2, 7 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 3004, compiled_block_1_3004 );
  twobit_invoke( 2 );
  twobit_label( 3004, compiled_block_1_3004 );
  twobit_load( 0, 0 );
  twobit_skip( 2968, compiled_block_1_2968 );
  twobit_label( 2999, compiled_block_1_2999 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2968, compiled_block_1_2968 );
  twobit_label( 2996, compiled_block_1_2996 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2968, compiled_block_1_2968 );
  twobit_label( 2993, compiled_block_1_2993 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2968, compiled_block_1_2968 );
  twobit_label( 2990, compiled_block_1_2990 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2968, compiled_block_1_2968 );
  twobit_label( 2987, compiled_block_1_2987 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2968, compiled_block_1_2968 );
  twobit_label( 2984, compiled_block_1_2984 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2968, compiled_block_1_2968 );
  twobit_label( 2981, compiled_block_1_2981 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2968, compiled_block_1_2968 );
  twobit_label( 2978, compiled_block_1_2978 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2968, compiled_block_1_2968 );
  twobit_label( 2975, compiled_block_1_2975 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2968, compiled_block_1_2968 );
  twobit_label( 2972, compiled_block_1_2972 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 2968, compiled_block_1_2968 );
  twobit_label( 2969, compiled_block_1_2969 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 2968, compiled_block_1_2968 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 3006, compiled_block_1_3006 );
  twobit_reg( 4 );
  twobit_pop( 9 );
  twobit_return();
  twobit_label( 3006, compiled_block_1_3006 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 3007, compiled_block_1_3007 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3007, compiled_block_1_3007 );
  twobit_load( 0, 0 );
  twobit_branchf( 3009, compiled_block_1_3009 );
  twobit_lexical( 1, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 3010, compiled_block_1_3010 );
  twobit_invoke( 1 );
  twobit_label( 3010, compiled_block_1_3010 );
  twobit_load( 0, 0 );
  twobit_branchf( 3012, compiled_block_1_3012 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 3013, compiled_block_1_3013 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 3013, compiled_block_1_3013 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 3015, compiled_block_1_3015 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 3016, compiled_block_1_3016 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3016, compiled_block_1_3016 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 3018, compiled_block_1_3018 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 3019, compiled_block_1_3019 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 3019, compiled_block_1_3019 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 3021, compiled_block_1_3021 );
  twobit_lexical( 1, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_reg( 3 );
  twobit_setrtn( 3022, compiled_block_1_3022 );
  twobit_invoke( 1 );
  twobit_label( 3022, compiled_block_1_3022 );
  twobit_load( 0, 0 );
  twobit_branchf( 3024, compiled_block_1_3024 );
  twobit_load( 1, 2 );
  twobit_setrtn( 3025, compiled_block_1_3025 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3025, compiled_block_1_3025 );
  twobit_load( 0, 0 );
  twobit_branchf( 3027, compiled_block_1_3027 );
  twobit_lexical( 1, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_reg( 4 );
  twobit_setrtn( 3028, compiled_block_1_3028 );
  twobit_invoke( 1 );
  twobit_label( 3028, compiled_block_1_3028 );
  twobit_load( 0, 0 );
  twobit_branchf( 3030, compiled_block_1_3030 );
  twobit_load( 1, 2 );
  twobit_setrtn( 3031, compiled_block_1_3031 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 3031, compiled_block_1_3031 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_branchf( 3033, compiled_block_1_3033 );
  twobit_load( 1, 2 );
  twobit_setrtn( 3034, compiled_block_1_3034 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3034, compiled_block_1_3034 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_reg( 4 );
  twobit_branchf( 3036, compiled_block_1_3036 );
  twobit_load( 1, 2 );
  twobit_setrtn( 3037, compiled_block_1_3037 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 3037, compiled_block_1_3037 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 3039, compiled_block_1_3039 );
  twobit_load( 2, 3 );
  twobit_store( 2, 2 );
  twobit_load( 5, 1 );
  twobit_load( 3, 4 );
  twobit_load( 2, 5 );
  twobit_load( 1, 6 );
  twobit_lambda( compiled_start_1_47, 7, 5 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 3044, compiled_block_1_3044 );
  twobit_invoke( 2 );
  twobit_label( 3044, compiled_block_1_3044 );
  twobit_load( 0, 0 );
  twobit_skip( 3008, compiled_block_1_3008 );
  twobit_label( 3039, compiled_block_1_3039 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3008, compiled_block_1_3008 );
  twobit_label( 3036, compiled_block_1_3036 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3008, compiled_block_1_3008 );
  twobit_label( 3033, compiled_block_1_3033 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3008, compiled_block_1_3008 );
  twobit_label( 3030, compiled_block_1_3030 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3008, compiled_block_1_3008 );
  twobit_label( 3027, compiled_block_1_3027 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3008, compiled_block_1_3008 );
  twobit_label( 3024, compiled_block_1_3024 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3008, compiled_block_1_3008 );
  twobit_label( 3021, compiled_block_1_3021 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3008, compiled_block_1_3008 );
  twobit_label( 3018, compiled_block_1_3018 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3008, compiled_block_1_3008 );
  twobit_label( 3015, compiled_block_1_3015 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3008, compiled_block_1_3008 );
  twobit_label( 3012, compiled_block_1_3012 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3008, compiled_block_1_3008 );
  twobit_label( 3009, compiled_block_1_3009 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 3008, compiled_block_1_3008 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 3046, compiled_block_1_3046 );
  twobit_reg( 4 );
  twobit_pop( 9 );
  twobit_return();
  twobit_label( 3046, compiled_block_1_3046 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 3047, compiled_block_1_3047 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3047, compiled_block_1_3047 );
  twobit_load( 0, 0 );
  twobit_branchf( 3049, compiled_block_1_3049 );
  twobit_lexical( 1, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 3050, compiled_block_1_3050 );
  twobit_invoke( 1 );
  twobit_label( 3050, compiled_block_1_3050 );
  twobit_load( 0, 0 );
  twobit_branchf( 3052, compiled_block_1_3052 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 3053, compiled_block_1_3053 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 3053, compiled_block_1_3053 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 3055, compiled_block_1_3055 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 3056, compiled_block_1_3056 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3056, compiled_block_1_3056 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 3058, compiled_block_1_3058 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 3059, compiled_block_1_3059 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 3059, compiled_block_1_3059 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 3061, compiled_block_1_3061 );
  twobit_load( 1, 1 );
  twobit_setrtn( 3062, compiled_block_1_3062 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3062, compiled_block_1_3062 );
  twobit_load( 0, 0 );
  twobit_branchf( 3064, compiled_block_1_3064 );
  twobit_lexical( 1, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_setrtn( 3065, compiled_block_1_3065 );
  twobit_invoke( 1 );
  twobit_label( 3065, compiled_block_1_3065 );
  twobit_load( 0, 0 );
  twobit_branchf( 3067, compiled_block_1_3067 );
  twobit_load( 1, 1 );
  twobit_setrtn( 3068, compiled_block_1_3068 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 3068, compiled_block_1_3068 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_branchf( 3070, compiled_block_1_3070 );
  twobit_load( 1, 1 );
  twobit_setrtn( 3071, compiled_block_1_3071 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3071, compiled_block_1_3071 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_reg( 4 );
  twobit_branchf( 3073, compiled_block_1_3073 );
  twobit_load( 1, 1 );
  twobit_setrtn( 3074, compiled_block_1_3074 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 3074, compiled_block_1_3074 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 3076, compiled_block_1_3076 );
  twobit_lexical( 1, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_load( 1, 4 );
  twobit_reg( 3 );
  twobit_setrtn( 3077, compiled_block_1_3077 );
  twobit_invoke( 1 );
  twobit_label( 3077, compiled_block_1_3077 );
  twobit_load( 0, 0 );
  twobit_branchf( 3079, compiled_block_1_3079 );
  twobit_load( 2, 3 );
  twobit_store( 2, 7 );
  twobit_load( 5, 4 );
  twobit_load( 4, 1 );
  twobit_load( 3, 2 );
  twobit_load( 2, 5 );
  twobit_load( 1, 6 );
  twobit_lambda( compiled_start_1_48, 9, 5 );
  twobit_setreg( 1 );
  twobit_load( 2, 7 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 3084, compiled_block_1_3084 );
  twobit_invoke( 2 );
  twobit_label( 3084, compiled_block_1_3084 );
  twobit_load( 0, 0 );
  twobit_skip( 3048, compiled_block_1_3048 );
  twobit_label( 3079, compiled_block_1_3079 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3048, compiled_block_1_3048 );
  twobit_label( 3076, compiled_block_1_3076 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3048, compiled_block_1_3048 );
  twobit_label( 3073, compiled_block_1_3073 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3048, compiled_block_1_3048 );
  twobit_label( 3070, compiled_block_1_3070 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3048, compiled_block_1_3048 );
  twobit_label( 3067, compiled_block_1_3067 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3048, compiled_block_1_3048 );
  twobit_label( 3064, compiled_block_1_3064 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3048, compiled_block_1_3048 );
  twobit_label( 3061, compiled_block_1_3061 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3048, compiled_block_1_3048 );
  twobit_label( 3058, compiled_block_1_3058 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3048, compiled_block_1_3048 );
  twobit_label( 3055, compiled_block_1_3055 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3048, compiled_block_1_3048 );
  twobit_label( 3052, compiled_block_1_3052 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3048, compiled_block_1_3048 );
  twobit_label( 3049, compiled_block_1_3049 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 3048, compiled_block_1_3048 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 3086, compiled_block_1_3086 );
  twobit_reg( 4 );
  twobit_pop( 9 );
  twobit_return();
  twobit_label( 3086, compiled_block_1_3086 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 3087, compiled_block_1_3087 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3087, compiled_block_1_3087 );
  twobit_load( 0, 0 );
  twobit_branchf( 3089, compiled_block_1_3089 );
  twobit_lexical( 1, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 3090, compiled_block_1_3090 );
  twobit_invoke( 1 );
  twobit_label( 3090, compiled_block_1_3090 );
  twobit_load( 0, 0 );
  twobit_branchf( 3092, compiled_block_1_3092 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 3093, compiled_block_1_3093 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 3093, compiled_block_1_3093 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 3095, compiled_block_1_3095 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 3096, compiled_block_1_3096 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3096, compiled_block_1_3096 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_branchf( 3098, compiled_block_1_3098 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 3099, compiled_block_1_3099 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 3099, compiled_block_1_3099 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 3101, compiled_block_1_3101 );
  twobit_lexical( 1, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_reg( 3 );
  twobit_setrtn( 3102, compiled_block_1_3102 );
  twobit_invoke( 1 );
  twobit_label( 3102, compiled_block_1_3102 );
  twobit_load( 0, 0 );
  twobit_branchf( 3104, compiled_block_1_3104 );
  twobit_load( 1, 2 );
  twobit_setrtn( 3105, compiled_block_1_3105 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3105, compiled_block_1_3105 );
  twobit_load( 0, 0 );
  twobit_branchf( 3107, compiled_block_1_3107 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_reg( 4 );
  twobit_setrtn( 3108, compiled_block_1_3108 );
  twobit_invoke( 1 );
  twobit_label( 3108, compiled_block_1_3108 );
  twobit_load( 0, 0 );
  twobit_branchf( 3110, compiled_block_1_3110 );
  twobit_load( 1, 2 );
  twobit_setrtn( 3111, compiled_block_1_3111 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 3111, compiled_block_1_3111 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 3113, compiled_block_1_3113 );
  twobit_load( 1, 2 );
  twobit_setrtn( 3114, compiled_block_1_3114 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3114, compiled_block_1_3114 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_reg( 4 );
  twobit_branchf( 3116, compiled_block_1_3116 );
  twobit_load( 1, 2 );
  twobit_setrtn( 3117, compiled_block_1_3117 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 3117, compiled_block_1_3117 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_reg( 4 );
  twobit_branchf( 3119, compiled_block_1_3119 );
  twobit_load( 1, 4 );
  twobit_setrtn( 3120, compiled_block_1_3120 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3120, compiled_block_1_3120 );
  twobit_load( 0, 0 );
  twobit_branchf( 3122, compiled_block_1_3122 );
  twobit_lexical( 1, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 4 );
  twobit_reg( 4 );
  twobit_setrtn( 3123, compiled_block_1_3123 );
  twobit_invoke( 1 );
  twobit_label( 3123, compiled_block_1_3123 );
  twobit_load( 0, 0 );
  twobit_branchf( 3125, compiled_block_1_3125 );
  twobit_load( 1, 4 );
  twobit_setrtn( 3126, compiled_block_1_3126 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 3126, compiled_block_1_3126 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 3128, compiled_block_1_3128 );
  twobit_load( 1, 4 );
  twobit_setrtn( 3129, compiled_block_1_3129 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3129, compiled_block_1_3129 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_reg( 4 );
  twobit_branchf( 3131, compiled_block_1_3131 );
  twobit_load( 1, 4 );
  twobit_setrtn( 3132, compiled_block_1_3132 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 3132, compiled_block_1_3132 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 3134, compiled_block_1_3134 );
  twobit_load( 2, 3 );
  twobit_store( 2, 4 );
  twobit_load( 7, 1 );
  twobit_load( 6, 5 );
  twobit_load( 5, 2 );
  twobit_load( 3, 6 );
  twobit_load( 2, 7 );
  twobit_load( 1, 8 );
  twobit_lambda( compiled_start_1_49, 11, 7 );
  twobit_setreg( 1 );
  twobit_load( 2, 4 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 3140, compiled_block_1_3140 );
  twobit_invoke( 2 );
  twobit_label( 3140, compiled_block_1_3140 );
  twobit_load( 0, 0 );
  twobit_skip( 3088, compiled_block_1_3088 );
  twobit_label( 3134, compiled_block_1_3134 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3088, compiled_block_1_3088 );
  twobit_label( 3131, compiled_block_1_3131 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3088, compiled_block_1_3088 );
  twobit_label( 3128, compiled_block_1_3128 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3088, compiled_block_1_3088 );
  twobit_label( 3125, compiled_block_1_3125 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3088, compiled_block_1_3088 );
  twobit_label( 3122, compiled_block_1_3122 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3088, compiled_block_1_3088 );
  twobit_label( 3119, compiled_block_1_3119 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3088, compiled_block_1_3088 );
  twobit_label( 3116, compiled_block_1_3116 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3088, compiled_block_1_3088 );
  twobit_label( 3113, compiled_block_1_3113 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3088, compiled_block_1_3088 );
  twobit_label( 3110, compiled_block_1_3110 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3088, compiled_block_1_3088 );
  twobit_label( 3107, compiled_block_1_3107 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3088, compiled_block_1_3088 );
  twobit_label( 3104, compiled_block_1_3104 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3088, compiled_block_1_3088 );
  twobit_label( 3101, compiled_block_1_3101 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3088, compiled_block_1_3088 );
  twobit_label( 3098, compiled_block_1_3098 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3088, compiled_block_1_3088 );
  twobit_label( 3095, compiled_block_1_3095 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3088, compiled_block_1_3088 );
  twobit_label( 3092, compiled_block_1_3092 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3088, compiled_block_1_3088 );
  twobit_label( 3089, compiled_block_1_3089 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 3088, compiled_block_1_3088 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 3142, compiled_block_1_3142 );
  twobit_reg( 4 );
  twobit_pop( 9 );
  twobit_return();
  twobit_label( 3142, compiled_block_1_3142 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 3143, compiled_block_1_3143 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3143, compiled_block_1_3143 );
  twobit_load( 0, 0 );
  twobit_branchf( 3145, compiled_block_1_3145 );
  twobit_lexical( 1, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 3146, compiled_block_1_3146 );
  twobit_invoke( 1 );
  twobit_label( 3146, compiled_block_1_3146 );
  twobit_load( 0, 0 );
  twobit_branchf( 3148, compiled_block_1_3148 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 3149, compiled_block_1_3149 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 3149, compiled_block_1_3149 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 3151, compiled_block_1_3151 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 3152, compiled_block_1_3152 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3152, compiled_block_1_3152 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 3154, compiled_block_1_3154 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_setrtn( 3155, compiled_block_1_3155 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 3155, compiled_block_1_3155 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_branchf( 3157, compiled_block_1_3157 );
  twobit_load( 1, 1 );
  twobit_setrtn( 3158, compiled_block_1_3158 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3158, compiled_block_1_3158 );
  twobit_load( 0, 0 );
  twobit_branchf( 3160, compiled_block_1_3160 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_setrtn( 3161, compiled_block_1_3161 );
  twobit_invoke( 1 );
  twobit_label( 3161, compiled_block_1_3161 );
  twobit_load( 0, 0 );
  twobit_branchf( 3163, compiled_block_1_3163 );
  twobit_load( 1, 1 );
  twobit_setrtn( 3164, compiled_block_1_3164 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 3164, compiled_block_1_3164 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_reg( 4 );
  twobit_branchf( 3166, compiled_block_1_3166 );
  twobit_load( 1, 1 );
  twobit_setrtn( 3167, compiled_block_1_3167 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3167, compiled_block_1_3167 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_reg( 4 );
  twobit_branchf( 3169, compiled_block_1_3169 );
  twobit_load( 1, 1 );
  twobit_setrtn( 3170, compiled_block_1_3170 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 3170, compiled_block_1_3170 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 3172, compiled_block_1_3172 );
  twobit_movereg( 4, 1 );
  twobit_setrtn( 3173, compiled_block_1_3173 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3173, compiled_block_1_3173 );
  twobit_load( 0, 0 );
  twobit_branchf( 3175, compiled_block_1_3175 );
  twobit_lexical( 1, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_setrtn( 3176, compiled_block_1_3176 );
  twobit_invoke( 1 );
  twobit_label( 3176, compiled_block_1_3176 );
  twobit_load( 0, 0 );
  twobit_branchf( 3178, compiled_block_1_3178 );
  twobit_load( 1, 1 );
  twobit_setrtn( 3179, compiled_block_1_3179 );
  twobit_jump( 2, 1803, compiled_block_1_1803 );
  twobit_label( 3179, compiled_block_1_3179 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 4 );
  twobit_branchf( 3181, compiled_block_1_3181 );
  twobit_load( 1, 1 );
  twobit_setrtn( 3182, compiled_block_1_3182 );
  twobit_jump( 2, 1802, compiled_block_1_1802 );
  twobit_label( 3182, compiled_block_1_3182 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_reg( 4 );
  twobit_branchf( 3184, compiled_block_1_3184 );
  twobit_load( 1, 1 );
  twobit_setrtn( 3185, compiled_block_1_3185 );
  twobit_jump( 2, 1801, compiled_block_1_1801 );
  twobit_label( 3185, compiled_block_1_3185 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_branchf( 3187, compiled_block_1_3187 );
  twobit_lexical( 1, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_load( 1, 5 );
  twobit_reg( 3 );
  twobit_setrtn( 3188, compiled_block_1_3188 );
  twobit_invoke( 1 );
  twobit_label( 3188, compiled_block_1_3188 );
  twobit_load( 0, 0 );
  twobit_branchf( 3190, compiled_block_1_3190 );
  twobit_load( 2, 3 );
  twobit_store( 2, 9 );
  twobit_load( 7, 5 );
  twobit_load( 6, 1 );
  twobit_load( 5, 2 );
  twobit_load( 4, 4 );
  twobit_load( 3, 8 );
  twobit_load( 2, 7 );
  twobit_load( 1, 6 );
  twobit_lambda( compiled_start_1_50, 13, 7 );
  twobit_setreg( 1 );
  twobit_load( 2, 9 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 3196, compiled_block_1_3196 );
  twobit_invoke( 2 );
  twobit_label( 3196, compiled_block_1_3196 );
  twobit_load( 0, 0 );
  twobit_skip( 3144, compiled_block_1_3144 );
  twobit_label( 3190, compiled_block_1_3190 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3144, compiled_block_1_3144 );
  twobit_label( 3187, compiled_block_1_3187 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3144, compiled_block_1_3144 );
  twobit_label( 3184, compiled_block_1_3184 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3144, compiled_block_1_3144 );
  twobit_label( 3181, compiled_block_1_3181 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3144, compiled_block_1_3144 );
  twobit_label( 3178, compiled_block_1_3178 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3144, compiled_block_1_3144 );
  twobit_label( 3175, compiled_block_1_3175 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3144, compiled_block_1_3144 );
  twobit_label( 3172, compiled_block_1_3172 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3144, compiled_block_1_3144 );
  twobit_label( 3169, compiled_block_1_3169 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3144, compiled_block_1_3144 );
  twobit_label( 3166, compiled_block_1_3166 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3144, compiled_block_1_3144 );
  twobit_label( 3163, compiled_block_1_3163 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3144, compiled_block_1_3144 );
  twobit_label( 3160, compiled_block_1_3160 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3144, compiled_block_1_3144 );
  twobit_label( 3157, compiled_block_1_3157 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3144, compiled_block_1_3144 );
  twobit_label( 3154, compiled_block_1_3154 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3144, compiled_block_1_3144 );
  twobit_label( 3151, compiled_block_1_3151 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3144, compiled_block_1_3144 );
  twobit_label( 3148, compiled_block_1_3148 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 3144, compiled_block_1_3144 );
  twobit_label( 3145, compiled_block_1_3145 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 3144, compiled_block_1_3144 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 3198, compiled_block_1_3198 );
  twobit_reg( 4 );
  twobit_pop( 9 );
  twobit_return();
  twobit_label( 3198, compiled_block_1_3198 );
  twobit_lexical( 0, 1 );
  twobit_branchf( 3200, compiled_block_1_3200 );
  twobit_load( 2, 3 );
  twobit_lambda( compiled_start_1_51, 15, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-values */
  twobit_setrtn( 3201, compiled_block_1_3201 );
  twobit_invoke( 2 );
  twobit_label( 3201, compiled_block_1_3201 );
  twobit_load( 0, 0 );
  twobit_skip( 3199, compiled_block_1_3199 );
  twobit_label( 3200, compiled_block_1_3200 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 3199, compiled_block_1_3199 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 3203, compiled_block_1_3203 );
  twobit_reg( 4 );
  twobit_pop( 9 );
  twobit_return();
  twobit_label( 3203, compiled_block_1_3203 );
  twobit_const( 16 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_global( 17 ); /* error */
  twobit_pop( 9 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_45( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lexical( 2, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 2960, compiled_block_1_2960 );
  twobit_invoke( 1 );
  twobit_label( 2960, compiled_block_1_2960 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 4 );
  twobit_setrtn( 2961, compiled_block_1_2961 );
  twobit_jump( 3, 1805, compiled_block_1_1805 );
  twobit_label( 2961, compiled_block_1_2961 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 2962, compiled_block_1_2962 );
  twobit_invoke( 3 );
  twobit_label( 2962, compiled_block_1_2962 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 2, 7 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 0 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_46( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lexical( 2, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 3000, compiled_block_1_3000 );
  twobit_invoke( 1 );
  twobit_label( 3000, compiled_block_1_3000 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 3 );
  twobit_setrtn( 3001, compiled_block_1_3001 );
  twobit_jump( 3, 1805, compiled_block_1_1805 );
  twobit_label( 3001, compiled_block_1_3001 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_setrtn( 3002, compiled_block_1_3002 );
  twobit_invoke( 3 );
  twobit_label( 3002, compiled_block_1_3002 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 2, 7 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 0 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_47( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lexical( 2, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 3040, compiled_block_1_3040 );
  twobit_invoke( 1 );
  twobit_label( 3040, compiled_block_1_3040 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 4 );
  twobit_setrtn( 3041, compiled_block_1_3041 );
  twobit_jump( 3, 1805, compiled_block_1_1805 );
  twobit_label( 3041, compiled_block_1_3041 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 2, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 3042, compiled_block_1_3042 );
  twobit_invoke( 3 );
  twobit_label( 3042, compiled_block_1_3042 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 2, 7 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 0 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_48( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lexical( 2, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 3080, compiled_block_1_3080 );
  twobit_invoke( 1 );
  twobit_label( 3080, compiled_block_1_3080 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 3 );
  twobit_setrtn( 3081, compiled_block_1_3081 );
  twobit_jump( 3, 1805, compiled_block_1_1805 );
  twobit_label( 3081, compiled_block_1_3081 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_lexical( 2, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_setrtn( 3082, compiled_block_1_3082 );
  twobit_invoke( 3 );
  twobit_label( 3082, compiled_block_1_3082 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 2, 7 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 0 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_49( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lexical( 2, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 7 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 3135, compiled_block_1_3135 );
  twobit_invoke( 1 );
  twobit_label( 3135, compiled_block_1_3135 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 6 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 4 );
  twobit_setrtn( 3136, compiled_block_1_3136 );
  twobit_jump( 3, 1805, compiled_block_1_1805 );
  twobit_label( 3136, compiled_block_1_3136 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_setrtn( 3137, compiled_block_1_3137 );
  twobit_invoke( 3 );
  twobit_label( 3137, compiled_block_1_3137 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 2, 7 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 3138, compiled_block_1_3138 );
  twobit_invoke( 1 );
  twobit_label( 3138, compiled_block_1_3138 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_pop( 0 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_50( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lexical( 2, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 7 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 3191, compiled_block_1_3191 );
  twobit_invoke( 1 );
  twobit_label( 3191, compiled_block_1_3191 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 6 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 3 );
  twobit_setrtn( 3192, compiled_block_1_3192 );
  twobit_jump( 3, 1805, compiled_block_1_1805 );
  twobit_label( 3192, compiled_block_1_3192 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_setrtn( 3193, compiled_block_1_3193 );
  twobit_invoke( 3 );
  twobit_label( 3193, compiled_block_1_3193 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 2, 7 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 3194, compiled_block_1_3194 );
  twobit_invoke( 1 );
  twobit_label( 3194, compiled_block_1_3194 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_lexical( 2, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_pop( 0 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_51( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_33( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_34( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_35( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_36( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_37( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_38( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 5 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_invoke( 5 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_39( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_invoke( 4 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_40( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_invoke( 4 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_41( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_42( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_invoke( 4 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_43( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


RTYPE twobit_thunk_32f9d1e553eabe8f000c2e8133575be5_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_32f9d1e553eabe8f000c2e8133575be5_0,
  0  /* The table may be empty; some compilers complain */
};
