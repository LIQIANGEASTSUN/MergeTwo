
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f44c50(int param_1)

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
  
  pcVar5 = (char *)(_UNK_02f45348 + 0x2f44c68);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f4534c + 0x2f44c7c));
    func_0x01438628(*(undefined4 *)(_UNK_02f45350 + 0x2f44c88));
    func_0x01438628(*(undefined4 *)(_UNK_02f45354 + 0x2f44c94));
    func_0x01438628(*(undefined4 *)(_UNK_02f45358 + 0x2f44ca0));
    func_0x01438628(*(undefined4 *)(_UNK_02f4535c + 0x2f44cac));
    func_0x01438628(*(undefined4 *)(_UNK_02f45360 + 0x2f44cb8));
    func_0x01438628(*(undefined4 *)(_UNK_02f45364 + 0x2f44cc4));
    func_0x01438628(*(undefined4 *)(_UNK_02f45368 + 0x2f44cd0));
    func_0x01438628(*(undefined4 *)(_UNK_02f4536c + 0x2f44cdc));
    func_0x01438628(*(undefined4 *)(_UNK_02f45370 + 0x2f44ce8));
    func_0x01438628(*(undefined4 *)(_UNK_02f45374 + 0x2f44cf4));
    func_0x01438628(*(undefined4 *)(_UNK_02f45378 + 0x2f44d00));
    func_0x01438628(*(undefined4 *)(_UNK_02f4537c + 0x2f44d0c));
    func_0x01438628(*(undefined4 *)(_UNK_02f45380 + 0x2f44d18));
    func_0x01438628(*(undefined4 *)(_UNK_02f45384 + 0x2f44d24));
    func_0x01438628(*(undefined4 *)(_UNK_02f45388 + 0x2f44d30));
    func_0x01438628(*(undefined4 *)(_UNK_02f4538c + 0x2f44d3c));
    func_0x01438628(*(undefined4 *)(_UNK_02f45390 + 0x2f44d48));
    func_0x01438628(*(undefined4 *)(_UNK_02f45394 + 0x2f44d54));
    func_0x01438628(*(undefined4 *)(_UNK_02f45398 + 0x2f44d60));
    func_0x01438628(*(undefined4 *)(_UNK_02f4539c + 0x2f44d6c));
    func_0x01438628(*(undefined4 *)(_UNK_02f453a0 + 0x2f44d78));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x14b3,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f453a4 + 0x2f44ddc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f453a8 + 0x2f44df8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02f453ac + 0x2f44e18));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x37c);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_02f453b0 + 0x2f44e60));
    if (iVar3 == 0) {
      func_0x02f453fc(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02f453b4 + 0x2f44e84));
      FUN_026cf7f8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_02f453b8 + 0x2f44ea0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_02f453bc + 0x2f44ebc));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_026cf428(iVar3,uVar2,0);
      iVar4 = func_0x02f45464(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x02f45464(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x04cd366c(&uStack_48,iVar4,**(undefined4 **)(_UNK_02f453c0 + 0x2f44f60));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_02f453c4 + 0x2f44f7c);
        puVar9 = *(undefined4 **)(_UNK_02f453c8 + 0x2f44f84);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x02f4559c(param_1,uVar2);
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
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_02f453cc + 0x2f45000));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar4,**(undefined4 **)(_UNK_02f453d4 + 0x2f45040));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_02f453d8 + 0x2f45058);
      puVar9 = *(undefined4 **)(_UNK_02f453dc + 0x2f45060);
      while( true ) {
        iVar7 = func_0x02f45464(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x02f45464(param_1);
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
      if (*(int *)(**(int **)(_UNK_02f453e4 + 0x2f45140) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f453e8 + 0x2f4515c));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_02f453ec + 0x2f45198);
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
          iVar10 = func_0x04cd2d7c(iVar8,uVar2,**(undefined4 **)(_UNK_02f453f0 + 0x2f451d8));
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
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_02f453f4 + 0x2f45270));
      func_0x02f45658(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_02f453f8 + 0x2f452ac));
  }
  else {
    iVar1 = func_0x029540a4(0x14b3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a3ec4(iVar1,param_1,0);
  }
  return;
}

