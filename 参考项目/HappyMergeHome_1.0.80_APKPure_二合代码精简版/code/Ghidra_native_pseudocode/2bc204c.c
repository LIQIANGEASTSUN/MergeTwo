
/* WARNING: Possible PIC construction at 0x02bd21a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bd223c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd204c(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int iVar5;
  int unaff_r5;
  undefined4 uVar6;
  int unaff_r6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  int unaff_r7;
  int iVar10;
  undefined4 *unaff_r8;
  undefined4 *puVar11;
  undefined4 unaff_r9;
  int iVar12;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_02bd2328 + 0x2bd2064);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd232c + 0x2bd2078));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2330 + 0x2bd2084));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2334 + 0x2bd2090));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2338 + 0x2bd209c));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x747,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x747,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar4,0,0);
    return;
  }
  iVar2 = FUN_02baef1c(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_02baef1c(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 8) != 0) {
      iVar2 = FUN_02baef1c(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar11 = *(undefined4 **)(_UNK_02bd233c + 0x2bd215c);
      iVar2 = func_0x024f0f34(iVar2,param_2,*puVar11);
      if (iVar2 == 0) {
        iVar2 = FUN_02baef1c(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar2 + 8);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar3 = **(int **)(_UNK_02bd2340 + 0x2bd21a0);
        unaff_lr = 0x2bd21a8;
        iVar2 = param_2;
        unaff_r4 = param_1;
        unaff_r5 = param_2;
        unaff_r6 = iVar5;
        unaff_r8 = puVar11;
        register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
SUB_03b75ba0:
        *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
        *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
        *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
        *(undefined4 **)((int)register0x00000054 + -0x10) = unaff_r8;
        *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
        *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
        *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
        *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
        if (iVar5 == 0) {
          func_0x024f83d4();
        }
        iVar10 = *(int *)(iVar5 + 8);
        uVar9 = *(uint *)(iVar5 + 0xc);
        iVar12 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x20);
        *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
        if (iVar10 == 0) {
          func_0x024f83d4();
        }
        if (uVar9 < *(uint *)(iVar10 + 0xc)) {
          *(uint *)(iVar5 + 0xc) = uVar9 + 1;
          *(int *)(iVar10 + uVar9 * 4 + 0x10) = iVar2;
        }
        else {
          func_0x04cd29cc(iVar5,iVar2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
        }
        uVar6 = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x24);
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        pcVar7 = (char *)(_UNK_03b75b8c + 0x3b75a94);
        if (*pcVar7 == '\0') {
          func_0x024f83cc(*(undefined4 *)(_UNK_03b75b90 + 0x3b75aa8),uVar6);
          func_0x024f83cc(*(undefined4 *)(_UNK_03b75b94 + 0x3b75ab4));
          *pcVar7 = '\x01';
        }
        piVar8 = *(int **)(_UNK_03b75b98 + 0x3b75ac8);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x024f83d8();
        }
        puVar11 = *(undefined4 **)(_UNK_03b75b9c + 0x3b75ae4);
        iVar2 = func_0x04e4a028(*puVar11);
        if (iVar2 == 0) {
          func_0x024f83d4();
        }
        uVar9 = *(uint *)(iVar2 + 0x60);
        cVar1 = *(char *)(iVar5 + 0x18);
        *(uint *)(iVar2 + 0x60) = uVar9 + 1;
        *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar9);
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
        if (*(char *)(iVar5 + 0x19) != '\0') {
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
      if (param_2 - 0x186a1U < 4) {
        iVar2 = FUN_02baef1c(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar2 + 8);
        iVar2 = param_2 + 100;
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x024f0f34(iVar5,iVar2,*puVar11);
        if (iVar5 == 0) {
          iVar5 = FUN_02baef1c(param_1);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar5 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar3 = **(int **)(_UNK_02bd2344 + 0x2bd2238);
          unaff_lr = 0x2bd2240;
          unaff_r4 = param_1;
          unaff_r5 = param_2;
          unaff_r6 = iVar2;
          unaff_r7 = iVar5;
          unaff_r8 = puVar11;
          register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
          goto SUB_03b75ba0;
        }
      }
      if (*(int *)(**(int **)(_UNK_02bd2348 + 0x2bd224c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bd234c + 0x2bd2268));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x029a6fa8(iVar2,param_2,0);
      if (iVar2 != 0) {
        iVar5 = FUN_02baef1c(param_1);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar5 + 0xc);
        uVar6 = *(undefined4 *)(iVar2 + 0x30);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x024f0f34(iVar5,uVar6,*puVar11);
        if (iVar5 == 0) {
          iVar5 = FUN_02baef1c(param_1);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x30);
          iVar5 = *(int *)(iVar5 + 0xc);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar3 = **(int **)(_UNK_02bd2350 + 0x2bd231c);
          goto SUB_03b75ba0;
        }
      }
    }
  }
  return;
}

