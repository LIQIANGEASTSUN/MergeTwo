
/* WARNING: Possible PIC construction at 0x02c1c168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c1c16c) */
/* WARNING: Removing unreachable block (ram,0x02c1c1bc) */
/* WARNING: Removing unreachable block (ram,0x02c1c178) */
/* WARNING: Removing unreachable block (ram,0x02c1c188) */
/* WARNING: Removing unreachable block (ram,0x02c1c194) */
/* WARNING: Removing unreachable block (ram,0x02c1c198) */
/* WARNING: Removing unreachable block (ram,0x02c1c1c0) */
/* WARNING: Removing unreachable block (ram,0x02c1c1cc) */
/* WARNING: Removing unreachable block (ram,0x02c1c1a4) */
/* WARNING: Removing unreachable block (ram,0x02c1c1ac) */
/* WARNING: Removing unreachable block (ram,0x02c1c1b0) */
/* WARNING: Removing unreachable block (ram,0x02c1c1b4) */
/* WARNING: Removing unreachable block (ram,0x02c1c1d4) */
/* WARNING: Removing unreachable block (ram,0x02c1c1e0) */
/* WARNING: Removing unreachable block (ram,0x02c1c1e4) */
/* WARNING: Removing unreachable block (ram,0x02c1c1fc) */
/* WARNING: Removing unreachable block (ram,0x02c1c1b8) */
/* WARNING: Removing unreachable block (ram,0x02c1c1f0) */
/* WARNING: Removing unreachable block (ram,0x02c1c204) */
/* WARNING: Removing unreachable block (ram,0x02c312b8) */
/* WARNING: Removing unreachable block (ram,0x02c312d8) */
/* WARNING: Removing unreachable block (ram,0x02c312ec) */
/* WARNING: Removing unreachable block (ram,0x02c31334) */
/* WARNING: Removing unreachable block (ram,0x02c31340) */
/* WARNING: Removing unreachable block (ram,0x02c31358) */
/* WARNING: Removing unreachable block (ram,0x02c3135c) */
/* WARNING: Removing unreachable block (ram,0x02c31370) */
/* WARNING: Removing unreachable block (ram,0x02c31380) */
/* WARNING: Removing unreachable block (ram,0x02c31390) */
/* WARNING: Removing unreachable block (ram,0x02c3139c) */
/* WARNING: Removing unreachable block (ram,0x02c313a0) */
/* WARNING: Removing unreachable block (ram,0x02c313b8) */
/* WARNING: Removing unreachable block (ram,0x02c313bc) */
/* WARNING: Removing unreachable block (ram,0x02c31300) */
/* WARNING: Removing unreachable block (ram,0x02c31318) */
/* WARNING: Removing unreachable block (ram,0x02c3131c) */
/* WARNING: Removing unreachable block (ram,0x0286c1e8) */
/* WARNING: Removing unreachable block (ram,0x0286c240) */
/* WARNING: Removing unreachable block (ram,0x0286c24c) */
/* WARNING: Removing unreachable block (ram,0x0286c288) */
/* WARNING: Removing unreachable block (ram,0x0286c28c) */
/* WARNING: Removing unreachable block (ram,0x0286c298) */
/* WARNING: Removing unreachable block (ram,0x0286c29c) */
/* WARNING: Removing unreachable block (ram,0x02c1c184) */

void FUN_02c1c0e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x02953fd4(0x4fbb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4fbb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&UNK_05d3ec04)(iVar1,0,0);
  return;
}

