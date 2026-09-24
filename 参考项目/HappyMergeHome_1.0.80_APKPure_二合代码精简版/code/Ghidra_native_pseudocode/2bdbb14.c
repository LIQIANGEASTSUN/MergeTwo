
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bebb14(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_02bebc88 + 0x2bebb34);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bebc8c + 0x2bebb48));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2520,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02beba7c(param_2,param_3);
    if (iVar1 != 0) {
      uVar4 = *(undefined4 *)(iVar1 + 0xc);
      if (*(int *)(**(int **)(_UNK_02bebc9c + 0x2bebbc4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x024eec50(uVar4,0,0);
      if (iVar2 == 0) {
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x024eecb8(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&uStack_28,iVar1,0);
        goto LAB_02bebc78;
      }
    }
    pcVar5 = (char *)(_UNK_02bebc90 + 0x2bebbfc);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02bebc94 + 0x2bebc10));
      *pcVar5 = '\x01';
    }
    puVar3 = *(undefined8 **)(**(int **)(_UNK_02bebc98 + 0x2bebc24) + 0x5c);
    uStack_28 = *puVar3;
    uStack_20 = *(undefined4 *)(puVar3 + 1);
  }
  else {
    iVar1 = func_0x029540a4(0x2520,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02879e4c(&uStack_28,iVar1,param_2,param_3,0);
  }
LAB_02bebc78:
  *(undefined4 *)(param_1 + 1) = uStack_20;
  *param_1 = uStack_28;
  return;
}

