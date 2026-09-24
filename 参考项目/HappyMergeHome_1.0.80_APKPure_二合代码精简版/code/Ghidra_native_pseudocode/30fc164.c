
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0310c164(int param_1)

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
  
  pcVar5 = (char *)(_UNK_0310c85c + 0x310c17c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0310c860 + 0x310c190));
    func_0x01438628(*(undefined4 *)(_UNK_0310c864 + 0x310c19c));
    func_0x01438628(*(undefined4 *)(_UNK_0310c868 + 0x310c1a8));
    func_0x01438628(*(undefined4 *)(_UNK_0310c86c + 0x310c1b4));
    func_0x01438628(*(undefined4 *)(_UNK_0310c870 + 0x310c1c0));
    func_0x01438628(*(undefined4 *)(_UNK_0310c874 + 0x310c1cc));
    func_0x01438628(*(undefined4 *)(_UNK_0310c878 + 0x310c1d8));
    func_0x01438628(*(undefined4 *)(_UNK_0310c87c + 0x310c1e4));
    func_0x01438628(*(undefined4 *)(_UNK_0310c880 + 0x310c1f0));
    func_0x01438628(*(undefined4 *)(_UNK_0310c884 + 0x310c1fc));
    func_0x01438628(*(undefined4 *)(_UNK_0310c888 + 0x310c208));
    func_0x01438628(*(undefined4 *)(_UNK_0310c88c + 0x310c214));
    func_0x01438628(*(undefined4 *)(_UNK_0310c890 + 0x310c220));
    func_0x01438628(*(undefined4 *)(_UNK_0310c894 + 0x310c22c));
    func_0x01438628(*(undefined4 *)(_UNK_0310c898 + 0x310c238));
    func_0x01438628(*(undefined4 *)(_UNK_0310c89c + 0x310c244));
    func_0x01438628(*(undefined4 *)(_UNK_0310c8a0 + 0x310c250));
    func_0x01438628(*(undefined4 *)(_UNK_0310c8a4 + 0x310c25c));
    func_0x01438628(*(undefined4 *)(_UNK_0310c8a8 + 0x310c268));
    func_0x01438628(*(undefined4 *)(_UNK_0310c8ac + 0x310c274));
    func_0x01438628(*(undefined4 *)(_UNK_0310c8b0 + 0x310c280));
    func_0x01438628(*(undefined4 *)(_UNK_0310c8b4 + 0x310c28c));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xf11,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0310c8b8 + 0x310c2f0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0310c8bc + 0x310c30c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0310c8c0 + 0x310c32c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x360);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_0310c8c4 + 0x310c374));
    if (iVar3 == 0) {
      func_0x0310c910(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0310c8c8 + 0x310c398));
      FUN_026efebc(iVar3,0);
      if (*(int *)(**(int **)(_UNK_0310c8cc + 0x310c3b4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_0310c8d0 + 0x310c3d0));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_026efba8(iVar3,uVar2,0);
      iVar4 = func_0x0310c978(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x0310c978(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x04cd366c(&uStack_48,iVar4,**(undefined4 **)(_UNK_0310c8d4 + 0x310c474));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_0310c8d8 + 0x310c490);
        puVar9 = *(undefined4 **)(_UNK_0310c8dc + 0x310c498);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x0310cab0(param_1,uVar2);
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
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_0310c8e0 + 0x310c514));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar4,**(undefined4 **)(_UNK_0310c8e8 + 0x310c554));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_0310c8ec + 0x310c56c);
      puVar9 = *(undefined4 **)(_UNK_0310c8f0 + 0x310c574);
      while( true ) {
        iVar7 = func_0x0310c978(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x0310c978(param_1);
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
        FUN_026ef4b0(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                     *(undefined4 *)(param_1 + 0x1c),0);
        FUN_026ef580(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                     *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_0310c8f8 + 0x310c654) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0310c8fc + 0x310c670));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_0310c900 + 0x310c6ac);
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
          iVar10 = func_0x04cd2d7c(iVar8,uVar2,**(undefined4 **)(_UNK_0310c904 + 0x310c6ec));
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
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_0310c908 + 0x310c784));
      func_0x0310cb6c(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_0310c90c + 0x310c7c0));
  }
  else {
    iVar1 = func_0x029540a4(0xf11,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0289639c(iVar1,param_1,0);
  }
  return;
}

