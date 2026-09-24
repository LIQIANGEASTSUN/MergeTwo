
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c801f8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01c8039c + 0x1c80218);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c803a0 + 0x1c8022c));
    func_0x01438628(*(undefined4 *)(_UNK_01c803a4 + 0x1c80238));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xadd1,0);
  if (iVar1 == 0) {
    func_0x029f063c(param_1,param_2,param_3);
    if (*(int *)(**(int **)(_UNK_01c803a8 + 0x1c80330) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01c803ac + 0x1c8034c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x020b5214(iVar1,param_12,0);
    (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    func_0x01c803b0(param_1);
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  else {
    iVar1 = func_0x029540a4(0xadd1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar1,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
  }
  return;
}

