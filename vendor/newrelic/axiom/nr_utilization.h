#ifndef NR_UTILIZATION_HDR
#define NR_UTILIZATION_HDR

typedef struct _nr_utilization_t {
  unsigned int aws : 1;
  unsigned int azure : 1;
  unsigned int gcp : 1;
  unsigned int pcf : 1;
  unsigned int docker : 1;
} nr_utilization_t;

static const nr_utilization_t nr_utilization_default = {
    .aws = 1,
    .azure = 1,
    .gcp = 1,
    .pcf = 1,
    .docker = 1,
};

#endif /* NR_UTILIZATION_HDR */
