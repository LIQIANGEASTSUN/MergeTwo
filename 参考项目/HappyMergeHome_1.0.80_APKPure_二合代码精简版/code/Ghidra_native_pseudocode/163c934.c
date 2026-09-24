
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0164c934(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_0164cb1c + 0x164c954);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0164cb20 + 0x164c968));
    func_0x01438628(*(undefined4 *)(_UNK_0164cb24 + 0x164c974));
    func_0x01438628(*(undefined4 *)(_UNK_0164cb28 + 0x164c980));
    func_0x01438628(*(undefined4 *)(_UNK_0164cb2c + 0x164c98c));
    func_0x01438628(*(undefined4 *)(_UNK_0164cb30 + 0x164c998));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x862b,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0164cb34 + 0x164ca08) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0164cb38 + 0x164ca24));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_0164cb3c + 0x164ca4c);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar7) {
        uVar6 = 0;
        uVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_0164cb44 + 0x164caa8);
        goto LAB_0164cafc;
      }
      iVar2 = func_0x0152983c(iVar1,iVar7,*puVar8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar2 + 8) == param_3) break;
      iVar7 = iVar7 + 1;
    }
    iVar2 = func_0x0152983c(iVar1,iVar7,*puVar8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar2 + 0x18);
    iVar1 = func_0x0152983c(iVar1,iVar7,*puVar8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar8 = *(undefined4 **)(_UNK_0164cb40 + 0x164cafc);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
LAB_0164cafc:
    uVar4 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,uVar6,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x862b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

