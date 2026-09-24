
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0317e7f4(int param_1)

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
  
  pcVar5 = (char *)(_UNK_0317eeec + 0x317e80c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0317eef0 + 0x317e820));
    func_0x01438628(*(undefined4 *)(_UNK_0317eef4 + 0x317e82c));
    func_0x01438628(*(undefined4 *)(_UNK_0317eef8 + 0x317e838));
    func_0x01438628(*(undefined4 *)(_UNK_0317eefc + 0x317e844));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef00 + 0x317e850));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef04 + 0x317e85c));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef08 + 0x317e868));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef0c + 0x317e874));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef10 + 0x317e880));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef14 + 0x317e88c));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef18 + 0x317e898));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef1c + 0x317e8a4));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef20 + 0x317e8b0));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef24 + 0x317e8bc));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef28 + 0x317e8c8));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef2c + 0x317e8d4));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef30 + 0x317e8e0));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef34 + 0x317e8ec));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef38 + 0x317e8f8));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef3c + 0x317e904));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef40 + 0x317e910));
    func_0x01438628(*(undefined4 *)(_UNK_0317ef44 + 0x317e91c));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x1349,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0317ef48 + 0x317e980) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0317ef4c + 0x317e99c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0317ef50 + 0x317e9bc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x208);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_0317ef54 + 0x317ea04));
    if (iVar3 == 0) {
      func_0x0317efa0(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0317ef58 + 0x317ea28));
      func_0x026f22a8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_0317ef5c + 0x317ea44) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_0317ef60 + 0x317ea60));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026f2120(iVar3,uVar2,0);
      iVar4 = func_0x0317f008(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x0317f008(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x04cd366c(&uStack_48,iVar4,**(undefined4 **)(_UNK_0317ef64 + 0x317eb04));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_0317ef68 + 0x317eb20);
        puVar9 = *(undefined4 **)(_UNK_0317ef6c + 0x317eb28);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x0317f140(param_1,uVar2);
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
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_0317ef70 + 0x317eba4));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar4,**(undefined4 **)(_UNK_0317ef78 + 0x317ebe4));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_0317ef7c + 0x317ebfc);
      puVar9 = *(undefined4 **)(_UNK_0317ef80 + 0x317ec04);
      while( true ) {
        iVar7 = func_0x0317f008(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x0317f008(param_1);
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
        func_0x026f1a28(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c),0);
        func_0x026f1af8(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_0317ef88 + 0x317ece4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0317ef8c + 0x317ed00));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_0317ef90 + 0x317ed3c);
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
          iVar10 = func_0x04cd2d7c(iVar8,uVar2,**(undefined4 **)(_UNK_0317ef94 + 0x317ed7c));
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
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_0317ef98 + 0x317ee14));
      func_0x0317f1fc(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_0317ef9c + 0x317ee50));
  }
  else {
    iVar1 = func_0x029540a4(0x1349,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a0c74(iVar1,param_1,0);
  }
  return;
}

