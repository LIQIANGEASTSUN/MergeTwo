
/* WARNING: Possible PIC construction at 0x03b710c4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0196e1d8(int param_1,int param_2)

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
  
  pcVar6 = (char *)(_UNK_0196e824 + 0x196e1f4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0196e828 + 0x196e208));
    func_0x01438628(*(undefined4 *)(_UNK_0196e82c + 0x196e214));
    func_0x01438628(*(undefined4 *)(_UNK_0196e830 + 0x196e220));
    func_0x01438628(*(undefined4 *)(_UNK_0196e834 + 0x196e22c));
    func_0x01438628(*(undefined4 *)(_UNK_0196e838 + 0x196e238));
    func_0x01438628(*(undefined4 *)(_UNK_0196e83c + 0x196e244));
    func_0x01438628(*(undefined4 *)(_UNK_0196e840 + 0x196e250));
    func_0x01438628(*(undefined4 *)(_UNK_0196e844 + 0x196e25c));
    func_0x01438628(*(undefined4 *)(_UNK_0196e848 + 0x196e268));
    func_0x01438628(*(undefined4 *)(_UNK_0196e84c + 0x196e274));
    func_0x01438628(*(undefined4 *)(_UNK_0196e850 + 0x196e280));
    func_0x01438628(*(undefined4 *)(_UNK_0196e854 + 0x196e28c));
    func_0x01438628(*(undefined4 *)(_UNK_0196e858 + 0x196e298));
    func_0x01438628(*(undefined4 *)(_UNK_0196e85c + 0x196e2a4));
    func_0x01438628(*(undefined4 *)(_UNK_0196e860 + 0x196e2b0));
    func_0x01438628(*(undefined4 *)(_UNK_0196e864 + 0x196e2bc));
    func_0x01438628(*(undefined4 *)(_UNK_0196e868 + 0x196e2c8));
    func_0x01438628(*(undefined4 *)(_UNK_0196e86c + 0x196e2d4));
    func_0x01438628(*(undefined4 *)(_UNK_0196e870 + 0x196e2e0));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2c66,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x2c66,0);
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
  if (*(int *)(**(int **)(_UNK_0196e874 + 0x196e348) + 0x74) == 0) {
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
    iVar9 = func_0x0152983c(iVar9,iVar2,**(undefined4 **)(_UNK_0196e878 + 0x196e3b0));
    iVar7 = **(int **)(**(int **)(_UNK_0196e87c + 0x196e3cc) + 0x5c);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar10 = *(undefined4 *)(iVar9 + 8);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x02e651cc(iVar7,uVar10,0);
    if (iVar7 == 0) {
      if (*(int *)(**(int **)(_UNK_0196e880 + 0x196e410) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x0202346c(0);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0196e884 + 0x196e438));
      func_0x02025440(iVar3,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar3 + 8) = 0x82;
      uVar10 = *(undefined4 *)(iVar9 + 8);
      *(undefined1 *)(iVar3 + 0x25) = 1;
      *(undefined4 *)(iVar3 + 0xc) = uVar10;
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x02024d08(iVar7,iVar3,1,0);
      iVar7 = FUN_0196db70(param_1,*(undefined4 *)(iVar9 + 8));
      if (iVar7 == 0) goto LAB_0196e558;
      if (0 < *(int *)(iVar9 + 0xc)) {
        iVar7 = 0;
        do {
          iVar3 = FUN_019600b0(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uVar10 = *(undefined4 *)(iVar9 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar10,**(undefined4 **)(_UNK_0196e888 + 0x196e4ec));
          iVar3 = **(int **)(_UNK_0196e88c + 0x196e500);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0195dd1c();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01977628(iVar3,0);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar9 + 0xc));
      }
    }
    else {
LAB_0196e558:
      uVar10 = *(undefined4 *)(iVar9 + 8);
      uVar5 = *(undefined4 *)(iVar9 + 0xc);
      iVar9 = **(int **)(**(int **)(_UNK_0196e890 + 0x196e564) + 0x5c);
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
  if (*(int *)(**(int **)(_UNK_0196e894 + 0x196e5dc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0196e898 + 0x196e5f8));
  piVar8 = *(int **)(_UNK_0196e89c + 0x196e60c);
  iVar7 = *piVar8;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
    iVar7 = *piVar8;
  }
  uVar10 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x1ac);
  piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0196e8a0 + 0x196e630),1);
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
  if (*(int *)(**(int **)(_UNK_0196e8a4 + 0x196e6bc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e96a8(**(undefined4 **)(_UNK_0196e8a8 + 0x196e6d8));
  if (*(int *)(**(int **)(_UNK_0196e8ac + 0x196e6ec) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_0196e8b0 + 0x196e708));
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  piVar8 = *(int **)(_UNK_0196e8b4 + 0x196e728);
  uVar10 = *(undefined4 *)(iVar7 + 0x10);
  iVar7 = *piVar8;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
    iVar7 = *piVar8;
  }
  iVar3 = *(int *)(*(int *)(iVar7 + 0x5c) + 4);
  if (iVar3 == 0) {
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar8;
    }
    uVar5 = **(undefined4 **)(iVar7 + 0x5c);
    iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0196e8b8 + 0x196e774));
    func_0x0152e3ec(iVar3,uVar5,**(undefined4 **)(_UNK_0196e8bc + 0x196e794),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
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
  func_0x02b75870(iVar2,iVar9,uVar10,0,0x118,0,0,0);
  uVar10 = *(undefined4 *)(iStack_2c + 8);
  pcVar6 = (char *)(_UNK_0196e094 + 0x196def0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0196e098 + 0x196df04));
    func_0x01438628(*(undefined4 *)(_UNK_0196e09c + 0x196df10));
    func_0x01438628(*(undefined4 *)(_UNK_0196e0a0 + 0x196df1c));
    func_0x01438628(*(undefined4 *)(_UNK_0196e0a4 + 0x196df28));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2c77,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x2c77,0);
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
  iVar2 = FUN_019600b0(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x78);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x18);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x024f0540(iVar2,uVar10,**(undefined4 **)(_UNK_0196e0a8 + 0x196dfc0));
  iVar9 = FUN_019600b0(param_1);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar9 + 0x78);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar9 + 0x18);
  if (iVar9 == 0) {
    func_0x014388e4();
    if (iVar2 == 0) goto LAB_0196e074;
    iVar2 = func_0x024f05d4(0,uVar10,**(undefined4 **)(_UNK_0196e0ac + 0x196e044));
    func_0x014388e4();
  }
  else {
    if (iVar2 == 0) {
LAB_0196e074:
      iVar2 = **(int **)(_UNK_0196e0b8 + 0x196e088);
      if (iVar9 == 0) {
        func_0x024f83d4();
      }
      func_0x046c24b0(iVar9,uVar10,1,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x24)
                     );
      uVar5 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x28);
      goto SUB_03b70bb0;
    }
    iVar2 = func_0x024f05d4(iVar9,uVar10,**(undefined4 **)(_UNK_0196e0b0 + 0x196e018));
  }
  unaff_r7 = iVar2 + 1;
  unaff_r5 = **(int **)(_UNK_0196e0b4 + 0x196e068);
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

