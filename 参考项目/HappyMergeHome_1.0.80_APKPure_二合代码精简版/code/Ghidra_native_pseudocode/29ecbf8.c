
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029fcbf8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 auStack_70 [5];
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_029fcce4 + 0x29fcc18);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029fcce8 + 0x29fcc2c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2500,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2500,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    func_0x02871f94(iVar1,param_1,param_2,param_3);
    return;
  }
  func_0x02bf1544(param_1,param_2,param_3,0);
  if (*(int *)(**(int **)(_UNK_029fccec + 0x29fcca8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x029fc490();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar4 = (char *)(_UNK_029fcdf4 + 0x29fcd10);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029fcdf8 + 0x29fcd24));
    *pcVar4 = '\x01';
  }
  func_0x014e6ddc(auStack_70,0x58);
  iVar2 = func_0x02953fd4(0x2502,0);
  if (iVar2 == 0) {
    func_0x024f1060(&uStack_80,0);
    puVar3 = (undefined8 *)((uint)auStack_70 | 4);
    *puVar3 = uStack_80;
    puVar3[1] = uStack_78;
    func_0x014385cc(puVar3,0);
    iStack_5c = iVar1;
    func_0x014385cc(&iStack_5c,iVar1);
    auStack_70[0] = 0xffffffff;
    uStack_58 = param_3;
    uStack_54 = param_2;
    func_0x035c6018(puVar3,auStack_70,**(undefined4 **)(_UNK_029fcdfc + 0x29fcddc));
  }
  else {
    iVar2 = func_0x029540a4(0x2502,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02871f94(iVar2,iVar1,param_2,param_3,0);
  }
  return;
}

