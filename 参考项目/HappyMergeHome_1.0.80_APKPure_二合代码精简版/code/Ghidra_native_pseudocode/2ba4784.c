
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bb4784(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02bb4b8c + 0x2bb479c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb4b90 + 0x2bb47b0));
    func_0x01438628(*(undefined4 *)(_UNK_02bb4b94 + 0x2bb47bc));
    func_0x01438628(*(undefined4 *)(_UNK_02bb4b98 + 0x2bb47c8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb4b9c + 0x2bb47d4));
    func_0x01438628(*(undefined4 *)(_UNK_02bb4ba0 + 0x2bb47e0));
    func_0x01438628(*(undefined4 *)(_UNK_02bb4ba4 + 0x2bb47ec));
    func_0x01438628(*(undefined4 *)(_UNK_02bb4ba8 + 0x2bb47f8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb4bac + 0x2bb4804));
    func_0x01438628(*(undefined4 *)(_UNK_02bb4bb0 + 0x2bb4810));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x262c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x262c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bb4bb4 + 0x2bb486c));
  func_0x02c38ac4(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 8) = param_1;
  func_0x014385cc((undefined4 *)(iVar1 + 8),param_1);
  iVar6 = FUN_02baef1c(param_1);
  if (iVar6 != 0) {
    iVar6 = FUN_02baef1c(param_1);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar6 + 8) != 0) {
      if (*(int *)(**(int **)(_UNK_02bb4bb8 + 0x2bb48d8) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar10 = *(undefined4 **)(_UNK_02bb4bbc + 0x2bb48f4);
      iVar6 = func_0x014e9518(*puVar10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar6 + 0x18) != 0) {
        iVar6 = 0;
        puVar8 = *(undefined4 **)(_UNK_02bb4bc0 + 0x2bb4924);
        puVar9 = *(undefined4 **)(_UNK_02bb4bc4 + 0x2bb492c);
        while( true ) {
          iVar2 = FUN_02baef1c(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 8);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar2 + 0xc) <= iVar6) break;
          if (*(int *)(**(int **)(_UNK_02bb4bc8 + 0x2bb4968) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(*puVar10);
          iVar3 = FUN_02baef1c(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar7 = func_0x03b7661c(iVar3,iVar6,*puVar8);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x029a6fa8(iVar2,uVar7,0);
          if (iVar2 == 0) {
            iVar2 = FUN_02baef1c(param_1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 8);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            func_0x03b760fc(iVar2,iVar6,*puVar9);
            iVar6 = iVar6 + -1;
          }
          iVar6 = iVar6 + 1;
        }
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar6 = 0;
        puVar8 = *(undefined4 **)(_UNK_02bb4bcc + 0x2bb4a48);
        while( true ) {
          *(int *)(iVar1 + 0xc) = iVar6;
          iVar2 = FUN_02baef1c(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar2 + 0xc) <= iVar6) break;
          if (*(int *)(**(int **)(_UNK_02bb4bd0 + 0x2bb4a88) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(*puVar10);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar1 + 0x10);
          iVar6 = *(int *)(iVar6 + 0x18);
          if (iVar2 == 0) {
            iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02bb4bd4 + 0x2bb4acc));
            func_0x03a062d0(iVar2,iVar1,**(undefined4 **)(_UNK_02bb4bd8 + 0x2bb4ae8),0);
            *(int *)(iVar1 + 0x10) = iVar2;
            func_0x014385cc((int *)(iVar1 + 0x10),iVar2);
          }
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024f0618(iVar6,iVar2,*puVar8);
          if (iVar6 == 0) {
            iVar6 = FUN_02baef1c(param_1);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar6 + 0xc);
            uVar7 = *(undefined4 *)(iVar1 + 0xc);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            func_0x03b760fc(iVar6,uVar7,**(undefined4 **)(_UNK_02bb4bdc + 0x2bb4b68));
            iVar6 = *(int *)(iVar1 + 0xc) + -1;
            *(int *)(iVar1 + 0xc) = iVar6;
          }
          else {
            iVar6 = *(int *)(iVar1 + 0xc);
          }
          iVar6 = iVar6 + 1;
        }
      }
    }
  }
  return;
}

