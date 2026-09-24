
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f23d18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_02f242d4 + 0x2f23d30);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f242d8 + 0x2f23d44));
    func_0x01438628(*(undefined4 *)(_UNK_02f242dc + 0x2f23d50));
    func_0x01438628(*(undefined4 *)(_UNK_02f242e0 + 0x2f23d5c));
    func_0x01438628(*(undefined4 *)(_UNK_02f242e4 + 0x2f23d68));
    func_0x01438628(*(undefined4 *)(_UNK_02f242e8 + 0x2f23d74));
    func_0x01438628(*(undefined4 *)(_UNK_02f242ec + 0x2f23d80));
    func_0x01438628(*(undefined4 *)(_UNK_02f242f0 + 0x2f23d8c));
    func_0x01438628(*(undefined4 *)(_UNK_02f242f4 + 0x2f23d98));
    func_0x01438628(*(undefined4 *)(_UNK_02f242f8 + 0x2f23da4));
    func_0x01438628(*(undefined4 *)(_UNK_02f242fc + 0x2f23db0));
    func_0x01438628(*(undefined4 *)(_UNK_02f24300 + 0x2f23dbc));
    func_0x01438628(*(undefined4 *)(_UNK_02f24304 + 0x2f23dc8));
    func_0x01438628(*(undefined4 *)(_UNK_02f24308 + 0x2f23dd4));
    func_0x01438628(*(undefined4 *)(_UNK_02f2430c + 0x2f23de0));
    func_0x01438628(*(undefined4 *)(_UNK_02f24310 + 0x2f23dec));
    func_0x01438628(*(undefined4 *)(_UNK_02f24314 + 0x2f23df8));
    func_0x01438628(*(undefined4 *)(_UNK_02f24318 + 0x2f23e04));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x1328,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f2431c + 0x2f23e68) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f24320 + 0x2f23e84));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02f24324 + 0x2f23ea4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1cc);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_02f24328 + 0x2f23eec));
    if (iVar3 == 0) {
      func_0x02f24364(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02f2432c + 0x2f23f14));
      FUN_026f22a8(iVar3,0);
      iVar4 = func_0x02f243cc(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x02f243cc(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x04cd366c(&uStack_48,iVar4,**(undefined4 **)(_UNK_02f24330 + 0x2f23f84));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar10 = *(undefined4 **)(_UNK_02f24334 + 0x2f23fa0);
        puVar12 = *(undefined4 **)(_UNK_02f24338 + 0x2f23fa8);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar10), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar8 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x02f24504(param_1,uVar2);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar8,uVar2,*puVar12);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_02f2433c + 0x2f24024));
      }
      uVar13 = func_0x029f3fe4(param_1,0);
      if ((int)uVar13 != 0) {
        uVar11 = *(undefined4 *)(param_1 + 0x18);
        uVar2 = *(undefined4 *)(param_1 + 0x1c);
        if (iVar3 == 0) {
          func_0x014388e4();
          FUN_026f1a28(0,extraout_r1_00,uVar11,uVar2,0);
          uVar11 = *(undefined4 *)(param_1 + 0x20);
          uVar9 = *(undefined4 *)(param_1 + 0x24);
          func_0x014388e4();
          uVar2 = extraout_r1_01;
        }
        else {
          FUN_026f1a28(iVar3,(int)((ulonglong)uVar13 >> 0x20),uVar11,uVar2,0);
          uVar11 = *(undefined4 *)(param_1 + 0x20);
          uVar9 = *(undefined4 *)(param_1 + 0x24);
          uVar2 = extraout_r1;
        }
        FUN_026f1af8(iVar3,uVar2,uVar11,uVar9,0);
      }
      if (*(int *)(**(int **)(_UNK_02f24348 + 0x2f240c0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f2434c + 0x2f240dc));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar8 = 0;
        puVar12 = *(undefined4 **)(_UNK_02f24350 + 0x2f24118);
        puVar10 = *(undefined4 **)(_UNK_02f24354 + 0x2f24120);
        do {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x48);
          iVar5 = func_0x04cfd760(iVar4,iVar8,*puVar12);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar5 + 8);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x04cd2d7c(iVar7,uVar2,*puVar10);
          if (iVar5 == 0) {
            iVar7 = *(int *)(iVar3 + 0x48);
            iVar5 = func_0x04cfd760(iVar4,iVar8,*puVar12);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            func_0x03b75ba0(iVar7,uVar2,**(undefined4 **)(_UNK_02f24358 + 0x2f241b8));
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(iVar4 + 0xc));
      }
      uVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_02f2435c + 0x2f24204));
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_02f24360 + 0x2f24238));
  }
  else {
    iVar1 = func_0x029540a4(0x1328,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a0c74(iVar1,param_1,0);
  }
  return;
}

