
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bb5960(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02bb5d64 + 0x2bb597c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb5d68 + 0x2bb5990));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5d6c + 0x2bb599c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5d70 + 0x2bb59a8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5d74 + 0x2bb59b4));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5d78 + 0x2bb59c0));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5d7c + 0x2bb59cc));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5d80 + 0x2bb59d8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5d84 + 0x2bb59e4));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5d88 + 0x2bb59f0));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5d8c + 0x2bb59fc));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5d90 + 0x2bb5a08));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4f78,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4f78,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x046ccb14(iVar1,param_2,**(undefined4 **)(_UNK_02bb5d94 + 0x2bb5a7c));
  if (iVar1 != 0) {
    iVar1 = FUN_02bad050(param_1,param_2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      iVar6 = **(int **)(_UNK_02bb5d98 + 0x2bb5ad0);
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
      uVar7 = **(undefined4 **)(iVar1 + 0x5c);
      if (*(int *)(**(int **)(_UNK_02bb5d9c + 0x2bb5b30) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02bb5d9c + 0x2bb5b30));
      }
      iVar6 = 0;
      func_0x026795f8(**(undefined4 **)(_UNK_02bb5da0 + 0x2bb5b64),uVar7,0);
      iVar1 = *(int *)(param_1 + 0x14);
      iStack_2c = param_1;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_28 = param_2;
      iVar1 = func_0x03b72148(iVar1,param_2,**(undefined4 **)(_UNK_02bb5da4 + 0x2bb5b8c));
      puVar10 = *(undefined4 **)(_UNK_02bb5da8 + 0x2bb5ba8);
      piVar8 = *(int **)(_UNK_02bb5dac + 0x2bb5bb0);
      puVar9 = *(undefined4 **)(_UNK_02bb5db0 + 0x2bb5bb8);
      while( true ) {
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar5 = iStack_2c;
        if (*(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 8) <= iVar6) break;
        iVar5 = *(int *)(iVar1 + 0x10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x03b780b0(iVar5,iVar6,*puVar10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        FUN_026f6b3c(iVar5,0xffffffff,0);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(*puVar9);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x20);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (iVar6 < *(int *)(iVar2 + 0xc)) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(*puVar9);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x20);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x0152983c(iVar2,iVar6,**(undefined4 **)(_UNK_02bb5db4 + 0x2bb5ca4));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar7 = *(undefined4 *)(iVar2 + 0xc);
          if (iVar5 == 0) {
            func_0x014388e4();
            FUN_026f6b3c(0,uVar7,0);
            uVar7 = *(undefined4 *)(iVar2 + 0x10);
            func_0x014388e4();
          }
          else {
            FUN_026f6b3c(iVar5,uVar7,0);
            uVar7 = *(undefined4 *)(iVar2 + 0x10);
          }
          FUN_026f6bf8(iVar5,uVar7,0);
        }
        iVar6 = iVar6 + 1;
      }
      iVar1 = *(int *)(iStack_2c + 0x14);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = uStack_28;
      iVar1 = func_0x03b72148(iVar1,uStack_28,**(undefined4 **)(_UNK_02bb5db8 + 0x2bb5d3c));
      pcVar4 = (char *)(_UNK_02bb5950 + 0x2bb5838);
      if (*pcVar4 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02bb5954 + 0x2bb584c));
        func_0x01438628(*(undefined4 *)(_UNK_02bb5958 + 0x2bb5858));
        *pcVar4 = '\x01';
      }
      iVar6 = func_0x02953fd4(0x2537,0);
      if (iVar6 == 0) {
        if (iVar1 != 0) {
          pcVar4 = *(char **)(iVar1 + 0x10);
        }
        if ((iVar1 != 0 && pcVar4 != (char *)0x0) && (-1 < *(int *)(pcVar4 + 0xc))) {
          iVar6 = 0;
          puVar9 = *(undefined4 **)(_UNK_02bb595c + 0x2bb58e8);
          while( true ) {
            if (pcVar4 == (char *)0x0) {
              func_0x014388e4();
            }
            if (*(int *)(pcVar4 + 0xc) <= iVar6) break;
            iVar2 = *(int *)(iVar1 + 0x10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x03b780b0(iVar2,iVar6,*puVar9);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uStack_28 = 0;
            func_0x02bd0b60(iVar5,*(undefined4 *)(iVar2 + 8),iVar6,uVar7);
            pcVar4 = *(char **)(iVar1 + 0x10);
            iVar6 = iVar6 + 1;
          }
        }
      }
      else {
        iVar6 = func_0x029540a4(0x2537,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uStack_28 = 0;
        func_0x028924d8(iVar6,iVar5,iVar1,uVar7);
      }
      return;
    }
  }
  return;
}

