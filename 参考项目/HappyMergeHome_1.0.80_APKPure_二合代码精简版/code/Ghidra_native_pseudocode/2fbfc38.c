
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fcfc38(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_02fd0330 + 0x2fcfc50);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd0334 + 0x2fcfc64));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0338 + 0x2fcfc70));
    func_0x01438628(*(undefined4 *)(_UNK_02fd033c + 0x2fcfc7c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0340 + 0x2fcfc88));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0344 + 0x2fcfc94));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0348 + 0x2fcfca0));
    func_0x01438628(*(undefined4 *)(_UNK_02fd034c + 0x2fcfcac));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0350 + 0x2fcfcb8));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0354 + 0x2fcfcc4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0358 + 0x2fcfcd0));
    func_0x01438628(*(undefined4 *)(_UNK_02fd035c + 0x2fcfcdc));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0360 + 0x2fcfce8));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0364 + 0x2fcfcf4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0368 + 0x2fcfd00));
    func_0x01438628(*(undefined4 *)(_UNK_02fd036c + 0x2fcfd0c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0370 + 0x2fcfd18));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0374 + 0x2fcfd24));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0378 + 0x2fcfd30));
    func_0x01438628(*(undefined4 *)(_UNK_02fd037c + 0x2fcfd3c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0380 + 0x2fcfd48));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0384 + 0x2fcfd54));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0388 + 0x2fcfd60));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x1567,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02fd038c + 0x2fcfdc4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd0390 + 0x2fcfde0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02fd0394 + 0x2fcfe00));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x38c);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_02fd0398 + 0x2fcfe48));
    if (iVar3 == 0) {
      func_0x02fd03e4(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02fd039c + 0x2fcfe6c));
      FUN_026cf7f8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_02fd03a0 + 0x2fcfe88) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_02fd03a4 + 0x2fcfea4));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_026cf428(iVar3,uVar2,0);
      iVar4 = func_0x02fd044c(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x02fd044c(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x04cd366c(&uStack_48,iVar4,**(undefined4 **)(_UNK_02fd03a8 + 0x2fcff48));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_02fd03ac + 0x2fcff64);
        puVar9 = *(undefined4 **)(_UNK_02fd03b0 + 0x2fcff6c);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x02fd0584(param_1,uVar2);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar7,uVar2,*puVar9);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_02fd03b4 + 0x2fcffe8));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar4,**(undefined4 **)(_UNK_02fd03bc + 0x2fd0028));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_02fd03c0 + 0x2fd0040);
      puVar9 = *(undefined4 **)(_UNK_02fd03c4 + 0x2fd0048);
      while( true ) {
        iVar7 = func_0x02fd044c(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x02fd044c(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cd26d0(iVar7,iVar4,*puVar6);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        func_0x03b75ba0(iVar10,uVar2,*puVar9);
        iVar4 = iVar4 + 1;
      }
      uVar11 = func_0x029f3fe4(param_1,0);
      if ((int)uVar11 != 0) {
        FUN_026ced30(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                     *(undefined4 *)(param_1 + 0x1c),0);
        FUN_026cee00(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                     *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_02fd03cc + 0x2fd0128) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd03d0 + 0x2fd0144));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_02fd03d4 + 0x2fd0180);
        do {
          iVar8 = *(int *)(iVar3 + 0x48);
          iVar10 = func_0x04cfd760(iVar4,iVar7,*puVar6);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar10 + 8);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x04cd2d7c(iVar8,uVar2,**(undefined4 **)(_UNK_02fd03d8 + 0x2fd01c0));
          if (iVar10 == 0) {
            iVar8 = *(int *)(iVar3 + 0x48);
            iVar10 = func_0x04cfd760(iVar4,iVar7,*puVar6);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar10 + 8);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            func_0x03b75ba0(iVar8,uVar2,*puVar9);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar4 + 0xc));
      }
      uVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_02fd03dc + 0x2fd0258));
      func_0x02fd0640(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_02fd03e0 + 0x2fd0294));
  }
  else {
    iVar1 = func_0x029540a4(0x1567,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a3ec4(iVar1,param_1,0);
  }
  return;
}

