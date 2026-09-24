
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03080c00(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_03080ec0 + 0x3080c18);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03080ec4 + 0x3080c2c));
    func_0x01438628(*(undefined4 *)(_UNK_03080ec8 + 0x3080c38));
    func_0x01438628(*(undefined4 *)(_UNK_03080ecc + 0x3080c44));
    func_0x01438628(*(undefined4 *)(_UNK_03080ed0 + 0x3080c50));
    func_0x01438628(*(undefined4 *)(_UNK_03080ed4 + 0x3080c5c));
    func_0x01438628(*(undefined4 *)(_UNK_03080ed8 + 0x3080c68));
    func_0x01438628(*(undefined4 *)(_UNK_03080edc + 0x3080c74));
    func_0x01438628(*(undefined4 *)(_UNK_03080ee0 + 0x3080c80));
    func_0x01438628(*(undefined4 *)(_UNK_03080ee4 + 0x3080c8c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x1516,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03080ee8 + 0x3080d00));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_03080eec + 0x3080d14));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_03080ef0 + 0x3080d38) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03080ef4 + 0x3080d54));
      iVar2 = FUN_0307fb70(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_03080ef8 + 0x3080db0));
        puVar6 = *(undefined4 **)(_UNK_03080efc + 0x3080dc4);
        puVar7 = *(undefined4 **)(_UNK_03080f00 + 0x3080dcc);
        while (iVar2 = func_0x04878f14(&uStack_30,*puVar6), iVar1 = iStack_24, iVar2 != 0) {
          iVar2 = *piVar4;
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar1 + 0x2c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x046cc8c8(iVar2,uVar5,iVar1,*puVar7);
        }
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03080f04 + 0x3080e24));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x1516,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}

