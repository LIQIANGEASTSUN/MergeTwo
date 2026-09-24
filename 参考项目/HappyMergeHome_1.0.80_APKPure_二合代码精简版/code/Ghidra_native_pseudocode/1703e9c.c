
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01713e9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6)

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
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_01713fa4 + 0x1713ebc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01713fa8 + 0x1713edc));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x8b6e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x8b6e,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_34 = param_5;
    iStack_30 = param_6;
    iStack_2c = 0;
    iStack_38 = param_4;
    func_0x028bc180(iVar2,param_1,param_2,param_3);
    return;
  }
  iStack_38 = param_5;
  iStack_34 = param_6;
  iStack_30 = 0;
  func_0x02bf15ac(param_1,param_2,param_3,param_4);
  if (*(int *)(**(int **)(_UNK_01713fac + 0x1713f68) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = FUN_0170e674();
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar4 = (char *)(_UNK_017136bc + 0x17135c8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017136c0 + 0x17135dc));
    *pcVar4 = '\x01';
  }
  iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  iStack_38 = 0;
  iStack_34 = iStack_44;
  iStack_30 = uStack_40;
  iStack_2c = uStack_3c;
  iStack_28 = iStack_44;
  iVar1 = func_0x02953fd4(0x8b45,0);
  if (iVar1 == 0) {
    func_0x024f1060(&uStack_58,0);
    puVar3 = (undefined4 *)((uint)&uStack_48 | 4);
    *puVar3 = uStack_58;
    puVar3[1] = uStack_54;
    puVar3[2] = uStack_50;
    puVar3[3] = uStack_4c;
    func_0x014385cc(puVar3,0);
    iStack_34 = iVar2;
    func_0x014385cc(&iStack_34,iVar2);
    iStack_2c = param_6;
    uStack_48 = 0xffffffff;
    iStack_30 = param_4;
    func_0x035cb9c8(puVar3,&uStack_48,**(undefined4 **)(_UNK_017136c4 + 0x17136a4));
  }
  else {
    iVar1 = func_0x029540a4(0x8b45,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d6898(iVar1,iVar2,param_4,param_6,0);
  }
  return;
}

