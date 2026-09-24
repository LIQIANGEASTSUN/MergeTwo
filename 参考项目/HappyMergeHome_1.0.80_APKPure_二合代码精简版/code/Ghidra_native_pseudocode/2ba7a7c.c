
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bb7a7c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_02bb8038 + 0x2bb7a98);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb803c + 0x2bb7aac));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8040 + 0x2bb7ab8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8044 + 0x2bb7ac4));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8048 + 0x2bb7ad0));
    func_0x01438628(*(undefined4 *)(_UNK_02bb804c + 0x2bb7adc));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8050 + 0x2bb7ae8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8054 + 0x2bb7af4));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8058 + 0x2bb7b00));
    func_0x01438628(*(undefined4 *)(_UNK_02bb805c + 0x2bb7b0c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8060 + 0x2bb7b18));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8064 + 0x2bb7b24));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8068 + 0x2bb7b30));
    func_0x01438628(*(undefined4 *)(_UNK_02bb806c + 0x2bb7b3c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8070 + 0x2bb7b48));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8074 + 0x2bb7b54));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2547,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2547,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x046ccb14(iVar1,param_2,**(undefined4 **)(_UNK_02bb8078 + 0x2bb7bc8));
  if (iVar1 != 0) {
    iVar1 = FUN_02bad050(param_1,param_2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      return;
    }
  }
  iVar6 = **(int **)(_UNK_02bb807c + 0x2bb7c24);
  iVar1 = *(int *)(iVar6 + 0x1c);
  if (iVar1 == 0) {
    func_0x014909d8(iVar6);
    iVar1 = *(int *)(iVar6 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  uVar8 = **(undefined4 **)(iVar1 + 0x5c);
  if (*(int *)(**(int **)(_UNK_02bb8080 + 0x2bb7c84) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_02bb8080 + 0x2bb7c84));
  }
  iStack_30 = param_1;
  uStack_2c = param_2;
  func_0x026795f8(**(undefined4 **)(_UNK_02bb8084 + 0x2bb7cbc),uVar8,0);
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bb8088 + 0x2bb7ccc));
  FUN_026f689c(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
    FUN_026f5e8c(0,6,0);
    func_0x014388e4();
    FUN_026f5f48(0,0x24,0);
    func_0x014388e4();
    FUN_026f6014(0,0,0);
    func_0x014388e4();
  }
  else {
    FUN_026f5e8c(iVar1,6,0);
    FUN_026f5f48(iVar1,0x24,0);
    FUN_026f6014(iVar1,0,0);
  }
  iVar6 = *(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 8);
  if (0 < iVar6) {
    iStack_28 = iVar6 + -0x30;
    iVar10 = 0;
    piVar9 = *(int **)(_UNK_02bb808c + 0x2bb7d80);
    puVar11 = *(undefined4 **)(_UNK_02bb8090 + 0x2bb7d88);
    do {
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bb8094 + 0x2bb7da4));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar2 + 0x34);
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02bb8098 + 0x2bb7dc4));
      FUN_026f7e40(iVar2,0);
      if (((iVar7 == 0) || (iVar10 < iStack_28)) || (*(int *)(iVar7 + 0xc) <= iVar10)) {
        if (iVar2 == 0) {
          func_0x014388e4();
          FUN_026f6b3c(0,0xffffffff,0);
          func_0x014388e4();
        }
        else {
          FUN_026f6b3c(iVar2,0xffffffff,0);
        }
        FUN_026f6bf8(iVar2,10,0);
      }
      else {
        iVar3 = func_0x0152983c(iVar7,iVar10,*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar8 = *(undefined4 *)(iVar3 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        FUN_026f6b3c(iVar2,uVar8,0);
        iVar3 = func_0x0152983c(iVar7,iVar10,*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar8 = *(undefined4 *)(iVar3 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        FUN_026f6bf8(iVar2,uVar8,0);
        iVar3 = func_0x0152983c(iVar7,iVar10,*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar8 = *(undefined4 *)(iVar3 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        FUN_026f6cb4(iVar2,uVar8,0);
        iVar3 = func_0x0152983c(iVar7,iVar10,*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar3 + 0x18) != 0) {
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar2 + 0x90);
          iVar7 = func_0x0152983c(iVar7,iVar10,*puVar11);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          uVar8 = *(undefined4 *)(iVar7 + 0x18);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75c38(iVar3,uVar8,**(undefined4 **)(_UNK_02bb809c + 0x2bb7f3c));
        }
      }
      iVar7 = *(int *)(iVar1 + 0x10);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x03b77610(iVar7,iVar2,**(undefined4 **)(_UNK_02bb80a0 + 0x2bb7fb0));
      iVar10 = iVar10 + 1;
    } while (iVar6 - iVar10 != 0);
  }
  iVar6 = iStack_30;
  iVar10 = *(int *)(iStack_30 + 0x14);
  if (iVar10 == 0) {
    func_0x014388e4();
  }
  uVar8 = uStack_2c;
  func_0x03b72180(iVar10,uStack_2c,iVar1,**(undefined4 **)(_UNK_02bb80a4 + 0x2bb7fe8));
  iVar1 = *(int *)(iVar6 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03b72148(iVar1,uVar8,**(undefined4 **)(_UNK_02bb80a8 + 0x2bb8018));
  pcVar5 = (char *)(_UNK_02bb5950 + 0x2bb5838);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb5954 + 0x2bb584c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5958 + 0x2bb5858));
    *pcVar5 = '\x01';
  }
  iVar10 = func_0x02953fd4(0x2537,0);
  if (iVar10 == 0) {
    if (iVar1 != 0) {
      pcVar5 = *(char **)(iVar1 + 0x10);
    }
    if ((iVar1 != 0 && pcVar5 != (char *)0x0) && (-1 < *(int *)(pcVar5 + 0xc))) {
      iVar10 = 0;
      puVar11 = *(undefined4 **)(_UNK_02bb595c + 0x2bb58e8);
      while( true ) {
        if (pcVar5 == (char *)0x0) {
          func_0x014388e4();
        }
        if (*(int *)(pcVar5 + 0xc) <= iVar10) break;
        iVar2 = *(int *)(iVar1 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x03b780b0(iVar2,iVar10,*puVar11);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iStack_28 = 0;
        func_0x02bd0b60(iVar6,*(undefined4 *)(iVar2 + 8),iVar10,uVar8);
        pcVar5 = *(char **)(iVar1 + 0x10);
        iVar10 = iVar10 + 1;
      }
    }
  }
  else {
    iVar10 = func_0x029540a4(0x2537,0);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iStack_28 = 0;
    func_0x028924d8(iVar10,iVar6,iVar1,uVar8);
  }
  return;
}

