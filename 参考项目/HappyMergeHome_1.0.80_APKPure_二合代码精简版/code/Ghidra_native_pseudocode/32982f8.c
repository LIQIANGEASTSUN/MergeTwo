
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032a82f8(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int aiStack_24 [4];
  
  pcVar5 = (char *)(_UNK_032a837c + 0x32a8308);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032a8380 + 0x32a831c));
    func_0x01438628(*(undefined4 *)(_UNK_032a8384 + 0x32a8328));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_032a8388 + 0x32a833c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_032a838c + 0x32a8358));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  pcVar5 = (char *)(_UNK_032a5b60 + 0x32a5908);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032a5b64 + 0x32a591c));
    func_0x01438628(*(undefined4 *)(_UNK_032a5b68 + 0x32a5928));
    func_0x01438628(*(undefined4 *)(_UNK_032a5b6c + 0x32a5934));
    func_0x01438628(*(undefined4 *)(_UNK_032a5b70 + 0x32a5940));
    func_0x01438628(*(undefined4 *)(_UNK_032a5b74 + 0x32a594c));
    func_0x01438628(*(undefined4 *)(_UNK_032a5b78 + 0x32a5958));
    func_0x01438628(*(undefined4 *)(_UNK_032a5b7c + 0x32a5964));
    func_0x01438628(*(undefined4 *)(_UNK_032a5b80 + 0x32a5970));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x8262,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x8262,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    puStack_34 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puStack_38 = (undefined4 *)0x0;
    uStack_28 = 0;
    func_0x024f56c0(&puStack_50,0,0,0);
    puStack_38 = puStack_50;
    puStack_34 = (undefined4 *)uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&puStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&puStack_38,iVar3,0);
    func_0x01523a1c(&puStack_38,0,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar3 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    iVar3 = func_0x024f56d0(iVar6,uVar7,&puStack_38,uVar4,0,0);
    return iVar3;
  }
  if (*(int *)(**(int **)(_UNK_032a5b84 + 0x32a59cc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032a5b88 + 0x32a59e8));
  piVar8 = *(int **)(_UNK_032a5b8c + 0x32a59fc);
  iVar6 = *piVar8;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x6c0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02b0fc08(iVar2,uVar7,0);
  if (*(int *)(**(int **)(_UNK_032a5b90 + 0x32a5a44) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x024eec50(uVar7,0,0);
  if (iVar2 == 0) {
    func_0x032a5ba4(iVar3);
    func_0x032a5f4c(iVar3);
    if (*(int *)(**(int **)(_UNK_032a5b94 + 0x32a5a88) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032a5b98 + 0x32a5aa4));
    piVar8 = *(int **)(_UNK_032a5b9c + 0x32a5ab8);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar8;
    }
    iVar9 = **(int **)(_UNK_032a5ba0 + 0x32a5ad8);
    iVar6 = *(int *)(iVar9 + 0x1c);
    uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x324);
    if (iVar6 == 0) {
      func_0x014909d8(iVar9);
      iVar6 = *(int *)(iVar9 + 0x1c);
    }
    iVar2 = *(int *)(iVar6 + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x0149097c();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x0149097c();
    }
    uVar4 = **(undefined4 **)(iVar2 + 0x5c);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_029903f0 + 0x29901d4);
    aiStack_24[0] = iVar3;
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar7,uVar4,0);
      func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
      func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
      func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
      *pcVar5 = '\x01';
    }
    uStack_28 = 0;
    uStack_2c = 0;
    iVar2 = func_0x02953fd4(0x226,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar3 + 0x14);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x04753c80(iVar2,uVar7,**(undefined4 **)(_UNK_02990404 + 0x2990298));
      iVar2 = 0;
      if (iVar6 != 0) {
        iVar6 = *(int *)(iVar3 + 0x14);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x0475399c(iVar6,uVar7,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
        if (iVar6 != 0) {
          iVar2 = *(int *)(iVar3 + 0x10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x024f2f10(iVar2,0);
          if (iVar2 == 0) {
            iVar3 = *(int *)(iVar3 + 0x10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x024f2f20(iVar3,200,0);
            if (iVar3 == 0) {
              return 0;
            }
          }
          puStack_34 = &uStack_28;
          puStack_38 = &uStack_30;
          piStack_3c = aiStack_24;
          uStack_40 = 0;
          uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
          func_0x0298fd74(uVar1,uVar7,uVar4);
          iVar3 = *(int *)(aiStack_24[0] + 0x18);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03a39760(iVar3,uVar1,**(undefined4 **)(_UNK_02990410 + 0x299038c));
          func_0x010b8c68(&uStack_40);
          iVar2 = 1;
        }
      }
    }
    else {
      iVar2 = func_0x029540a4(0x226,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uStack_48 = 0;
      iVar2 = func_0x02871898(iVar2,iVar3,uVar7,uVar4);
    }
    return iVar2;
  }
  return iVar2;
}

