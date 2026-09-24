
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029fccf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 auStack_70 [5];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  pcVar2 = (char *)(_UNK_029fcdf4 + 0x29fcd10);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029fcdf8 + 0x29fcd24));
    *pcVar2 = '\x01';
  }
  func_0x014e6ddc(auStack_70,0x58);
  iVar1 = func_0x02953fd4(0x2502,0);
  if (iVar1 == 0) {
    func_0x024f1060(&uStack_80,0);
    puVar3 = (undefined8 *)((uint)auStack_70 | 4);
    *puVar3 = uStack_80;
    puVar3[1] = uStack_78;
    func_0x014385cc(puVar3,0);
    uStack_5c = param_1;
    func_0x014385cc(&uStack_5c,param_1);
    auStack_70[0] = 0xffffffff;
    uStack_58 = param_3;
    uStack_54 = param_2;
    func_0x035c6018(puVar3,auStack_70,**(undefined4 **)(_UNK_029fcdfc + 0x29fcddc));
  }
  else {
    iVar1 = func_0x029540a4(0x2502,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02871f94(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

