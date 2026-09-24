
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b6bb8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_032b6e98 + 0x32b6bd0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b6e9c + 0x32b6be4));
    func_0x01438628(*(undefined4 *)(_UNK_032b6ea0 + 0x32b6bf0));
    func_0x01438628(*(undefined4 *)(_UNK_032b6ea4 + 0x32b6bfc));
    func_0x01438628(*(undefined4 *)(_UNK_032b6ea8 + 0x32b6c08));
    func_0x01438628(*(undefined4 *)(_UNK_032b6eac + 0x32b6c14));
    func_0x01438628(*(undefined4 *)(_UNK_032b6eb0 + 0x32b6c20));
    func_0x01438628(*(undefined4 *)(_UNK_032b6eb4 + 0x32b6c2c));
    func_0x01438628(*(undefined4 *)(_UNK_032b6eb8 + 0x32b6c38));
    func_0x01438628(*(undefined4 *)(_UNK_032b6ebc + 0x32b6c44));
    *pcVar4 = '\x01';
  }
  iVar8 = 0;
  puVar10 = *(undefined4 **)(_UNK_032b6ec0 + 0x32b6c60);
  while( true ) {
    iVar5 = *(int *)(param_1 + 8);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar5 + 0xc) <= iVar8) break;
    iVar9 = *(int *)(param_1 + 8);
    iVar5 = **(int **)(**(int **)(_UNK_032b6ec4 + 0x32b6c84) + 0x5c);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = func_0x04cfd760(iVar9,iVar8,*puVar10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar9 + 8);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x02e651cc(iVar5,uVar6,0);
    if (iVar5 == 0) {
      iVar5 = 0;
      while( true ) {
        iVar9 = *(int *)(param_1 + 8);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar9 = func_0x04cfd760(iVar9,iVar8,*puVar10);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar9 + 0xc) <= iVar5) break;
        if (*(int *)(**(int **)(_UNK_032b6ec8 + 0x32b6d38) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x0202346c(0);
        iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_032b6ecc + 0x32b6d60));
        func_0x02025440(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(param_1 + 8);
        *(undefined1 *)(iVar2 + 0x25) = 0;
        *(undefined4 *)(iVar2 + 8) = 0x46;
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x04cfd760(iVar7,iVar8,*puVar10);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar7 + 8);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02024d08(iVar9,iVar2,1,0);
        iVar5 = iVar5 + 1;
      }
    }
    iVar8 = iVar8 + 1;
  }
  iVar8 = *(int *)(param_1 + 0xc);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  func_0x03bbd324(iVar8,1,**(undefined4 **)(_UNK_032b6ed0 + 0x32b6e08));
  if (*(int *)(**(int **)(_UNK_032b6ed4 + 0x32b6e1c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar8 = func_0x04e4a028(**(undefined4 **)(_UNK_032b6ed8 + 0x32b6e38));
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar8,0x15,0);
  if (*(int *)(**(int **)(_UNK_032b6edc + 0x32b6e68) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar8 = FUN_032a7050(0);
  if (iVar8 == 0) {
    return;
  }
  iVar5 = func_0x02953fd4(0x828d,0);
  if (iVar5 == 0) {
    iVar8 = func_0x032b7874(iVar8);
    if (iVar8 == 0) {
      return;
    }
    pcVar4 = (char *)(_UNK_02beb294 + 0x2beb1e4);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02beb298 + 0x2beb1f8),0);
      *pcVar4 = '\x01';
    }
    iVar5 = func_0x02953fd4(0x1ddd,0);
    if (iVar5 == 0) {
      iVar8 = *(int *)(iVar8 + 0x24);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      piVar1 = (int *)func_0x035e8140(iVar8,**(undefined4 **)(_UNK_02beb29c + 0x2beb260));
      if (piVar1 == (int *)0x0) {
        func_0x014388e4();
      }
                    /* WARNING: Could not recover jumptable at 0x02beb290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x188))(piVar1,1,*(undefined4 *)(*piVar1 + 0x18c));
      return;
    }
    iVar5 = func_0x029540a4(0x1ddd,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar5 = func_0x029540a4(0x828d,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar5 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar5 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,iVar8,0);
  iVar9 = *(int *)(iVar5 + 8);
  uVar6 = *(undefined4 *)(iVar5 + 0xc);
  iVar8 = *(int *)(iVar5 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar3 = 2;
  if (iVar8 == 0) {
    uVar3 = 1;
  }
  func_0x024f56d0(iVar9,uVar6,&uStack_30,uVar3,0,0);
  return;
}

