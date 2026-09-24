
/* WARNING: Possible PIC construction at 0x032b2310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x032b2314) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032a863c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  char *pcVar6;
  undefined4 unaff_r5;
  undefined4 uVar7;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 unaff_lr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iVar1 = func_0x02953fd4(0x420,0);
  if (iVar1 == 0) {
    pcVar6 = (char *)(_UNK_032b2570 + 0x32b2228);
    if (*pcVar6 == '\0') {
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
      *pcVar6 = '\x01';
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
      puVar9 = *(undefined4 **)(_UNK_032b25b0 + 0x32b2398);
      piVar8 = *(int **)(_UNK_032b25b4 + 0x32b23a0);
      puVar10 = *(undefined4 **)(_UNK_032b25b8 + 0x32b23a8);
      puVar11 = *(undefined4 **)(_UNK_032b25bc + 0x32b23b0);
      while (iVar4 = func_0x04878f14(&uStack_38,*puVar9), iVar1 = iStack_2c, iVar4 != 0) {
        if (*(int *)(**(int **)(_UNK_032b25c0 + 0x32b23cc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_032b25c4 + 0x32b23ec));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar1 + 8);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x029b1058(iVar4,uVar7,0);
        if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
          iVar4 = 0;
          do {
            if (*(int *)(*piVar8 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x04e4a028(*puVar10);
            iVar3 = func_0x04cfd760(iVar1,iVar4,*puVar11);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar7 = *(undefined4 *)(iVar3 + 8);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            func_0x02be1608(iVar2,uVar7,0);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(iVar1 + 0xc));
        }
      }
      func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_032b25cc + 0x32b24bc));
      return;
    }
    iVar1 = func_0x029540a4(0x421,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x32b2314;
    unaff_r4 = iVar1;
    unaff_r5 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_48;
  }
  else {
    iVar1 = func_0x029540a4(0x420,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x024f56c0((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar4 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar4 != 0) {
    func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
  }
  func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x024f56d0(iVar4,uVar7,(undefined1 *)((int)register0x00000054 + -0x30),uVar5);
  return;
}

