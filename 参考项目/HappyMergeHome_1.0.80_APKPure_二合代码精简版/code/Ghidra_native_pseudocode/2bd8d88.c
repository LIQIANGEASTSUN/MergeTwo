
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be8d88(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02be9064 + 0x2be8d9c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be9068 + 0x2be8db0));
    func_0x01438628(*(undefined4 *)(_UNK_02be906c + 0x2be8dbc));
    func_0x01438628(*(undefined4 *)(_UNK_02be9070 + 0x2be8dc8));
    func_0x01438628(*(undefined4 *)(_UNK_02be9074 + 0x2be8dd4));
    func_0x01438628(*(undefined4 *)(_UNK_02be9078 + 0x2be8de0));
    func_0x01438628(*(undefined4 *)(_UNK_02be907c + 0x2be8dec));
    func_0x01438628(*(undefined4 *)(_UNK_02be9080 + 0x2be8df8));
    func_0x01438628(*(undefined4 *)(_UNK_02be9084 + 0x2be8e04));
    func_0x01438628(*(undefined4 *)(_UNK_02be9088 + 0x2be8e10));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4ee4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4ee4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar7,uVar5,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02be908c + 0x2be8e68));
  func_0x02c460c8(iVar1,0);
  piVar8 = *(int **)(_UNK_02be9090 + 0x2be8e84);
  if (*(char *)(*(int *)(*piVar8 + 0x5c) + 4) == '\0') {
    puVar2 = *(undefined4 **)(_UNK_02be9094 + 0x2be8ea4);
    *(undefined1 *)(*(int *)(*piVar8 + 0x5c) + 4) = 1;
    iVar7 = func_0x014388d4(*puVar2);
    func_0x024eec60(iVar7,**(undefined4 **)(_UNK_02be9098 + 0x2be8ec0),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piVar6 = (int *)(iVar1 + 8);
    *piVar6 = iVar7;
    func_0x014385cc(piVar6,iVar7);
    iVar7 = *piVar6;
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar7,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uStack_28 = 0;
    func_0x024ef1f8(iVar7,0x461c4000,0x461c4000,0x461c4000);
    iVar7 = *piVar6;
    if (*(int *)(**(int **)(_UNK_02be909c + 0x2be8f40) + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x024eec74(iVar7,0);
    iVar7 = *piVar6;
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x024ef308(iVar7,0);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02be90a0 + 0x2be8f90));
    func_0x02b589fc(uVar5,uVar3,0);
    **(undefined4 **)(*piVar8 + 0x5c) = uVar5;
    func_0x014385cc(*(undefined4 *)(*piVar8 + 0x5c),uVar5);
    iVar7 = **(int **)(*piVar8 + 0x5c);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    puVar2 = *(undefined4 **)(_UNK_02be90a4 + 0x2be8ff0);
    uStack_28 = 0;
    func_0x02b59344(iVar7,*puVar2,200,200);
    iVar7 = **(int **)(*piVar8 + 0x5c);
    uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02be90a8 + 0x2be900c));
    func_0x038ec9e8(uVar3,iVar1,**(undefined4 **)(_UNK_02be90ac + 0x2be902c),0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uStack_28 = 0;
    func_0x02b59700(iVar7,*puVar2,uVar3,0x8c);
  }
  return;
}

