
/* WARNING: Possible PIC construction at 0x01903e90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01903e94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018fa17c(undefined4 param_1)

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
  
  iVar1 = func_0x02953fd4(0x428,0);
  if (iVar1 == 0) {
    pcVar6 = (char *)(_UNK_019040f0 + 0x1903da8);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_019040f4 + 0x1903dbc));
      func_0x01438628(*(undefined4 *)(_UNK_019040f8 + 0x1903dc8));
      func_0x01438628(*(undefined4 *)(_UNK_019040fc + 0x1903dd4));
      func_0x01438628(*(undefined4 *)(_UNK_01904100 + 0x1903de0));
      func_0x01438628(*(undefined4 *)(_UNK_01904104 + 0x1903dec));
      func_0x01438628(*(undefined4 *)(_UNK_01904108 + 0x1903df8));
      func_0x01438628(*(undefined4 *)(_UNK_0190410c + 0x1903e04));
      func_0x01438628(*(undefined4 *)(_UNK_01904110 + 0x1903e10));
      func_0x01438628(*(undefined4 *)(_UNK_01904114 + 0x1903e1c));
      func_0x01438628(*(undefined4 *)(_UNK_01904118 + 0x1903e28));
      func_0x01438628(*(undefined4 *)(_UNK_0190411c + 0x1903e34));
      func_0x01438628(*(undefined4 *)(_UNK_01904120 + 0x1903e40));
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iVar1 = func_0x02953fd4(0x429,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01904124 + 0x1903ea4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01904128 + 0x1903ec0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x24);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_48,iVar1,**(undefined4 **)(_UNK_0190412c + 0x1903ef8));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      puVar9 = *(undefined4 **)(_UNK_01904130 + 0x1903f18);
      piVar8 = *(int **)(_UNK_01904134 + 0x1903f20);
      puVar10 = *(undefined4 **)(_UNK_01904138 + 0x1903f28);
      puVar11 = *(undefined4 **)(_UNK_0190413c + 0x1903f30);
      while (iVar4 = func_0x015109ec(&uStack_38,*puVar9), iVar1 = iStack_2c, iVar4 != 0) {
        if (*(int *)(**(int **)(_UNK_01904140 + 0x1903f4c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01904144 + 0x1903f6c));
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
      func_0x0152da2c(&uStack_38,**(undefined4 **)(_UNK_0190414c + 0x190403c));
      return;
    }
    iVar1 = func_0x029540a4(0x429,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x1903e94;
    unaff_r4 = iVar1;
    unaff_r5 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_48;
  }
  else {
    iVar1 = func_0x029540a4(0x428,0);
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

