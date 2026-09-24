
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f22be4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02f22cd0 + 0x2f22c04);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f22cd4 + 0x2f22c24));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6cf9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6cf9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = param_5;
    iStack_30 = param_6;
    iStack_2c = 0;
    uStack_38 = param_4;
    func_0x028bc180(iVar1,param_1,param_2,param_3);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02f22cd8 + 0x2f22c94) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_02f1f154();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar4 = (char *)(_UNK_02f22df0 + 0x2f22cfc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f22df4 + 0x2f22d10));
    *pcVar4 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_40 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_34 = uStack_44;
  iStack_30 = iStack_40;
  iStack_2c = uStack_3c;
  uStack_28 = uStack_44;
  iVar2 = func_0x02953fd4(0x6cfa,0);
  if (iVar2 == 0) {
    func_0x024f1060(&uStack_58,0);
    puVar3 = (undefined4 *)((uint)&uStack_48 | 4);
    *puVar3 = uStack_58;
    puVar3[1] = uStack_54;
    puVar3[2] = uStack_50;
    puVar3[3] = uStack_4c;
    func_0x014385cc(puVar3,0);
    iStack_30 = iVar1;
    func_0x014385cc(&iStack_30,iVar1);
    iStack_2c = param_6;
    uStack_48 = 0xffffffff;
    uStack_34 = param_4;
    func_0x035ca0a0(puVar3,&uStack_48,**(undefined4 **)(_UNK_02f22df8 + 0x2f22dd8));
  }
  else {
    iVar2 = func_0x029540a4(0x6cfa,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028d6898(iVar2,iVar1,param_4,param_6,0);
  }
  return;
}

