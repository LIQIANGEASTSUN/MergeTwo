
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_02bd1624(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_02bd1780 + 0x2bd1638);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd1784 + 0x2bd164c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd1788 + 0x2bd1658));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x742,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x742,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_02882944 + 0x2882864);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02882948 + 0x2882878),param_1,0);
      *pcVar6 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
    piVar1 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0288294c + 0x2882934));
    return piVar1;
  }
  piVar1 = *(int **)(_UNK_02bd178c + 0x2bd16b0);
  iVar2 = *piVar1;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar1;
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  piVar1 = (int *)func_0x02b5461c(iVar2,0);
  if (piVar1 != (int *)0x0) {
    uVar3 = (uint)*(byte *)(**(int **)(_UNK_02bd1790 + 0x2bd1700) + 0xb8);
    if ((uVar3 <= *(byte *)(*piVar1 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar1 + 100) + uVar3 * 4 + -4) == **(int **)(_UNK_02bd1790 + 0x2bd1700))
       ) {
      FUN_026f6b3c(piVar1,0xffffffff,0);
      goto LAB_02bd1748;
    }
    func_0x01438ca8(piVar1);
  }
  func_0x014388e4();
  FUN_026f6b3c(0,0xffffffff,0);
  func_0x014388e4();
  piVar1 = (int *)0x0;
LAB_02bd1748:
  func_0x0268be6c(piVar1,0);
  func_0x02bd1794(param_1,piVar1);
  return piVar1;
}

