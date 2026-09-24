
/* WARNING: Possible PIC construction at 0x03b710c4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0180eeb8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int unaff_r4;
  char *pcVar6;
  int iVar7;
  int unaff_r5;
  int *piVar8;
  int iVar9;
  undefined4 unaff_r6;
  undefined4 uVar10;
  int unaff_r7;
  undefined4 *puVar11;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_0180f504 + 0x180eed4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0180f508 + 0x180eee8));
    func_0x01438628(*(undefined4 *)(_UNK_0180f50c + 0x180eef4));
    func_0x01438628(*(undefined4 *)(_UNK_0180f510 + 0x180ef00));
    func_0x01438628(*(undefined4 *)(_UNK_0180f514 + 0x180ef0c));
    func_0x01438628(*(undefined4 *)(_UNK_0180f518 + 0x180ef18));
    func_0x01438628(*(undefined4 *)(_UNK_0180f51c + 0x180ef24));
    func_0x01438628(*(undefined4 *)(_UNK_0180f520 + 0x180ef30));
    func_0x01438628(*(undefined4 *)(_UNK_0180f524 + 0x180ef3c));
    func_0x01438628(*(undefined4 *)(_UNK_0180f528 + 0x180ef48));
    func_0x01438628(*(undefined4 *)(_UNK_0180f52c + 0x180ef54));
    func_0x01438628(*(undefined4 *)(_UNK_0180f530 + 0x180ef60));
    func_0x01438628(*(undefined4 *)(_UNK_0180f534 + 0x180ef6c));
    func_0x01438628(*(undefined4 *)(_UNK_0180f538 + 0x180ef78));
    func_0x01438628(*(undefined4 *)(_UNK_0180f53c + 0x180ef84));
    func_0x01438628(*(undefined4 *)(_UNK_0180f540 + 0x180ef90));
    func_0x01438628(*(undefined4 *)(_UNK_0180f544 + 0x180ef9c));
    func_0x01438628(*(undefined4 *)(_UNK_0180f548 + 0x180efa8));
    func_0x01438628(*(undefined4 *)(_UNK_0180f54c + 0x180efb4));
    func_0x01438628(*(undefined4 *)(_UNK_0180f550 + 0x180efc0));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2949,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x2949,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar9,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  uVar10 = *(undefined4 *)(param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  iStack_2c = param_2;
  if (*(int *)(**(int **)(_UNK_0180f554 + 0x180f028) + 0x74) == 0) {
    func_0x014387a4();
  }
  iStack_28 = func_0x02af43a8(uVar10,uVar5,0);
  iVar2 = 0;
  while( true ) {
    iVar9 = iStack_28;
    if (iStack_28 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar9 + 0xc) <= iVar2) break;
    iVar9 = func_0x0152983c(iVar9,iVar2,**(undefined4 **)(_UNK_0180f558 + 0x180f090));
    iVar7 = **(int **)(**(int **)(_UNK_0180f55c + 0x180f0ac) + 0x5c);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar10 = *(undefined4 *)(iVar9 + 8);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x02e651cc(iVar7,uVar10,0);
    if (iVar7 == 0) {
      if (*(int *)(**(int **)(_UNK_0180f560 + 0x180f0f0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x0202346c(0);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0180f564 + 0x180f118));
      func_0x02025440(iVar3,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar3 + 8) = 0x46;
      uVar10 = *(undefined4 *)(iVar9 + 8);
      *(undefined1 *)(iVar3 + 0x25) = 1;
      *(undefined4 *)(iVar3 + 0xc) = uVar10;
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x02024d08(iVar7,iVar3,1,0);
      iVar7 = FUN_0180db9c(param_1,*(undefined4 *)(iVar9 + 8));
      if (iVar7 == 0) goto LAB_0180f238;
      if (0 < *(int *)(iVar9 + 0xc)) {
        iVar7 = 0;
        do {
          iVar3 = FUN_018013d8(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uVar10 = *(undefined4 *)(iVar9 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar10,**(undefined4 **)(_UNK_0180f568 + 0x180f1cc));
          iVar3 = **(int **)(_UNK_0180f56c + 0x180f1e0);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_01800148();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x0181793c(iVar3,0);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar9 + 0xc));
      }
    }
    else {
LAB_0180f238:
      uVar10 = *(undefined4 *)(iVar9 + 8);
      uVar5 = *(undefined4 *)(iVar9 + 0xc);
      iVar9 = **(int **)(**(int **)(_UNK_0180f570 + 0x180f244) + 0x5c);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iStack_40 = 1;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      func_0x02e64460(iVar9,uVar10,uVar5);
    }
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(**(int **)(_UNK_0180f574 + 0x180f2bc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0180f578 + 0x180f2d8));
  piVar8 = *(int **)(_UNK_0180f57c + 0x180f2ec);
  iVar7 = *piVar8;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
    iVar7 = *piVar8;
  }
  uVar10 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x1ac);
  piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0180f580 + 0x180f310),1);
  if (piVar8 == (int *)0x0) {
    func_0x014388e4();
  }
  iVar7 = func_0x014387a8(iVar9,*(undefined4 *)(*piVar8 + 0x20));
  if (iVar7 == 0) {
    uVar5 = func_0x01438904();
    func_0x01438790(uVar5,0);
  }
  if (piVar8[3] == 0) {
    func_0x014388e8();
  }
  piVar8[4] = iVar9;
  func_0x014385cc(piVar8 + 4,iVar9);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar2,uVar10,piVar8,0);
  if (*(int *)(**(int **)(_UNK_0180f584 + 0x180f39c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e96a8(**(undefined4 **)(_UNK_0180f588 + 0x180f3b8));
  if (*(int *)(**(int **)(_UNK_0180f58c + 0x180f3cc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_0180f590 + 0x180f3e8));
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  piVar8 = *(int **)(_UNK_0180f594 + 0x180f408);
  uVar10 = *(undefined4 *)(iVar7 + 0x10);
  iVar7 = *piVar8;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
    iVar7 = *piVar8;
  }
  iVar3 = *(int *)(*(int *)(iVar7 + 0x5c) + 8);
  if (iVar3 == 0) {
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar8;
    }
    uVar5 = **(undefined4 **)(iVar7 + 0x5c);
    iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0180f598 + 0x180f454));
    func_0x0152e3ec(iVar3,uVar5,**(undefined4 **)(_UNK_0180f59c + 0x180f474),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 8);
    *piVar8 = iVar3;
    func_0x014385cc(piVar8,iVar3);
  }
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  iStack_40 = iVar3;
  func_0x02b75870(iVar2,iVar9,uVar10,0,0x69,0,0,0);
  uVar10 = *(undefined4 *)(iStack_2c + 8);
  pcVar6 = (char *)(_UNK_01810a8c + 0x18108e8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01810a90 + 0x18108fc));
    func_0x01438628(*(undefined4 *)(_UNK_01810a94 + 0x1810908));
    func_0x01438628(*(undefined4 *)(_UNK_01810a98 + 0x1810914));
    func_0x01438628(*(undefined4 *)(_UNK_01810a9c + 0x1810920));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x295a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x295a,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,uVar10,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,uVar10,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar9,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  iVar2 = FUN_018013d8(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x70);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x18);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x024f0540(iVar2,uVar10,**(undefined4 **)(_UNK_01810aa0 + 0x18109b8));
  iVar9 = FUN_018013d8(param_1);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar9 + 0x70);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar9 + 0x18);
  if (iVar9 == 0) {
    func_0x014388e4();
    if (iVar2 == 0) goto LAB_01810a6c;
    iVar2 = func_0x024f05d4(0,uVar10,**(undefined4 **)(_UNK_01810aa4 + 0x1810a3c));
    func_0x014388e4();
  }
  else {
    if (iVar2 == 0) {
LAB_01810a6c:
      iVar2 = **(int **)(_UNK_01810ab0 + 0x1810a80);
      if (iVar9 == 0) {
        func_0x024f83d4();
      }
      func_0x046c24b0(iVar9,uVar10,1,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x24)
                     );
      uVar5 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x28);
      goto SUB_03b70bb0;
    }
    iVar2 = func_0x024f05d4(iVar9,uVar10,**(undefined4 **)(_UNK_01810aa8 + 0x1810a10));
  }
  unaff_r7 = iVar2 + 1;
  unaff_r5 = **(int **)(_UNK_01810aac + 0x1810a60);
  if (iVar9 == 0) {
    func_0x024f83d4();
  }
  iVar2 = func_0x046c26fc(iVar9,uVar10,
                          *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x38));
  if (iVar2 != 0) {
    if (iVar9 == 0) {
      func_0x024f83d4();
    }
    func_0x046c23f8(iVar9,uVar10,*(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x34))
    ;
    uVar5 = func_0x024f83c4(*(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x20),
                            &stack0xffffffe0);
    iVar2 = func_0x0515c410(&stack0xffffffe4,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x3c));
    if (iVar2 != 0) {
      return;
    }
  }
  if (iVar9 == 0) {
    func_0x024f83d4();
  }
  func_0x046c2488(iVar9,uVar10,unaff_r7,
                  *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x40));
  uVar5 = *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x28);
  unaff_lr = 0x3b710c8;
  unaff_r4 = iVar9;
  unaff_r6 = uVar10;
  register0x00000054 = (BADSPACEBASE *)&stack0xffffffe0;
SUB_03b70bb0:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  pcVar6 = (char *)(_UNK_03b70cbc + 0x3b70bc4);
  if (*pcVar6 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b70cc0 + 0x3b70bd8),uVar5);
    func_0x024f83cc(*(undefined4 *)(_UNK_03b70cc4 + 0x3b70be4));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_03b70cc8 + 0x3b70bf8);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x024f83d8();
  }
  puVar11 = *(undefined4 **)(_UNK_03b70ccc + 0x3b70c14);
  iVar2 = func_0x04e4a028(*puVar11);
  if (iVar2 == 0) {
    func_0x024f83d4();
  }
  uVar4 = *(uint *)(iVar2 + 0x60);
  cVar1 = *(char *)(iVar9 + 0x30);
  *(uint *)(iVar2 + 0x60) = uVar4 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar4);
  if (cVar1 != '\0') {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar2 = func_0x04e4a028(*puVar11);
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  if (*(char *)(iVar9 + 0x31) != '\0') {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar2 = func_0x04e4a028(*puVar11);
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar2 + 0x39) = 1;
  }
  return;
}

