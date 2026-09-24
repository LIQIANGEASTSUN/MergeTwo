
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02baabf4(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02baaf5c + 0x2baac08);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02baaf60 + 0x2baac1c));
    func_0x01438628(*(undefined4 *)(_UNK_02baaf64 + 0x2baac28));
    func_0x01438628(*(undefined4 *)(_UNK_02baaf68 + 0x2baac34));
    func_0x01438628(*(undefined4 *)(_UNK_02baaf6c + 0x2baac40));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xfdc,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0xfdc,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    uVar1 = func_0x024f56e0(&uStack_30,0,0);
    return uVar1;
  }
  piVar9 = *(int **)(_UNK_02baaf70 + 0x2baac98);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar10 = *(undefined4 **)(_UNK_02baaf74 + 0x2baacb4);
  iVar2 = func_0x014e9518(*puVar10);
  piVar7 = *(int **)(_UNK_02baaf78 + 0x2baacc8);
  iVar4 = *piVar7;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
    iVar4 = *piVar7;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xa0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x02b0fc08(iVar2,uVar6,0);
  piVar8 = *(int **)(_UNK_02baaf7c + 0x2baad10);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x024efb9c(uVar6,0);
  if (iVar2 == 0) {
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(*puVar10);
    iVar4 = *piVar7;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x014387a4();
      iVar4 = *piVar7;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x48);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x02b0fc08(iVar2,uVar6,0);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x024efb9c(uVar6,0);
    if (iVar2 == 0) {
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(*puVar10);
      iVar4 = *piVar7;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x014387a4();
        iVar4 = *piVar7;
      }
      uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x188);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x02b0fc08(iVar2,uVar6,0);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x024efb9c(uVar6,0);
      if (iVar2 == 0) {
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(*puVar10);
        iVar4 = *piVar7;
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x014387a4();
          iVar4 = *piVar7;
        }
        uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x160);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar6 = func_0x02b0fc08(iVar2,uVar6,0);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x024efb9c(uVar6,0);
        if (iVar2 == 0) {
          if (*(int *)(*piVar9 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(*puVar10);
          iVar4 = *piVar7;
          if (*(int *)(iVar4 + 0x74) == 0) {
            func_0x014387a4();
            iVar4 = *piVar7;
          }
          uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x18c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar6 = func_0x02b0fc08(iVar2,uVar6,0);
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          uVar1 = func_0x024efb9c(uVar6,0);
          return uVar1 ^ 1;
        }
      }
    }
  }
  return 0;
}

