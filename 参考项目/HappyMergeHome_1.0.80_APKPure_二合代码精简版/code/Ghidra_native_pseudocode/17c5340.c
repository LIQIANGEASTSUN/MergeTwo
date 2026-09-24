
/* WARNING: Possible PIC construction at 0x017dedc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x017dedcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017d5340(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  char *pcVar6;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar7;
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
  
  iVar1 = func_0x02953fd4(0x415,0);
  if (iVar1 == 0) {
    pcVar6 = (char *)(_UNK_017df028 + 0x17dece0);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_017df02c + 0x17decf4));
      func_0x01438628(*(undefined4 *)(_UNK_017df030 + 0x17ded00));
      func_0x01438628(*(undefined4 *)(_UNK_017df034 + 0x17ded0c));
      func_0x01438628(*(undefined4 *)(_UNK_017df038 + 0x17ded18));
      func_0x01438628(*(undefined4 *)(_UNK_017df03c + 0x17ded24));
      func_0x01438628(*(undefined4 *)(_UNK_017df040 + 0x17ded30));
      func_0x01438628(*(undefined4 *)(_UNK_017df044 + 0x17ded3c));
      func_0x01438628(*(undefined4 *)(_UNK_017df048 + 0x17ded48));
      func_0x01438628(*(undefined4 *)(_UNK_017df04c + 0x17ded54));
      func_0x01438628(*(undefined4 *)(_UNK_017df050 + 0x17ded60));
      func_0x01438628(*(undefined4 *)(_UNK_017df054 + 0x17ded6c));
      func_0x01438628(*(undefined4 *)(_UNK_017df058 + 0x17ded78));
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iVar1 = func_0x02953fd4(0x416,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_017df05c + 0x17deddc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017df060 + 0x17dedf8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x24);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_48,iVar1,**(undefined4 **)(_UNK_017df064 + 0x17dee30));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      puVar9 = *(undefined4 **)(_UNK_017df068 + 0x17dee50);
      piVar8 = *(int **)(_UNK_017df06c + 0x17dee58);
      puVar10 = *(undefined4 **)(_UNK_017df070 + 0x17dee60);
      puVar11 = *(undefined4 **)(_UNK_017df074 + 0x17dee68);
      while (iVar4 = func_0x015109ec(&uStack_38,*puVar9), iVar1 = iStack_2c, iVar4 != 0) {
        if (*(int *)(**(int **)(_UNK_017df078 + 0x17dee84) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_017df07c + 0x17deea4));
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
            iVar2 = func_0x014e9518(*puVar10);
            iVar3 = func_0x0152983c(iVar1,iVar4,*puVar11);
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
      func_0x0152da2c(&uStack_38,**(undefined4 **)(_UNK_017df084 + 0x17def74));
      return;
    }
    iVar1 = func_0x029540a4(0x416,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x17dedcc;
    unaff_r4 = iVar1;
    unaff_r5 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_48;
  }
  else {
    iVar1 = func_0x029540a4(0x415,0);
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

