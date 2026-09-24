/* Ghidra 12.1.2 native pseudocode; RVA 0x4945614; MergeEngine.Util.WeightedItem<T>..ctor; status ok */


void MergeEngine_Util_WeightedItem_T____ctor
               (undefined8 param_1,undefined8 *****param_2,undefined4 param_3,ulong param_4,
               long param_5)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long alStack_90 [4];
  undefined8 ****ppppuStack_70;
  long lStack_68;
  
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  uVar6 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8) + 0xfc);
  lVar4 = -(uVar6 + 0xf & 0x1fffffff0);
  ppppuStack_70 = param_2;
  func_0x057da5fc(param_1,0);
  lVar7 = *(long *)(param_5 + 0x20);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x28)) {
    param_2 = &ppppuStack_70;
  }
  func_0x072ce970((long)&ppppuStack_70 + lVar4,param_2,uVar6);
  func_0x03280a3c(param_1,*(undefined8 *)(**(long **)(lVar7 + 0xc0) + 0x80),
                  (long)&ppppuStack_70 + lVar4,uVar6);
  func_0x02f176f0(param_1,*(long *)(**(long **)(*(long *)(param_5 + 0x20) + 0xc0) + 0x80) + 0x20,
                  param_3);
  func_0x02f176f0(param_1,*(long *)(**(long **)(*(long *)(param_5 + 0x20) + 0xc0) + 0x80) + 0x40,
                  param_4 & 0xffffffff);
  if (*(long *)(lVar3 + 0x28) == lStack_68) {
    return;
  }
  lVar3 = func_0x072ce990();
  *(undefined8 *)((long)alStack_90 + lVar4) = 0x4a4573c;
  *(long *)((long)alStack_90 + lVar4 + 0x10) = param_5;
  *(ulong *)((long)alStack_90 + lVar4 + 0x18) = param_4 & 0xffffffff;
  if ((bRam0000000007e1a19b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e558);
    bRam0000000007e1a19b = 1;
  }
  puVar1 = PTR_DAT_0774e558;
  lVar4 = *(long *)(lVar3 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = func_0x0325681c();
  }
  uVar5 = **(undefined8 **)(lVar4 + 0xc0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)puVar1);
  }
  uVar5 = func_0x057a51c4(uVar5,0);
  bVar2 = func_0x06cfe050(uVar5,0);
  lVar3 = *(long *)(lVar3 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = func_0x0325681c(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = func_0x0325681c();
  }
  **(byte **)(lVar3 + 0xb8) = bVar2 & 1;
  return;
}

