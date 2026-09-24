
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0323da64(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_0323dd1c + 0x323da7c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0323dd20 + 0x323da90));
    func_0x01438628(*(undefined4 *)(_UNK_0323dd24 + 0x323da9c));
    func_0x01438628(*(undefined4 *)(_UNK_0323dd28 + 0x323daa8));
    func_0x01438628(*(undefined4 *)(_UNK_0323dd2c + 0x323dab4));
    func_0x01438628(*(undefined4 *)(_UNK_0323dd30 + 0x323dac0));
    func_0x01438628(*(undefined4 *)(_UNK_0323dd34 + 0x323dacc));
    func_0x01438628(*(undefined4 *)(_UNK_0323dd38 + 0x323dad8));
    func_0x01438628(*(undefined4 *)(_UNK_0323dd3c + 0x323dae4));
    func_0x01438628(*(undefined4 *)(_UNK_0323dd40 + 0x323daf0));
    func_0x01438628(*(undefined4 *)(_UNK_0323dd44 + 0x323dafc));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7f93,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0323dd48 + 0x323db6c));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0323dd4c + 0x323db80));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0323dd50 + 0x323dba4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0323dd54 + 0x323dbc0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e3558(iVar1,**(undefined4 **)(_UNK_0323dd58 + 0x323dbe0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0323dd5c + 0x323dc0c));
      puVar5 = *(undefined4 **)(_UNK_0323dd60 + 0x323dc20);
      puVar7 = *(undefined4 **)(_UNK_0323dd64 + 0x323dc28);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0323dd68 + 0x323dc80));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7f93,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291e454(iVar1,param_1,0);
  }
  return iVar1;
}

