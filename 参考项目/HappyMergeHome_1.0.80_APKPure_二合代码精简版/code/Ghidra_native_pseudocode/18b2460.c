
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018c2460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6)

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
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_018c254c + 0x18c2480);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018c2550 + 0x18c24a0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x94f9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x94f9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iStack_34 = param_5;
    uStack_30 = param_6;
    uStack_2c = 0;
    uStack_38 = param_4;
    func_0x028bc180(iVar1,param_1,param_2,param_3);
    return;
  }
  if (*(int *)(**(int **)(_UNK_018c2554 + 0x18c2510) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_018bd08c();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar4 = (char *)(_UNK_018c266c + 0x18c2578);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018c2670 + 0x18c258c));
    *pcVar4 = '\x01';
  }
  iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  iStack_34 = iStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  iStack_28 = iStack_44;
  iVar2 = func_0x02953fd4(0x94fa,0);
  if (iVar2 == 0) {
    func_0x024f1060(&uStack_58,0);
    puVar3 = (undefined4 *)((uint)&uStack_48 | 4);
    *puVar3 = uStack_58;
    puVar3[1] = uStack_54;
    puVar3[2] = uStack_50;
    puVar3[3] = uStack_4c;
    func_0x014385cc(puVar3,0);
    iStack_34 = iVar1;
    func_0x014385cc(&iStack_34,iVar1);
    uStack_2c = param_6;
    uStack_48 = 0xffffffff;
    uStack_30 = param_4;
    func_0x035caa78(puVar3,&uStack_48,**(undefined4 **)(_UNK_018c2674 + 0x18c2654));
  }
  else {
    iVar2 = func_0x029540a4(0x94fa,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028d6898(iVar2,iVar1,param_4,param_6,0);
  }
  return;
}

