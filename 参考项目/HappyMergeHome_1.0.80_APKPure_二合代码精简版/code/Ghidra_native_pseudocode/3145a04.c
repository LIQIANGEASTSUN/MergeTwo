
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03155a04(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar5 = (char *)(_UNK_03155b04 + 0x3155a18);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03155b08 + 0x3155a2c));
    func_0x01438628(*(undefined4 *)(_UNK_03155b0c + 0x3155a38));
    func_0x01438628(*(undefined4 *)(_UNK_03155b10 + 0x3155a44));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_03155b14 + 0x3155a58) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03155b18 + 0x3155a74));
  uVar2 = FUN_0314d45c(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar1,uVar2,0);
  iVar1 = func_0x02b1cc10(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b1ec60(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_03155b1c + 0x3155ad8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_03143658();
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_0316d1c0 + 0x316ce88);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0316d1c4 + 0x316ce9c),0);
      func_0x01438628(*(undefined4 *)(_UNK_0316d1c8 + 0x316cea8));
      func_0x01438628(*(undefined4 *)(_UNK_0316d1cc + 0x316ceb4));
      func_0x01438628(*(undefined4 *)(_UNK_0316d1d0 + 0x316cec0));
      func_0x01438628(*(undefined4 *)(_UNK_0316d1d4 + 0x316cecc));
      func_0x01438628(*(undefined4 *)(_UNK_0316d1d8 + 0x316ced8));
      func_0x01438628(*(undefined4 *)(_UNK_0316d1dc + 0x316cee4));
      func_0x01438628(*(undefined4 *)(_UNK_0316d1e0 + 0x316cef0));
      func_0x01438628(*(undefined4 *)(_UNK_0316d1e4 + 0x316cefc));
      *pcVar5 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_30 = 0;
    iVar3 = func_0x02953fd4(0x79f6,0);
    if (iVar3 == 0) {
      if ((*(int *)(iVar1 + 0x44) != 0) &&
         (iVar3 = func_0x046cc548(*(int *)(iVar1 + 0x44),
                                  **(undefined4 **)(_UNK_0316d1e8 + 0x316cf80)), iVar3 != 0)) {
        iVar1 = *(int *)(iVar1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x046ccdcc(&uStack_58,iVar1,**(undefined4 **)(_UNK_0316d1ec + 0x316cfb0));
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        puVar6 = *(undefined4 **)(_UNK_0316d1f0 + 0x316cfdc);
        piVar7 = *(int **)(_UNK_0316d1f4 + 0x316cfe4);
        piVar8 = *(int **)(_UNK_0316d1f8 + 0x316cfec);
        while (iVar1 = func_0x048a60cc(&uStack_40,*puVar6), uVar2 = uStack_34, iVar1 != 0) {
          iVar1 = (int)uStack_30;
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x024eec50(iVar1,0,0);
          if (iVar3 == 0) {
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar4 = func_0x014e94d8(iVar1,0);
            if (*(int *)(*piVar7 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x024eec50(uVar4,0,0);
            if (iVar3 == 0) {
              if (*(int *)(*piVar8 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar3 = FUN_0313e53c(0);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar2 = FUN_0314d684(iVar3,uVar2,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x014e94d8(iVar1,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x014e94e8(iVar1,uVar2,0);
            }
          }
        }
        func_0x048a6218(&uStack_40,**(undefined4 **)(_UNK_0316d200 + 0x316d100));
      }
    }
    else {
      iVar3 = func_0x029540a4(0x79f6,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x02868e1c(iVar3,iVar1,0);
    }
    return;
  }
  return;
}

