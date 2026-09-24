
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b2210(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar5 = (char *)(_UNK_032b2570 + 0x32b2228);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b2574 + 0x32b223c));
    func_0x01438628(*(undefined4 *)(_UNK_032b2578 + 0x32b2248));
    func_0x01438628(*(undefined4 *)(_UNK_032b257c + 0x32b2254));
    func_0x01438628(*(undefined4 *)(_UNK_032b2580 + 0x32b2260));
    func_0x01438628(*(undefined4 *)(_UNK_032b2584 + 0x32b226c));
    func_0x01438628(*(undefined4 *)(_UNK_032b2588 + 0x32b2278));
    func_0x01438628(*(undefined4 *)(_UNK_032b258c + 0x32b2284));
    func_0x01438628(*(undefined4 *)(_UNK_032b2590 + 0x32b2290));
    func_0x01438628(*(undefined4 *)(_UNK_032b2594 + 0x32b229c));
    func_0x01438628(*(undefined4 *)(_UNK_032b2598 + 0x32b22a8));
    func_0x01438628(*(undefined4 *)(_UNK_032b259c + 0x32b22b4));
    func_0x01438628(*(undefined4 *)(_UNK_032b25a0 + 0x32b22c0));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x421,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032b25a4 + 0x32b2324) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032b25a8 + 0x32b2340));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x24);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x04cfe6f4(&uStack_48,iVar1,**(undefined4 **)(_UNK_032b25ac + 0x32b2378));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar8 = *(undefined4 **)(_UNK_032b25b0 + 0x32b2398);
    piVar7 = *(int **)(_UNK_032b25b4 + 0x32b23a0);
    puVar9 = *(undefined4 **)(_UNK_032b25b8 + 0x32b23a8);
    puVar10 = *(undefined4 **)(_UNK_032b25bc + 0x32b23b0);
    while (iVar2 = func_0x04878f14(&uStack_38,*puVar8), iVar1 = iStack_2c, iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_032b25c0 + 0x32b23cc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032b25c4 + 0x32b23ec));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar2,uVar6,0);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar2 = 0;
        do {
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x04e4a028(*puVar9);
          iVar4 = func_0x04cfd760(iVar1,iVar2,*puVar10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar6 = *(undefined4 *)(iVar4 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x02be1608(iVar3,uVar6,0);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(iVar1 + 0xc));
      }
    }
    func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_032b25cc + 0x32b24bc));
  }
  else {
    iVar1 = func_0x029540a4(0x421,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

